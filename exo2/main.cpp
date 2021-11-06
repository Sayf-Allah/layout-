#include <QApplication>
#include<QLabel>
#include<QPushButton>
#include<QHBoxLayout>
#include<QtWidgets>
#include<QLineEdit>
#include"exo2.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    auto name= new exo2;
name->show();
return app.exec();
}
