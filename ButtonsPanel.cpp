#include "ButtonsPanel.h"

ButtonsPanel::ButtonsPanel() {
    QWidget *buttonPanel= new QWidget();
    this->button_configure= new QPushButton("Configure");
    this->button_connect= new QPushButton("Connect");
    this->button_disconnect= new QPushButton("Disconnect");
    QHBoxLayout *Layout= new QHBoxLayout();
    Layout->addWidget(button_connect);
    Layout->addWidget(button_disconnect);
    Layout->addWidget(button_configure);
    buttonPanel->setLayout(Layout);
}
