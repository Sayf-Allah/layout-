#include "exo3.h"

exo3::exo3(QWidget *parent) : QWidget(parent)
{
createwidgets();
placewidgets();
connexionwidgets();
}
/*exo3:: ~exo3(){
delete layout;
delete layout3;
delete layout2;
    delete layout4;
    delete layout5;
    delete label1;
    delete label2;
    delete label3;
    delete label4;
    delete label5;
    delete label6;
    delete label7;

}*/
void exo3::createwidgets(){
   /*  layout = new QVBoxLayout;
      layout2 = new QHBoxLayout;
      layout3= new QHBoxLayout;
       layout4= new QHBoxLayout;
       layout5=new QHBoxLayout;
     label1= new  QLabel("Name :");
     label2 = new QLabel("Company :");
     label3 = new QLabel("Phone :");
    label4= new  QLabel("Email :");
     label5 =new QLabel("Problem Title :");
     label6 =new QLabel("Summary information :");
     label7 = new QLabel("Reproductivity");*/
     but1 = new QPushButton("Reset");
     but2= new QPushButton("Submit Bug report");
     but3 = new QPushButton("Don't SUBMIT");
     summ=new QLabel("Summary :") ;
      prod=new QLabel("Reproducibility :");
     layout2 =new QHBoxLayout ;
      layout3= new QHBoxLayout;
      layout4= new QHBoxLayout;
      layout5=new QVBoxLayout;
     /*line1 = new QLineEdit;
     line2 = new QLineEdit;
    line3= new  QLineEdit;
    line4 =new QLineEdit ;
     line5= new QLineEdit;*/
  combo = new QComboBox();
  text = new QTextEdit;
  layout= new QFormLayout;
  name =new QLineEdit;
  age =new QLineEdit;
  email=new QLineEdit;
  problem=new QLineEdit;
  Phone=new QLineEdit;
 setLayout(layout5);

  //setLayout(layout);
                          }

void exo3::placewidgets(){
    combo->addItem(tr("Always"));
    combo->addItem(tr("Sometimes"));
    combo->addItem(tr("Rarely"));
    layout->setAlignment(Qt::AlignRight | Qt::AlignHCenter);
    layout->addRow("name: ", name);
    layout->addRow("Company :", age);
    layout->addRow("Phone :", Phone);
    layout->addRow("email :",email );
    layout->addRow("Problem Title :", problem);
    layout2->addSpacerItem(new QSpacerItem(14,20));
    layout2->addWidget(summ);
    layout2->addWidget(text);
    layout5->addLayout(layout);
    layout5->addLayout(layout2);
    layout5->addLayout(layout3);
    layout5->addLayout(layout4);
    layout3->addWidget(prod);
    layout3->addWidget(combo);


    /*layout3->addWidget(label1);
     layout3->addWidget(line1);
      layout4->addWidget(label2);
       layout4->addWidget(line2);
       layout5->addWidget(label3);
       layout5->addWidget(line3);
       layout->addLayout(layout3);
       layout->addLayout(layout4);
       layout->addLayout(layout5);
        layout->addWidget(label3);
 layout->addWidget(line3);
  layout->addWidget(label4);
   layout->addWidget(line4);
    layout->addWidget(label5);
     layout->addWidget(line5);
      layout->addWidget(label6);
       layout->addWidget(text);
        layout->addWidget(label7);

            layout->addLayout(layout2);

*///layout->addWidget(combo);
    layout4->addWidget(but1);
     layout4->addWidget(but2);
      layout4->addWidget(but3);



}
void exo3::connexionwidgets(){

}
