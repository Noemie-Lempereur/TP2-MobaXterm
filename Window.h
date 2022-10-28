
#ifndef UNTITLED1_WINDOW_H
#define UNTITLED1_WINDOW_H
#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
#include <QWindow>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QTableWidget>
#include "ButtonsPanel.h"


class SQLClientWindow : public QMainWindow{
    Q_OBJECT
private:
    ButtonsPanel *buttonsPanel;
    QTextEdit *notificationPanel;
    QTableWidget *resultTable;
public:
    SQLClientWindow();
    virtual ~SQLClientWindow(){};
};


#endif //UNTITLED1_WINDOW_H
