#include "Window.h"
#include <QApplication>

int testWindow(int argc, char **argv) {
    QApplication app(argc,argv);
    SQLClientWindow window;
    window.show();
    return app.exec();
}