#ifndef CALCULATORDECIMAL_H
#define CALCULATORDECIMAL_H

#include "token.h"
#include <deque>
#include <QString>

class CalculatorDecimal
{
public:
    CalculatorDecimal();
    static std::deque<Token> tokenize(const QString expression);
protected:

};

#endif // CALCULATORDECIMAL_H
