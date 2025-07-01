//
// Created by christian on 7/1/25.
//

#ifndef GUI_H
#define GUI_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class GUI; }
QT_END_NAMESPACE

class GUI : public QWidget {
Q_OBJECT

public:
    explicit GUI(QWidget *parent = nullptr);
    ~GUI() override;

private:
    Ui::GUI *ui;
};


#endif //GUI_H
