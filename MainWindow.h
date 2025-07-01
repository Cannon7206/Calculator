//
// Created by christian on 7/1/25.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include "gui.h"


class MainWindow : public QWidget
{
    Q_OBJECT
    public:
    MainWindow(QWidget *parent = nullptr) : QWidget(parent) {
        ui.setupUi(this);

        connect(ui.equals, &QPushButton::clicked, this, &MainWindow::onEqualsClicked);
        connect(ui.Add, &QPushButton::clicked, this, &MainWindow::onAddClicked);
        connect(ui.Subtract, &QPushButton::clicked, this, &MainWindow::onSubtractClicked);
        connect(ui.multiply, &QPushButton::clicked, this, &MainWindow::onMultiplyClicked);
        connect(ui.divide, &QPushButton::clicked, this, &MainWindow::onDivideClicked);
        connect(ui.zero, &QPushButton::clicked, this, &MainWindow::onZeroClicked);
        connect(ui.one, &QPushButton::clicked, this, &MainWindow::onOneClicked);
        connect(ui.two, &QPushButton::clicked, this, &MainWindow::onTwoClicked);
        connect(ui.three, &QPushButton::clicked, this, &MainWindow::onThreeClicked);
        connect(ui.four, &QPushButton::clicked, this, &MainWindow::onFourClicked);
        connect(ui.five, &QPushButton::clicked, this, &MainWindow::onFiveClicked);
        connect(ui.six, &QPushButton::clicked, this, &MainWindow::onSixClicked);
        connect(ui.seven , &QPushButton::clicked, this, &MainWindow::onSevenClicked);
        connect(ui.eight, &QPushButton::clicked, this, &MainWindow::onEightClicked);
        connect(ui.nine, &QPushButton::clicked, this, &MainWindow::onNineClicked);
        connect(ui.decimal, &QPushButton::clicked, this, &MainWindow::onDecimalClicked);
        connect(ui.negetive, &QPushButton::clicked, this, &MainWindow::onNegativeClicked);
        connect(ui.on, &QPushButton::clicked, this, &MainWindow::onOnClicked);
        connect(ui.storeVariable, &QPushButton::clicked, this, &MainWindow::onStoreVariableClicked);
        connect(ui.NaturalLog, &QPushButton::clicked, this, &MainWindow::onNaturalLogClicked);
        connect(ui.log, &QPushButton::clicked, this, &MainWindow::onLogClicked);
        connect(ui.square, &QPushButton::clicked, this, &MainWindow::onSquareClicked);
        connect(ui.inverse, &QPushButton::clicked, this, &MainWindow::onInverseClicked);
        connect(ui.comma, &QPushButton::clicked, this, &MainWindow::onCommaClicked);
        connect(ui.Sine, &QPushButton::clicked, this, &MainWindow::onSineClicked);
        connect(ui.Cosine, &QPushButton::clicked, this, &MainWindow::onCosineClicked);
        connect(ui.Tangent, &QPushButton::clicked, this, &MainWindow::onTangentClicked);

    }


    private slots:
    void onEqualsClicked() {
        std::cout<<"Equals Clicked"<<std::endl;
    }
    void onAddClicked() {
        std::cout<<"Add Clicked"<<std::endl;
    }
    void onSubtractClicked() {
        std::cout<<"Subtract Clicked"<<std::endl;
    }
    void onMultiplyClicked() {
        std::cout<<"Multiply Clicked"<<std::endl;
    }
    void onDivideClicked() {
        std::cout<<"Divide Clicked"<<std::endl;
    }
    void onZeroClicked() {
        std::cout<<"Zero Clicked"<<std::endl;
    }
    void onOneClicked() {
        std::cout<<"One Clicked"<<std::endl;
    }
    void onTwoClicked() {
        std::cout<<"Two Clicked"<<std::endl;
    }
    void onThreeClicked() {
        std::cout<<"Three Clicked"<<std::endl;
    }
    void onFourClicked() {
        std::cout<<"Four Clicked"<<std::endl;
    }
    void onFiveClicked() {
        std::cout<<"Five Clicked"<<std::endl;
    }
    void onSixClicked() {
        std::cout<<"Six Clicked"<<std::endl;
    }
    void onSevenClicked() {
        std::cout<<"Seven Clicked"<<std::endl;
    }
    void onEightClicked() {
        std::cout<<"Eight Clicked"<<std::endl;
    }
    void onNineClicked() {
        std::cout<<"Nine Clicked"<<std::endl;
    }
    void onDecimalClicked() {
        std::cout<<"Decimal Clicked"<<std::endl;
    }
    void onNegativeClicked() {
        std::cout<<"Negative Clicked"<<std::endl;
    }
    void onOnClicked() {
        std::cout<<"On Clicked"<<std::endl;
    }
    void onStoreVariableClicked() {
        std::cout<<"Store Variable Clicked"<<std::endl;
    }
    void onNaturalLogClicked() {
        std::cout<<"Natural Log Clicked"<<std::endl;
    }
    void onLogClicked() {
        std::cout<<"Log Clicked"<<std::endl;
    }
    void onSquareClicked() {
        std::cout<<"Square Clicked"<<std::endl;
    }
    void onInverseClicked() {
        std::cout<<"Inverse Clicked"<<std::endl;
    }
    void onCommaClicked() {
        std::cout<<"Comma Clicked"<<std::endl;
    }
    void onSineClicked() {
        std::cout<<"Sine Clicked"<<std::endl;
    }
    void onCosineClicked() {
        std::cout<<"Cosine Clicked"<<std::endl;
    }
    void onTangentClicked() {
        std::cout<<"Tangent Clicked"<<std::endl;
    }
    void onLeftParenthesisClicked() {
        std::cout<<"Left Parenthesis Clicked"<<std::endl;
    }
    void onRightParenthesisClicked() {
        std::cout<<"Right Parenthesis Clicked"<<std::endl;
    }
    void onPowerClicked() {
        std::cout<<"Power Clicked"<<std::endl;
    }
    void onMathClicked() {
        std::cout<<"Math Clicked"<<std::endl;
    }
    void onApplicationClicked() {
        std::cout<<"Application Clicked"<<std::endl;
    }
    void onProgramClicked() {
        std::cout<<"Program Clicked"<<std::endl;
    }
    void onSavedVariablesClicked() {
        std::cout<<"Saved Variable Clicked"<<std::endl;
    }
    void onClearClicked() {
        std::cout<<"Clear Clicked"<<std::endl;
    }
    void onAlphaClicked() {
        std::cout<<"Alpha Clicked"<<std::endl;
    }
    void onVariableClicked() {
        std::cout<<"Variable Clicked"<<std::endl;
    }



private:
    Ui::GUI ui;
};





#endif //MAINWINDOW_H
