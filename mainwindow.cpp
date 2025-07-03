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
    QString input = ui->textEdit->text();
    ui->textBrowser->append(input + " = ");
    ui->textEdit->clear();
}
void MainWindow::onClearClicked() {
    ui->textEdit->clear();
}
void MainWindow::onRParaClicked() {
    ui->textEdit->insert("(");
}
void MainWindow::onLParaClicked() {
    ui->textEdit->insert("(");
}
void MainWindow::onSquareClicked() {
    ui->textEdit->insert("^");
}
void MainWindow::onFactorialClicked() {
    ui->textEdit->insert("!");
}
void MainWindow::onExpPowerClicked() {
    ui->textEdit->insert("e^x");
}
void MainWindow::onPowerClicked() {
    ui->textEdit->insert("^");
}
void MainWindow::onTanClicked() {
    ui->textEdit->insert("tan(");
}
void MainWindow::onSinClicked() {
    ui->textEdit->insert("sin(");
}
void MainWindow::onCosClicked() {
    ui->textEdit->insert("cos(");
}
void MainWindow::onZeroClicked() {
    ui->textEdit->insert("0");
}
void MainWindow::onOneClicked() {
    ui->textEdit->insert("1");
}
void MainWindow::onTwoClicked() {
    ui->textEdit->insert("2");
}
void MainWindow::onThreeClicked() {
    ui->textEdit->insert("3");
}
void MainWindow::onFourClicked() {
    ui->textEdit->insert("4");
}
void MainWindow::onFiveClicked() {
    ui->textEdit->insert("5");
}
void MainWindow::onSixClicked() {
    ui->textEdit->insert("6");
}
void MainWindow::onSevenClicked() {
    ui->textEdit->insert("7");
}
void MainWindow::onEightClicked() {
    ui->textEdit->insert("8");
}
void MainWindow::onNineClicked() {
    ui->textEdit->insert("9");
}
void MainWindow::onFracClicked() {
    ui->textEdit->insert("/");
}
void MainWindow::onAddClicked() {
    ui->textEdit->insert("+");
}
void MainWindow::onSubClicked() {
    ui->textEdit->insert("-");
}
void MainWindow::onTimesClicked() {
    ui->textEdit->insert("*");
}
void MainWindow::onDivClicked() {
    ui->textEdit->insert("/");
}
void MainWindow::onModeClicked() {
    std::cout << "Mode Clicked" << std::endl;
}
void MainWindow::onLn_LogClicked() {
    ui->textEdit->insert("ln(");
}
void MainWindow::onSecondClicked() {
    std::cout << "Second clicked" << std::endl;
}
void MainWindow::onDecimalClicked() {
    ui->textEdit->insert(".");
}
void MainWindow::onNegClicked() {
    ui->textEdit->insert("(-)");
}
void MainWindow::onDeleteClicked() {
    QString text = ui->textEdit->text();
    if (!text.isEmpty()) {
        text.chop(1);
        ui->textEdit->setText(text);
    }
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
    ui->textEdit->insert("PI");
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
