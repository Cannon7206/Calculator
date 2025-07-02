#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QApplication::setApplicationName("Calculator");

    MainWindow window;
    window.show();
    window.setWindowTitle("Calculator");
    return QApplication::exec();
}
