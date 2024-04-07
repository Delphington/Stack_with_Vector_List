#include "ListStack.h"

// добавление в хвост
void ListStack::push(const ValueType &value) {
    container.push_back(value);
}

// удаление с хвоста
void ListStack::pop() {
    if (container.size() > 0) {
        container.pop_back();
    } else {
        throw out_of_range("Size =0");
    }
}

// посмотреть элемент в хвосте
const ValueType &ListStack::top() const {
    if (container.size() > 0) {
        return container.back();
    } else {
        throw out_of_range("Size =0");
    }
}


// проверка на пустоту
bool ListStack::isEmpty() const {
    return container.empty();
}

// размер
size_t ListStack::size() const {
    return container.size();
}

ListStack::~ListStack() {
    container.clear();
}
