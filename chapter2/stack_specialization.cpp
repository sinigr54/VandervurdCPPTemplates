//
// Created by sinigr on 29.11.2018.
//

#include "chapter2.h"

#include <deque>
#include <string>

using namespace ch2;

/*
 * Специализация стека для типа std::string.
 * Показано, что специализация для конкретного типа может
 * включать совершенно иную реализацию, в этом случае, на базе
 * дека, вместо вектора.
 */

template <>
class Stack<std::string> {
private:
    std::deque<std::string> data;

public:
    Stack() = default;

    void push(const std::string &element);

    void pop();

    const std::string& top();

    bool empty() const;
};

void Stack<std::string>::push(const std::string &element) {
    data.push_back(element);
}

void Stack<std::string>::pop() {
    if (data.empty()) {
        // TODO Throw exception
    }

    data.pop_back();
}

const std::string &Stack<std::string>::top() {
    return data.back();
}

bool Stack<std::string>::empty() const {
    return data.empty();
}
