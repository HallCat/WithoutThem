#include "mainwindow.h"
#include "Factory.h"
#include "Product.h"
#include <QApplication>
#include "DatabaseManipulator.h"

#include <QCoreApplication>
#include <QApplication>
#include <QFile>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    srand(time(NULL));

    QFile styleFile("../WithoutThem/darkorange.stylesheet.txt");
    styleFile.open(QFile::ReadOnly);
    QByteArray bytes = styleFile.readAll();
    QApplication *app = (QApplication*)QApplication::instance();
    app->setStyleSheet(bytes);

    MainWindow w;
    w.setFixedSize(w.width(),w.height());
    w.show();


    return a.exec();

 }


