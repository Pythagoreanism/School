/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *pageLabel_Start;
    QPushButton *startButton;
    QLabel *label_2;
    QWidget *page_2;
    QPushButton *arithmeticButton;
    QLabel *pageLabel_Topics;
    QPushButton *algebraButton;
    QPushButton *calculusButton;
    QWidget *page_3;
    QLabel *pageLabel_Arithmetic;
    QPushButton *additionButton;
    QPushButton *subtractionButton;
    QPushButton *multiplicationButton;
    QPushButton *divisionButton;
    QPushButton *backButton_Arithmetic;
    QPushButton *helpAdditionButton;
    QPushButton *helpSubtractionButton;
    QPushButton *helpMultiplicationButton;
    QPushButton *helpDivisionButton;
    QWidget *page_4;
    QLabel *pageLabel_Addition;
    QLabel *questionLabel_Addition;
    QLabel *headingLabel_Addition;
    QPushButton *backButton_Addition;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *answerLabel_Addition;
    QLineEdit *answerInputBox;
    QPushButton *answerButton;
    QWidget *page_5;
    QLabel *pageLabel_AdditionHelp;
    QTextBrowser *text_AdditionHelp;
    QPushButton *backButton_AdditionHelp;
    QPushButton *nextButton_AdditionHelp;
    QWidget *page_6;
    QPushButton *backButton_AdditionHelp2;
    QTextBrowser *text_AdditionHelp2;
    QLabel *pageLabel_AdditionHelp2;
    QWidget *page_7;
    QPushButton *backButton_Calculus;
    QLabel *pageLabel_Calculus;
    QPushButton *limitsButton;
    QPushButton *derivativesButton;
    QPushButton *helpDerivativesButton;
    QPushButton *helpLimitsButton;
    QWidget *page_8;
    QLabel *pageLabel_Derivatives;
    QPushButton *backButton_Derivatives;
    QLabel *headingLabel_Derivatives;
    QLabel *questionLabel_Derivatives;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *answerLabel_Derivatives;
    QLineEdit *answerInputBox_Derivatives;
    QPushButton *answerButton_Derivatives;
    QWidget *page_9;
    QPushButton *backButton_DerivativesHelp;
    QLabel *label;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 17, 800, 561));
        page = new QWidget();
        page->setObjectName("page");
        pageLabel_Start = new QLabel(page);
        pageLabel_Start->setObjectName("pageLabel_Start");
        pageLabel_Start->setGeometry(QRect(300, 10, 201, 51));
        QFont font;
        font.setPointSize(16);
        pageLabel_Start->setFont(font);
        pageLabel_Start->setAlignment(Qt::AlignCenter);
        startButton = new QPushButton(page);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(310, 430, 181, 31));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(290, 140, 221, 121));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Poor Richard")});
        font1.setPointSize(32);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        arithmeticButton = new QPushButton(page_2);
        arithmeticButton->setObjectName("arithmeticButton");
        arithmeticButton->setGeometry(QRect(160, 240, 141, 41));
        QFont font2;
        font2.setPointSize(12);
        arithmeticButton->setFont(font2);
        pageLabel_Topics = new QLabel(page_2);
        pageLabel_Topics->setObjectName("pageLabel_Topics");
        pageLabel_Topics->setGeometry(QRect(300, 10, 201, 41));
        pageLabel_Topics->setFont(font);
        pageLabel_Topics->setAlignment(Qt::AlignCenter);
        algebraButton = new QPushButton(page_2);
        algebraButton->setObjectName("algebraButton");
        algebraButton->setGeometry(QRect(330, 240, 141, 41));
        algebraButton->setFont(font2);
        calculusButton = new QPushButton(page_2);
        calculusButton->setObjectName("calculusButton");
        calculusButton->setGeometry(QRect(500, 240, 121, 41));
        calculusButton->setFont(font2);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        pageLabel_Arithmetic = new QLabel(page_3);
        pageLabel_Arithmetic->setObjectName("pageLabel_Arithmetic");
        pageLabel_Arithmetic->setGeometry(QRect(300, 10, 201, 41));
        pageLabel_Arithmetic->setFont(font);
        pageLabel_Arithmetic->setAlignment(Qt::AlignCenter);
        additionButton = new QPushButton(page_3);
        additionButton->setObjectName("additionButton");
        additionButton->setGeometry(QRect(330, 170, 141, 41));
        additionButton->setFont(font2);
        subtractionButton = new QPushButton(page_3);
        subtractionButton->setObjectName("subtractionButton");
        subtractionButton->setGeometry(QRect(330, 240, 141, 41));
        subtractionButton->setFont(font2);
        multiplicationButton = new QPushButton(page_3);
        multiplicationButton->setObjectName("multiplicationButton");
        multiplicationButton->setGeometry(QRect(330, 310, 141, 41));
        multiplicationButton->setFont(font2);
        divisionButton = new QPushButton(page_3);
        divisionButton->setObjectName("divisionButton");
        divisionButton->setGeometry(QRect(330, 380, 141, 41));
        divisionButton->setFont(font2);
        backButton_Arithmetic = new QPushButton(page_3);
        backButton_Arithmetic->setObjectName("backButton_Arithmetic");
        backButton_Arithmetic->setGeometry(QRect(20, 20, 80, 18));
        helpAdditionButton = new QPushButton(page_3);
        helpAdditionButton->setObjectName("helpAdditionButton");
        helpAdditionButton->setGeometry(QRect(480, 180, 51, 21));
        helpSubtractionButton = new QPushButton(page_3);
        helpSubtractionButton->setObjectName("helpSubtractionButton");
        helpSubtractionButton->setGeometry(QRect(480, 250, 51, 21));
        helpMultiplicationButton = new QPushButton(page_3);
        helpMultiplicationButton->setObjectName("helpMultiplicationButton");
        helpMultiplicationButton->setGeometry(QRect(480, 320, 51, 21));
        helpDivisionButton = new QPushButton(page_3);
        helpDivisionButton->setObjectName("helpDivisionButton");
        helpDivisionButton->setGeometry(QRect(480, 390, 51, 21));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        pageLabel_Addition = new QLabel(page_4);
        pageLabel_Addition->setObjectName("pageLabel_Addition");
        pageLabel_Addition->setGeometry(QRect(320, 10, 161, 41));
        pageLabel_Addition->setFont(font);
        pageLabel_Addition->setAlignment(Qt::AlignCenter);
        questionLabel_Addition = new QLabel(page_4);
        questionLabel_Addition->setObjectName("questionLabel_Addition");
        questionLabel_Addition->setGeometry(QRect(280, 140, 241, 91));
        questionLabel_Addition->setFont(font2);
        questionLabel_Addition->setAlignment(Qt::AlignCenter);
        headingLabel_Addition = new QLabel(page_4);
        headingLabel_Addition->setObjectName("headingLabel_Addition");
        headingLabel_Addition->setGeometry(QRect(360, 90, 81, 21));
        headingLabel_Addition->setFont(font2);
        headingLabel_Addition->setAlignment(Qt::AlignCenter);
        backButton_Addition = new QPushButton(page_4);
        backButton_Addition->setObjectName("backButton_Addition");
        backButton_Addition->setGeometry(QRect(20, 20, 80, 18));
        widget = new QWidget(page_4);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(300, 390, 201, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        answerLabel_Addition = new QLabel(widget);
        answerLabel_Addition->setObjectName("answerLabel_Addition");

        horizontalLayout->addWidget(answerLabel_Addition);

        answerInputBox = new QLineEdit(widget);
        answerInputBox->setObjectName("answerInputBox");

        horizontalLayout->addWidget(answerInputBox);

        answerButton = new QPushButton(widget);
        answerButton->setObjectName("answerButton");

        horizontalLayout->addWidget(answerButton);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        pageLabel_AdditionHelp = new QLabel(page_5);
        pageLabel_AdditionHelp->setObjectName("pageLabel_AdditionHelp");
        pageLabel_AdditionHelp->setGeometry(QRect(340, 10, 121, 41));
        pageLabel_AdditionHelp->setFont(font);
        pageLabel_AdditionHelp->setAlignment(Qt::AlignCenter);
        text_AdditionHelp = new QTextBrowser(page_5);
        text_AdditionHelp->setObjectName("text_AdditionHelp");
        text_AdditionHelp->setGeometry(QRect(180, 90, 441, 331));
        backButton_AdditionHelp = new QPushButton(page_5);
        backButton_AdditionHelp->setObjectName("backButton_AdditionHelp");
        backButton_AdditionHelp->setGeometry(QRect(20, 20, 80, 18));
        nextButton_AdditionHelp = new QPushButton(page_5);
        nextButton_AdditionHelp->setObjectName("nextButton_AdditionHelp");
        nextButton_AdditionHelp->setGeometry(QRect(360, 460, 80, 18));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        backButton_AdditionHelp2 = new QPushButton(page_6);
        backButton_AdditionHelp2->setObjectName("backButton_AdditionHelp2");
        backButton_AdditionHelp2->setGeometry(QRect(20, 20, 80, 18));
        text_AdditionHelp2 = new QTextBrowser(page_6);
        text_AdditionHelp2->setObjectName("text_AdditionHelp2");
        text_AdditionHelp2->setGeometry(QRect(180, 90, 441, 331));
        pageLabel_AdditionHelp2 = new QLabel(page_6);
        pageLabel_AdditionHelp2->setObjectName("pageLabel_AdditionHelp2");
        pageLabel_AdditionHelp2->setGeometry(QRect(300, 20, 201, 41));
        pageLabel_AdditionHelp2->setFont(font);
        pageLabel_AdditionHelp2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        backButton_Calculus = new QPushButton(page_7);
        backButton_Calculus->setObjectName("backButton_Calculus");
        backButton_Calculus->setGeometry(QRect(20, 20, 80, 18));
        pageLabel_Calculus = new QLabel(page_7);
        pageLabel_Calculus->setObjectName("pageLabel_Calculus");
        pageLabel_Calculus->setGeometry(QRect(310, 10, 181, 41));
        pageLabel_Calculus->setFont(font);
        pageLabel_Calculus->setAlignment(Qt::AlignCenter);
        limitsButton = new QPushButton(page_7);
        limitsButton->setObjectName("limitsButton");
        limitsButton->setGeometry(QRect(330, 170, 141, 41));
        limitsButton->setFont(font2);
        derivativesButton = new QPushButton(page_7);
        derivativesButton->setObjectName("derivativesButton");
        derivativesButton->setGeometry(QRect(330, 240, 141, 41));
        derivativesButton->setFont(font2);
        helpDerivativesButton = new QPushButton(page_7);
        helpDerivativesButton->setObjectName("helpDerivativesButton");
        helpDerivativesButton->setGeometry(QRect(480, 250, 51, 21));
        helpLimitsButton = new QPushButton(page_7);
        helpLimitsButton->setObjectName("helpLimitsButton");
        helpLimitsButton->setGeometry(QRect(480, 180, 51, 21));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        pageLabel_Derivatives = new QLabel(page_8);
        pageLabel_Derivatives->setObjectName("pageLabel_Derivatives");
        pageLabel_Derivatives->setGeometry(QRect(310, 10, 181, 41));
        pageLabel_Derivatives->setFont(font);
        pageLabel_Derivatives->setAlignment(Qt::AlignCenter);
        backButton_Derivatives = new QPushButton(page_8);
        backButton_Derivatives->setObjectName("backButton_Derivatives");
        backButton_Derivatives->setGeometry(QRect(20, 20, 80, 18));
        headingLabel_Derivatives = new QLabel(page_8);
        headingLabel_Derivatives->setObjectName("headingLabel_Derivatives");
        headingLabel_Derivatives->setGeometry(QRect(360, 90, 81, 21));
        headingLabel_Derivatives->setFont(font2);
        headingLabel_Derivatives->setAlignment(Qt::AlignCenter);
        questionLabel_Derivatives = new QLabel(page_8);
        questionLabel_Derivatives->setObjectName("questionLabel_Derivatives");
        questionLabel_Derivatives->setGeometry(QRect(250, 140, 301, 151));
        questionLabel_Derivatives->setFont(font2);
        questionLabel_Derivatives->setAlignment(Qt::AlignCenter);
        widget1 = new QWidget(page_8);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(300, 390, 201, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        answerLabel_Derivatives = new QLabel(widget1);
        answerLabel_Derivatives->setObjectName("answerLabel_Derivatives");

        horizontalLayout_2->addWidget(answerLabel_Derivatives);

        answerInputBox_Derivatives = new QLineEdit(widget1);
        answerInputBox_Derivatives->setObjectName("answerInputBox_Derivatives");

        horizontalLayout_2->addWidget(answerInputBox_Derivatives);

        answerButton_Derivatives = new QPushButton(widget1);
        answerButton_Derivatives->setObjectName("answerButton_Derivatives");

        horizontalLayout_2->addWidget(answerButton_Derivatives);

        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        backButton_DerivativesHelp = new QPushButton(page_9);
        backButton_DerivativesHelp->setObjectName("backButton_DerivativesHelp");
        backButton_DerivativesHelp->setGeometry(QRect(20, 20, 80, 18));
        label = new QLabel(page_9);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 10, 121, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(page_9);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(190, 90, 421, 431));
        stackedWidget->addWidget(page_9);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pageLabel_Start->setText(QCoreApplication::translate("MainWindow", "Start Menu", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Click here to start!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "MathMind", nullptr));
        arithmeticButton->setText(QCoreApplication::translate("MainWindow", "Arithmetic", nullptr));
        pageLabel_Topics->setText(QCoreApplication::translate("MainWindow", "Choose your topic", nullptr));
        algebraButton->setText(QCoreApplication::translate("MainWindow", "Algebra", nullptr));
        calculusButton->setText(QCoreApplication::translate("MainWindow", "Calculus 1", nullptr));
        pageLabel_Arithmetic->setText(QCoreApplication::translate("MainWindow", "Arithmetic Subtopics", nullptr));
        additionButton->setText(QCoreApplication::translate("MainWindow", "Addition", nullptr));
        subtractionButton->setText(QCoreApplication::translate("MainWindow", "Subtraction", nullptr));
        multiplicationButton->setText(QCoreApplication::translate("MainWindow", "Multiplication", nullptr));
        divisionButton->setText(QCoreApplication::translate("MainWindow", "Division", nullptr));
        backButton_Arithmetic->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        helpAdditionButton->setText(QCoreApplication::translate("MainWindow", "Help?", nullptr));
        helpSubtractionButton->setText(QCoreApplication::translate("MainWindow", "Help ?", nullptr));
        helpMultiplicationButton->setText(QCoreApplication::translate("MainWindow", "Help ?", nullptr));
        helpDivisionButton->setText(QCoreApplication::translate("MainWindow", "Help ?", nullptr));
        pageLabel_Addition->setText(QCoreApplication::translate("MainWindow", "Addition", nullptr));
        questionLabel_Addition->setText(QCoreApplication::translate("MainWindow", "INSERT HERE", nullptr));
        headingLabel_Addition->setText(QCoreApplication::translate("MainWindow", "Question:", nullptr));
        backButton_Addition->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        answerLabel_Addition->setText(QCoreApplication::translate("MainWindow", "Answer:", nullptr));
        answerInputBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Answer Here", nullptr));
        answerButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        pageLabel_AdditionHelp->setText(QCoreApplication::translate("MainWindow", "Addition Help", nullptr));
        text_AdditionHelp->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">When you're adding two even numbers or two odd numbers, the sum will always be an even number.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; mar"
                        "gin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">2 + 2 = 4</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Even + Even = Even</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The same will work for the sum of two odd numbers.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\"><span style=\" font-size:12pt;\">3 + 3 = 6</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Odd + Odd = Even</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">However, if you add an even and an odd number, the result will always be an odd number.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
                        "=\" font-size:12pt;\">4 + 5 = 9</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Even + Odd = Odd</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">With this in mind, you're able to instantly double-check if your answer of the sum of two numbers is wrong.</span></p></body></html>", nullptr));
        backButton_AdditionHelp->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        nextButton_AdditionHelp->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        backButton_AdditionHelp2->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        text_AdditionHelp2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Since in the decimal system we only have 9 numbers per digit, you'll become very familiar with every case possible.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">When dealing with bigger numbers, it always helps to look at the biggest numbers first. While you're adding each digit place, you can keep repeating to yourself what you've just added so that you don't forget.</span></p></body></html>", nullptr));
        pageLabel_AdditionHelp2->setText(QCoreApplication::translate("MainWindow", "Addition Help (Continued)", nullptr));
        backButton_Calculus->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        pageLabel_Calculus->setText(QCoreApplication::translate("MainWindow", "Calculus Topics", nullptr));
        limitsButton->setText(QCoreApplication::translate("MainWindow", "Limits", nullptr));
        derivativesButton->setText(QCoreApplication::translate("MainWindow", "Derivatives", nullptr));
        helpDerivativesButton->setText(QCoreApplication::translate("MainWindow", "Help?", nullptr));
        helpLimitsButton->setText(QCoreApplication::translate("MainWindow", "Help?", nullptr));
        pageLabel_Derivatives->setText(QCoreApplication::translate("MainWindow", "Derivatives", nullptr));
        backButton_Derivatives->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        headingLabel_Derivatives->setText(QCoreApplication::translate("MainWindow", "Question:", nullptr));
        questionLabel_Derivatives->setText(QCoreApplication::translate("MainWindow", "INSERT CALCULUS QUESTION HERE", nullptr));
        answerLabel_Derivatives->setText(QCoreApplication::translate("MainWindow", "Answer:", nullptr));
        answerInputBox_Derivatives->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex. 5x^7", nullptr));
        answerButton_Derivatives->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        backButton_DerivativesHelp->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Dervatives Help", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">When working with expressions that have an exponent that's just a number (a constant), you must apply the </span><span style=\" font-size:12pt; text-decoration: underline;\">power rule</span><span style=\" font-size:12pt;\">. To apply the power rule, you simply copy that exponent and bring down the exponent next to the variable (normally x), and subtract 1 from the exp"
                        "onent.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Derivative of x^3 = 3 * x^2</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">However, there may be instances where the expression already has a number multiplied to the variable (known as the constant multiple). Don't worry! All you have to do is multiply it to the number you bring down from the exponent.</span></p>\n"
"<p style=\"-qt-para"
                        "graph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Derivative of 2x^3 = 2 * 3x^2 = 6x^2</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Numbers can get messy, and the variable may have bigger and/or more complex constant multiples. Using parenthesis can help eliminate the confusion.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-s"
                        "ize:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Derivative of 100x^15 = Derivative of 100(x^15) = 100(15x^14) = 1500x^14</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Parenthesis helps you focus on what you're actually differentiating (the process of finding the derivative) vs. what to keep.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-ri"
                        "ght:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">If you're still unsure about multiplying, head to the multiplication practice. Good luck!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
