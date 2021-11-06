#include "exo1.h"

exo1::exo1(QWidget *parent) : QWidget(parent)
{
createwidgets();
placewidgets();
connexionwidgets();
}
void exo1::createwidgets(){
    line = new QLineEdit;
    search = new QPushButton("search");
    layout = new QHBoxLayout;
    label = new QLabel("Name :");
    setLayout(layout);
}
void exo1::placewidgets(){
     layout->addWidget(label);
      layout->addWidget(line);
    layout->addWidget(search);
}
void exo1::connexionwidgets(){
                             }
