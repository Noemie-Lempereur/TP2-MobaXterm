#ifndef UNTITLED1_BUTTONSPANEL_H
#define UNTITLED1_BUTTONSPANEL_H
#include <QApplication>
#include <QPushButton>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QMainWindow>
#include <QWindow>

class ButtonsPanel {
private:
    QPushButton* button_connect;
    QPushButton* button_disconnect;
    QPushButton* button_configure;
public:
    ButtonsPanel();
    virtual ~ButtonsPanel(){};
};


#endif //UNTITLED1_BUTTONSPANEL_H
