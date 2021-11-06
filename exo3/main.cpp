#include <QApplication>
#include"exo3.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
auto q= new exo3;
q->show();
    return app.exec();
}
