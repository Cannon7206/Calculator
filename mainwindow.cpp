//
// Created by christian on 7/2/25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::onEnterClicked);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::onClearClicked);
    connect(ui->rPara, &QPushButton::clicked, this, &MainWindow::onRParaClicked);
    connect(ui->lPara, &QPushButton::clicked, this, &MainWindow::onLParaClicked);
    connect(ui->square, &QPushButton::clicked, this, &MainWindow::onSquareClicked);
    connect(ui->factorial, &QPushButton::clicked, this, &MainWindow::onFactorialClicked);
    connect(ui->expPower, &QPushButton::clicked, this, &MainWindow::onExpPowerClicked);
    connect(ui->power, &QPushButton::clicked, this, &MainWindow::onPowerClicked);
    connect(ui->tan, &QPushButton::clicked, this, &MainWindow::onTanClicked);
    connect(ui->sin, &QPushButton::clicked, this, &MainWindow::onSinClicked);
    connect(ui->cos, &QPushButton::clicked, this, &MainWindow::onCosClicked);
    connect(ui->zero, &QPushButton::clicked, this, &MainWindow::onZeroClicked);
    connect(ui->one, &QPushButton::clicked, this, &MainWindow::onOneClicked);
    connect(ui->two, &QPushButton::clicked, this, &MainWindow::onTwoClicked);
    connect(ui->three, &QPushButton::clicked, this, &MainWindow::onThreeClicked);
    connect(ui->four, &QPushButton::clicked, this, &MainWindow::onFourClicked);
    connect(ui->five, &QPushButton::clicked, this, &MainWindow::onFiveClicked);
    connect(ui->six, &QPushButton::clicked, this, &MainWindow::onSixClicked);
    connect(ui->seven, &QPushButton::clicked, this, &MainWindow::onSevenClicked);
    connect(ui->eight, &QPushButton::clicked, this, &MainWindow::onEightClicked);
    connect(ui->nine, &QPushButton::clicked, this, &MainWindow::onNineClicked);
    connect(ui->frac, &QPushButton::clicked, this, &MainWindow::onFracClicked);
    connect(ui->add, &QPushButton::clicked, this, &MainWindow::onAddClicked);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::onSubClicked);
    connect(ui->times, &QPushButton::clicked, this, &MainWindow::onTimesClicked);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::onDivClicked);
    connect(ui->mode, &QPushButton::clicked, this, &MainWindow::onModeClicked);
    connect(ui->second, &QPushButton::clicked, this, &MainWindow::onSecondClicked);
    connect(ui->ln_Log, &QPushButton::clicked, this, &MainWindow::onLn_LogClicked);
    connect(ui->decimal, &QPushButton::clicked, this, &MainWindow::onDecimalClicked);
    connect(ui->neg, &QPushButton::clicked, this, &MainWindow::onNegClicked);
    connect(ui->delete_2, &QPushButton::clicked, this, &MainWindow::onDeleteClicked);
    connect(ui->math, &QPushButton::clicked, this, &MainWindow::onMathClicked);
    connect(ui->sigdigit, &QPushButton::clicked, this, &MainWindow::onSigDigitClicked);
    connect(ui->table, &QPushButton::clicked, this, &MainWindow::onTableClicked);
    connect(ui->pi, &QPushButton::clicked, this, &MainWindow::onPiClicked);
    connect(ui->goUp, &QPushButton::clicked, this, &MainWindow::onGoUpClicked);
    connect(ui->goDown, &QPushButton::clicked, this, &MainWindow::onGoDownClicked);
    connect(ui->goLeft, &QPushButton::clicked, this, &MainWindow::onGoLeftClicked);
    connect(ui->goRight, &QPushButton::clicked, this, &MainWindow::onGoRightClicked);
    connect(ui->on, &QPushButton::clicked, this, &MainWindow::onOnClicked);
}

