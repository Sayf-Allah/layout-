#ifndef EXO3_H
#define EXO3_H

#include <QWidget>
#include<QPushButton>
#include<QLineEdit>
#include<QComboBox>
#include<QTextEdit>
#include<QHBoxLayout>
#include<QLabel>
#include<QFormLayout>
class exo3 : public QWidget
{
    Q_OBJECT
public:
    explicit exo3(QWidget *parent = nullptr);
   // ~exo3();

protected:

   void createwidgets();
   void placewidgets();
   void connexionwidgets();
   QFormLayout *layout;
   QLineEdit *name;
   QLineEdit *age;
   QLineEdit *email;
   QLineEdit *problem;
   QLineEdit *Phone;
   QLabel *summ;
   QLabel *prod;
   QHBoxLayout *layout2;
   QHBoxLayout *layout3;
   QHBoxLayout *layout4;
   QVBoxLayout *layout5;

  /* QVBoxLayout *layout;
   QHBoxLayout *layout2;
   QHBoxLayout *layout3;
   QHBoxLayout *layout4;
    QHBoxLayout *layout5;
   QLabel *label1;
   QLabel *label2;
   QLabel *label3;
   QLabel *label4;
   QLabel *label5;
   QLabel *label6;
   QLabel *label7;*/
   QPushButton *but1;
   QPushButton *but2;
   QPushButton *but3;
   /*QLineEdit *line1;
   QLineEdit *line2;
   QLineEdit *line3;
   QLineEdit *line4;
   QLineEdit *line5;*/
QComboBox *combo;
QTextEdit *text;
};

#endif // EXO3_H
