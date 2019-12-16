#ifndef TOKEN_H
#define TOKEN_H

#include <QString>

/**
 * @brief The Token class
 * Tokens for evaluating mathematical expressions
 */
class Token
{
public:
    enum Type {
        LEFT,
        RIGHT,
        UNARY_MINUS,
        PLUS,
        MINUS,
        MULTIPLY,
        DIVIDE,
        NUMBER
    };

    Token(QString value, Type type);

    QString getValue() const;
    Type getType() const;
protected:
    Type type;
    QString value;
};

#endif // TOKEN_H
