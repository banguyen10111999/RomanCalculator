#include "calculatordecimal.h"

CalculatorDecimal::CalculatorDecimal()
{

}

std::deque<Token> CalculatorDecimal::tokenize(const QString expression)
{
    std::deque<Token> tokens;
    bool isCurrentTokenNegative = false;
    for (auto iterator = expression.begin(); iterator != expression.end(); ++iterator) {
        std::string currentTokenString = "";
        if (*iterator == 'x' || *iterator == '*') {
            tokens.push_back(Token(*iterator, Token::MULTIPLY));
        } else if (*iterator == '/') {
            tokens.push_back(Token(*iterator, Token::DIVIDE));
        } else if (*iterator == '(') {
            tokens.push_back(Token(*iterator, Token::LEFT));
        } else if (*iterator == ')') {
            tokens.push_back(Token(*iterator, Token::RIGHT));
        } else if (*iterator == ' ') {
            // Nothing
        } else if (*iterator == '+' || *iterator == '-') {
            if (tokens.empty()) {
                // Ignore unary plus
                if (*iterator == '-') {
                    tokens.push_back(Token(*iterator, Token::UNARY_MINUS));
                }
            } else {
                // TODO: Complete
                switch (tokens.end()->getType()) {
                    case Token::NUMBER: case Token::RIGHT:
                        if (*iterator == '+') {
                            tokens.push_back(Token(*iterator, Token::PLUS));
                        } else {
                            tokens.push_back(Token(*iterator, Token::MINUS));
                        }
                        break;
                    case Token::LEFT:
                        if (*iterator == '-') {
                            tokens.push_back(Token(*iterator, Token::UNARY_MINUS));
                        }
                        break;
                    case Token::PLUS: case Token::MINUS:
                    case Token::MULTIPLY: case Token::DIVIDE:
                    case Token::UNARY_MINUS:
                        if (*iterator == '-') {
                            isCurrentTokenNegative = !isCurrentTokenNegative;
                        }
                        break;
                }
            }
        }
    }
    return tokens;
}
