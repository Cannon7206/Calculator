//
// Created by christian on 7/1/25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_GUI.h" resolved

#include "gui.h"
#include "ui_gui.h"


GUI::GUI(QWidget *parent) :
    QWidget(parent), ui(new Ui::GUI) {
    ui->setupUi(this);
}

GUI::~GUI() {
    delete ui;
}
