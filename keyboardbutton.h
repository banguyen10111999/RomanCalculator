#ifndef KEYBOARDBUTTON_H
#define KEYBOARDBUTTON_H

#include <QPushButton>

/**
 * @brief The KeyboardButton class
 *
 * A QPushButton extension that sends a signal with current text on click
 */
class KeyboardButton : public QPushButton
{
    Q_OBJECT

public:
    explicit KeyboardButton(QWidget* parent = nullptr, QString text = "");
signals:
    void sendText(QString text);
public slots:
    void sendTextOnClick();
};

#endif // KEYBOARDBUTTON_H
