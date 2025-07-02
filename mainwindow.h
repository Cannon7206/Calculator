//
// Created by christian on 7/2/25.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void onEnterClicked();
    void onClearClicked();
    void onRParaClicked(); //right parathesis
    void onLParaClicked(); //left parathesis
    void onSquareClicked();
    void onFactorialClicked();
    void onExpPowerClicked();
    void onPowerClicked();
    void onTanClicked();
    void onSinClicked();
    void onCosClicked();
    void onZeroClicked();
    void onOneClicked();
    void onTwoClicked();
    void onThreeClicked();
    void onFourClicked();
    void onFiveClicked();
    void onSixClicked();
    void onSevenClicked();
    void onEightClicked();
    void onNineClicked();
    void onFracClicked();
    void onAddClicked();
    void onSubClicked();
    void onTimesClicked();
    void onDivClicked();
    void onModeClicked();
    void onSecondClicked();
    void onLn_LogClicked();
    void onDecimalClicked();
    void onNegClicked();
    void onDeleteClicked();
    void onMathClicked();
    void onSigDigitClicked();
    void onTableClicked();
    void onPiClicked();
    void onApproxClicked();
    void onGoUpClicked();
    void onGoDownClicked();
    void onGoLeftClicked();
    void onGoRightClicked();
    void onOnClicked();



private:
    Ui::MainWindow *ui;
};


#endif //MAINWINDOW_H
