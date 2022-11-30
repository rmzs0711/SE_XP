#include "mainwindow.h"

#include <QApplication>
#include <test_engine.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    test_engine tests = test_engine();
    tests.test1();
    tests.test2();
    tests.test3();
    tests.test4();
    tests.test5();
    MainWindow w;
    w.show();
    return a.exec();
}
