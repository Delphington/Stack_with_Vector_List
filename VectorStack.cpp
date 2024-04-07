#include "VectorStack.h"

// добавление в хвост
void VectorStack::push(const ValueType &value) {
    container.push_back(value);
}

// удаление с хвоста
void VectorStack::pop() {
    if (container.size() > 0) {
        container.pop_back();
    } else {
        throw out_of_range("Size = 0");
    }
}

// посмотреть элемент в хвосте
const ValueType &VectorStack::top() const {
    if (container.size() > 0) {
        return container.back();
    } else {
        throw out_of_range("Size = 0");
    }
}

// проверка на пустоту
bool VectorStack::isEmpty() const {
    return container.empty();
}

// размер
size_t VectorStack::size() const {
    return container.size();
}

VectorStack::~ VectorStack() {
    container.clear();
}

//

