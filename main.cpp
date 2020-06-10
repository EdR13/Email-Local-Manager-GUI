#include "mainwindow.h"
#include <QDebug>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Exit e;

    ///Poner el ícono en la ventana principal.
    w.setWindowIcon(QIcon(":/images/descarga.png"));

    w.show();
    return a.exec();
}
