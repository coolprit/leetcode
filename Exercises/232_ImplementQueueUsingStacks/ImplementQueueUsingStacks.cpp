#include "ImplementQueueUsingStacks.h"

void ImplementQueueUsingStacks::test()
{
    std::cout << "232: Implement Queue Using Stacks" << difficultyToString(difficulty).value() <<"\n";
    std::vector<std::string> commands{"StackBasedQueue", "push", "push", "peek", "pop", "empty"};
    std::initializer_list<std::unique_ptr<int>> values {nullptr, std::make_unique<int>(1), std::make_unique<int>(2), nullptr, nullptr, nullptr};
    processExample(commands, values);
    std::cout << "------------------" << "\n";
}

void ImplementQueueUsingStacks::processExample(std::vector<std::string>& cmd, std::initializer_list<std::unique_ptr<int>>& elems)
{
    std::unique_ptr<Util::StackBasedQueue> stack_based_queue;
    std::cout << "[";
    for (unsigned int i = 0; i < cmd.size(); ++i)
    {
        if(cmd[i] == "StackBasedQueue")
        {
            stack_based_queue = std::move(std::make_unique<Util::StackBasedQueue>());
            std::cout << " null ";
        }
        else if(cmd[i] == "push" && elems.begin()[i] != nullptr)
        {
            stack_based_queue->push(*elems.begin()[i]);
            std::cout << " null "; 
        }
        else if(cmd[i] == "peek") (std::cout << " " << stack_based_queue->peek() << " ");
        else if(cmd[i] == "pop") (std::cout << " " << stack_based_queue->pop() << " ");
        else if(cmd[i] == "empty") (std::cout << " " << stack_based_queue->empty() << " ");
    }
    std::cout << "] \n";
}