void MainWindow::onEnterClicked() {
    std::cout << "enter clicked" << std::endl;
}
void MainWindow::onClearClicked() {
    std::cout << "clear clicked" << std::endl;
}
void MainWindow::onRParaClicked() {
    std::cout << ")" << std::endl;
}
void MainWindow::onLParaClicked() {
    std::cout << "(" << std::endl;
}
void MainWindow::onSquareClicked() {
    std::cout << "^2" << std::endl;
}
void MainWindow::onFactorialClicked() {
    std::cout << "!" << std::endl;
}
void MainWindow::onExpPowerClicked() {
    std::cout << "e^x" << std::endl;
}
void MainWindow::onPowerClicked() {
    std::cout << "^" << std::endl;
}
void MainWindow::onTanClicked() {
    std::cout << "tan" << std::endl;
}
void MainWindow::onSinClicked() {
    std::cout << "sin" << std::endl;
}
void MainWindow::onCosClicked() {
    std::cout << "cos" << std::endl;
}
void MainWindow::onZeroClicked() {
    std::cout << "0" << std::endl;
}
void MainWindow::onOneClicked() {
    std::cout << "1" << std::endl;
}
void MainWindow::onTwoClicked() {
    std::cout << "2" << std::endl;
}
void MainWindow::onThreeClicked() {
    std::cout << "3" << std::endl;
}
void MainWindow::onFourClicked() {
    std::cout << "4" << std::endl;
}
void MainWindow::onFiveClicked() {
    std::cout << "5" << std::endl;
}
void MainWindow::onSixClicked() {
    std::cout << "6" << std::endl;
}
void MainWindow::onSevenClicked() {
    std::cout << "7" << std::endl;
}
void MainWindow::onEightClicked() {
    std::cout << "8" << std::endl;
}
void MainWindow::onNineClicked() {
    std::cout << "9" << std::endl;
}
void MainWindow::onFracClicked() {
    std::cout << "Fraction clicked" << std::endl;
}
void MainWindow::onAddClicked() {
    std::cout << "+" << std::endl;
}
void MainWindow::onSubClicked() {
    std::cout << "-" << std::endl;
}
void MainWindow::onTimesClicked() {
    std::cout << "*" << std::endl;
}
void MainWindow::onDivClicked() {
    std::cout << "/" << std::endl;
}
void MainWindow::onModeClicked() {
    std::cout << "Mode Clicked" << std::endl;
}
void MainWindow::onLn_LogClicked() {
    std::cout << "Natural log clicked" << std::endl;
}
void MainWindow::onSecondClicked() {
    std::cout << "Second clicked" << std::endl;
}
void MainWindow::onDecimalClicked() {
    std::cout << "." << std::endl;
}
void MainWindow::onNegClicked() {
    std::cout << "(-)" << std::endl;
}
void MainWindow::onDeleteClicked() {
    std::cout << "Delete clicked" << std::endl;
}
void MainWindow::onMathClicked() {
    std::cout << "Math clicked" << std::endl;
}
void MainWindow::onSigDigitClicked() {
    std::cout << "EE clicked" << std::endl;
}
void MainWindow::onTableClicked() {
    std::cout << "Table clicked" << std::endl;
}
void MainWindow::onPiClicked() {
    std::cout << "PI clicked" << std::endl;
}
void MainWindow::onApproxClicked() {
    std::cout << "Approximation clicked" << std::endl;
}
void MainWindow::onGoUpClicked() {
    std::cout << "Go Up clicked" << std::endl;
}
void MainWindow::onGoDownClicked() {
    std::cout << "Go Down clicked" << std::endl;
}
void MainWindow::onGoLeftClicked() {
    std::cout << "Go Left Clicked" << std::endl;
}
void MainWindow::onGoRightClicked() {
    std::cout << "Go Right Clicked" << std::endl;
}
void MainWindow::onOnClicked() {
    std::cout << "On clicked" << std::endl;
}

MainWindow::~MainWindow() {
    delete ui;
}
