#include "Window.h"
#include <qtableview.h>


SQLClientWindow::SQLClientWindow() {
    setWindowTitle("SQL Client");
    setMinimumSize(600, 400);
    ButtonsPanel *buttonsPanel = new ButtonsPanel();
    QTextEdit *notificationPanel = new QTextEdit;
    QTableWidget *resultTable = new QTableWidget(5,3);
    QWidget *mainWidget= new QWidget();
    QVBoxLayout *mainLayout= new QVBoxLayout();
    //resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //mainLayout->addLayout(buttonsPanel);
    mainLayout->addWidget(notificationPanel,0);
    mainLayout->addWidget(resultTable);
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);

}
