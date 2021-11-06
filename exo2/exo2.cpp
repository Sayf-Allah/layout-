#include "exo2.h"

exo2::exo2(QWidget *parent) : QWidget(parent)
{
 createwidgets();
 placewidgets();
 connexionwidgets();
}
exo2::~exo2(){
delete search;
    delete close;
    delete n;
    delete line;
    delete layout;
    delete box1;
    delete box2;
    delete leftlayout;
    delete rightlayout;
    delete topleftlayout;
}
void exo2::createwidgets(){
    line=new QLineEdit;
    search= new QPushButton("search");
    close= new QPushButton("close");
    box1= new QCheckBox("Match_case");
    box2= new QCheckBox("search backward");
    n= new QLabel("Name:");
    leftlayout = new QVBoxLayout;
    topleftlayout = new QHBoxLayout;
    rightlayout= new QVBoxLayout;
    layout = new QHBoxLayout;
    setLayout(layout);
}
void exo2::placewidgets(){
    topleftlayout->addWidget(n);
    topleftlayout->addWidget(line);
    rightlayout->addWidget(search);
    rightlayout->addWidget(close);
     rightlayout->addSpacerItem(new QSpacerItem(30,50));
     topleftlayout->addSpacerItem(new QSpacerItem(30,50));
         leftlayout->addLayout(topleftlayout);
         leftlayout->addWidget(box1);
         leftlayout->addWidget(box2);
    layout->addLayout(topleftlayout);
    layout->addLayout(leftlayout);
    layout->addLayout(rightlayout);

}
void exo2::connexionwidgets(){
connect(close, &QPushButton::clicked, qApp,&QApplication::exit);
}
