#ifndef EXO1_H
#define EXO1_H

#include <QWidget>
#include<QHBoxLayout>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
class exo1 : public QWidget
{
    Q_OBJECT
public:
    explicit exo1(QWidget *parent = nullptr);
protected:
void createwidgets();
void placewidgets();
void connexionwidgets();
QHBoxLayout *layout;
QLabel *label;
QPushButton *search;
QLineEdit *line;
};

#endif // EXO1_H
