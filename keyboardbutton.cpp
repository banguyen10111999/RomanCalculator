#include "keyboardbutton.h"
#include <QDebug>

KeyboardButton::KeyboardButton(QWidget* parent, QString text): QPushButton(parent)
{
    this->setText(text);

    connect(this, SIGNAL (clicked()), this, SLOT (sendTextOnClick()));
}

void KeyboardButton::sendTextOnClick() {
    qDebug() << "Current text is: " << this->text();
    emit sendText(this->text());
}
