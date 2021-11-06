#ifndef EXO2_H
#define EXO2_H

#include <QWidget>
#include<QApplication>
#include<QPushButton>
#include<QLineEdit>
#include<QCheckBox>
#include<QHBoxLayout>
#include<QLabel>
class exo2 : public QWidget
{

    Q_OBJECT
public:
    explicit exo2(QWidget *parent = nullptr);
    virtual ~exo2();
protected:
    void createwidgets();
    void connexionwidgets();
    void placewidgets();
QPushButton *search;
QPushButton *close;
QLineEdit *line;
QLabel *n;
QHBoxLayout *layout;
QVBoxLayout *leftlayout;
QHBoxLayout *topleftlayout;
QVBoxLayout *rightlayout;
QCheckBox *box1;
QCheckBox *box2;

};

#endif // EXO2_H
