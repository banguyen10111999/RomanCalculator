#ifndef KEYBOARDLINEEDIT_H
#define KEYBOARDLINEEDIT_H

#include <QLineEdit>

class KeyboardLineEdit : public QLineEdit
{
public:
    explicit KeyboardLineEdit(QWidget* parent = nullptr);
public slots:
    void textAppend(QString text);
};

#endif // KEYBOARDLINEEDIT_H
