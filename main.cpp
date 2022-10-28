#include <QApplication>
#include <QPushButton>
#include "Window.h"

int testWindow(int argc, char **argv);

int main(int argc, char **argv){
    QApplication app (argc, argv);

    //Exercice 1:
    /*QPushButton button ("");
    button.setText("Hello");
    button.setToolTip("Salut!");
    button.setFont(QFont("Courier",16,2));
    button.show();*/

    //Exercice 2:
    /*QPushButton button2 ("parent");
    QPushButton button3 ("fils");
    button3.setParent(&button2);
    button2.show();*/

    //Exercice 3:
    /*QWidget widget1;
    widget1.setFixedSize(100, 50);
    QPushButton button4("fils", &widget1);
    button4.setGeometry(10,10,80,30);
    widget1.show();*/

    //Exercice 4:
    testWindow(argc, argv);

    return app.exec();
}