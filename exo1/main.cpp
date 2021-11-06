#include <QApplication>
#include<exo1.h>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
auto q= new exo1;
q->show();


    return app.exec();
}
