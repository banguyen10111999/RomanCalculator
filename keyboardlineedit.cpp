#include "keyboardlineedit.h"
#include <QDebug>

KeyboardLineEdit::KeyboardLineEdit(QWidget* parent): QLineEdit(parent)
{

}

void KeyboardLineEdit::textAppend(QString text)
{
    qDebug() << "Current text in lineEdit is: " << this->text();
    this->setText(this->text().append(text));
    qDebug() << "Current text in lineEdit is: " << this->text();
}
