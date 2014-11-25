#include <QApplication>
#include <QtWidgets>
#include "dialog.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

   // Dialog fenetre;
    MainWindow fenetre;
    fenetre.show();

    return app.exec();
}
