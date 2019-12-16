#include "token.h"

Token::Token(QString value, Type type)
{
    this->value = value;
    this->type = type;
}

QString Token::getValue() const
{
    return this->value;
}

Token::Type Token::getType() const
{
    return this->type;
}
