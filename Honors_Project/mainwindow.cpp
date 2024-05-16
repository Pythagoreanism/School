#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug> // Used to debug code
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) // Constructor (with inheritance)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentQuestionIndex_Addition = 0;
    currentQuestionIndex_Derivatives = 0;

    // My code for connecting multiple slots for signal
    //
    // Template:
    // connect(ui->INSERT_WIDGET_TO_SIGNAL, SIGNAL(clicked()), this, SLOT(INSERT_SLOT_TO_CALL);
    //
    // Template (for functions/slots with parameters):
    // connect(ui->INSERT_WIDGET_TO_SIGNAL, &QWidget::signalName, this, [this](/* signal parameters if any */) {
    //   INSERT_SLOT_TO_CALL(/* custom parameters */);
    // });

    connect(ui->additionButton, &QPushButton::clicked, this, [this]() {
        displayQuestion(currentQuestionIndex_Addition);
    });

    connect(ui->derivativesButton, &QPushButton::clicked, this, [this]() {
        displayQuestion_Derivatives(currentQuestionIndex_Derivatives);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // Index 1, topics menu
}


void MainWindow::on_arithmeticButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2); // Index 2, arithmetic menu
}


void MainWindow::on_backButton_Arithmetic_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // Index 1, topics menu
}


void MainWindow::on_additionButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3); // Index 3, addition menu
}


void MainWindow::on_backButton_Addition_clicked()
{
    ui->stackedWidget->setCurrentIndex(2); // Index 2, arithmetic menu
}


void MainWindow::displayQuestion(int questionIndex) { // My Slot, signaled by additionButton
    switch (questionIndex) {
        case 0:
            ui->questionLabel_Addition->setText("5 + 18"); // First question
            break;
        case 1:
            ui->questionLabel_Addition->setText("77 + 33"); // second
            break;
        case 2:
            ui->questionLabel_Addition->setText("211 + 100");
            break;
        case 3:
            ui->stackedWidget->setCurrentIndex(2); // Index 2, arithmetic menu
        default:
            ui->questionLabel_Addition->setText("QUESTION");
            // TODO: Throw exception
    }
}


void MainWindow::on_answerButton_clicked()
{
    QString userInput = ui->answerInputBox->text(); // QString is the string version used by QT
    bool ok;
    int correctAns = 0;
    int userAns = userInput.toInt(&ok); // The bool `ok` is passed by referenced which is true if converted succesfully

    if (currentQuestionIndex_Addition == 0) {
        correctAns = 23;
    }
    else if (currentQuestionIndex_Addition == 1) {
        correctAns = 110;
    }
    else if (currentQuestionIndex_Addition == 2) {
        correctAns = 311;
    }

    if (ok && currentQuestionIndex_Addition < 3) {
        if (userAns == correctAns) {
            // Display correct:
            QMessageBox::information(this, "Result", "Correct! Good job!");
            // TODO: Use fstream to count score
            // Display next question:
            currentQuestionIndex_Addition++;
            displayQuestion(currentQuestionIndex_Addition);
            //qDebug() << "It works! Correct answer! Input is " << userAns;
        }
        else {
            // Display incorrect:
            QMessageBox::information(this, "Result", "Incorrect :(. The right answer is: " + QString::number(correctAns));
            // TODO: Use fstream to count incorrect
            // Display next question:
            currentQuestionIndex_Addition++;
            displayQuestion(currentQuestionIndex_Addition);
            //qDebug() << "It works! Incorrect answer. Input is " << userAns;
        }
    }
    else {
        //qDebug() << "Answer not a string. Input is " << userInput;
        QMessageBox::warning(this, "Input Error", "Please enter a number");
        // TODO: Throw exception
    }

    ui->answerInputBox->clear();
}


void MainWindow::on_backButton_AdditionHelp2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4); // Index 4, addition help pg 1
}


void MainWindow::on_backButton_AdditionHelp_clicked()
{
    ui->stackedWidget->setCurrentIndex(2); // Index 2, addition menu
}


void MainWindow::on_helpAdditionButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4); // Index 4, addition help pg 1
}


void MainWindow::on_nextButton_AdditionHelp_clicked()
{
    ui->stackedWidget->setCurrentIndex(5); // Index 5, addition help pg 2
}


void MainWindow::on_calculusButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(6); // Index 6, calculus menu
}


void MainWindow::on_derivativesButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(7); // Index 7, derivatives
}


void MainWindow::on_backButton_Derivatives_clicked()
{
    ui->stackedWidget->setCurrentIndex(6); // Index 6, calculus menu
}


void MainWindow::on_backButton_Calculus_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // Index 1, topics menu
}


void MainWindow::displayQuestion_Derivatives(unsigned int questionIndex) {
    switch (questionIndex) {
    case 0:
        ui->questionLabel_Derivatives->setText("What is the derivative of 3x^2?");
        break;
    case 1:
        ui->questionLabel_Derivatives->setText("What is the derivative of 6x^5");
        break;
    case 2:
        ui->questionLabel_Derivatives->setText("What is the derivative of 10x^4");
        break;
    case 3:
        ui->stackedWidget->setCurrentIndex(6); // Index 6, calculus menu
    default:
        ui->questionLabel_Derivatives->setText("Error in displayQuestion_Derivatives function");
        // TODO: Throw exception
    }
}


void MainWindow::on_answerButton_Derivatives_clicked()
{
    QString userInput = ui->answerInputBox_Derivatives->text();
    QString answer = "";
    QString answer2 = ""; // for exponents of 1

    if (currentQuestionIndex_Derivatives == 0) {
        answer = "6x^1";
        answer2 = "6x";
    }
    else if (currentQuestionIndex_Derivatives == 1) {
        answer = "30x^4";
    }
    else if (currentQuestionIndex_Derivatives == 2) {
        answer = "40x^3";
    }
    else {
        // TODO: Throw exception
    }

    if (userInput == answer) {
        //qDebug() << "userInput == answer. Input: " << userInput;
        QMessageBox::information(this, "Result", "Correct!");
        currentQuestionIndex_Derivatives++;
        displayQuestion_Derivatives(currentQuestionIndex_Derivatives);
    }
    else {
        //qDebug() << "userInput != answer. Input: " << userInput;
        QMessageBox::information(this, "Result", "Incorrect.");
        currentQuestionIndex_Derivatives++;
        displayQuestion_Derivatives(currentQuestionIndex_Derivatives);
    }
}


void MainWindow::on_backButton_DerivativesHelp_clicked()
{
    ui->stackedWidget->setCurrentIndex(6); // Index 6,
}


void MainWindow::on_helpDerivativesButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

