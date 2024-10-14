#include "EvaluateReversePolishNotation.h"

#include "../../Util.h"

int EvaluateReversePolishNotation::evalRPN(std::vector<std::string>& tokens)
{
    std::stack<std::string> stack;
    for(size_t i = 0; i < tokens.size(); ++i)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
        {
            int b = std::stoi(stack.top());
            stack.pop();
            int a = std::stoi(stack.top());
            stack.pop();
            int val = calculate(a, b, tokens[i]);
            stack.push(std::to_string(val));
        } else
        {
            stack.push(tokens[i]);
        }
    }
    return std::stoi(stack.top()); 
}

int EvaluateReversePolishNotation::calculate(int a, int b, std::string operation_sign)
{
    if (operation_sign == "+") return a + b;
    if (operation_sign == "-") return a - b;
    if (operation_sign == "*") return a * b;
    if (operation_sign == "/") return a / b;
    return -1;
}

void EvaluateReversePolishNotation::test()
{
    std::cout << "150: Evaluate Reverse Polish Notation" << difficultyToString(difficulty).value() <<"\n";
    std::vector<std::string> tokens{"2","1","+","3","*"};
    processExample(tokens);
    tokens = {"4","13","5","/","+"};
    processExample(tokens);
    tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    processExample(tokens);
    std::cout << "------------------" << "\n";
}

void EvaluateReversePolishNotation::processExample(std::vector<std::string>& tokens)
{
    std::cout << "Tokens: \n";
    Util::printVector(tokens);
    std::cout << "Value: " << evalRPN(tokens) << "\n";
}

