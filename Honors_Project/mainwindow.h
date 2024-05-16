#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startButton_clicked();

    void on_arithmeticButton_clicked();

    void on_backButton_Arithmetic_clicked();

    void on_additionButton_clicked();

    void on_backButton_Addition_clicked();

    void displayQuestion(int questionIndex); // My slot for additionButton

    void on_answerButton_clicked();

    void on_backButton_AdditionHelp2_clicked();

    void on_backButton_AdditionHelp_clicked();

    void on_helpAdditionButton_clicked();

    void on_nextButton_AdditionHelp_clicked();

    void on_calculusButton_clicked();

    void on_derivativesButton_clicked();

    void on_backButton_Derivatives_clicked();

    void on_backButton_Calculus_clicked();

    void on_answerButton_Derivatives_clicked();

    void displayQuestion_Derivatives(unsigned int questionIndex);

    void on_backButton_DerivativesHelp_clicked();

    void on_helpDerivativesButton_clicked();

private:
    Ui::MainWindow *ui;
    int currentQuestionIndex_Addition; // Tracks question index
    int currentQuestionIndex_Derivatives;
};
#endif // MAINWINDOW_H
