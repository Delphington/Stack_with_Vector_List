#include "Stack.h"

Stack::Stack(StackContainer container) {
    if (container == StackContainer::Vector) {
        _pimpl = new VectorStack();
        _containerType = container;
    } else {
        _pimpl = new ListStack();
        _containerType = container;
    }
}

Stack::Stack(const ValueType *valueArray, const size_t arraySize,
             StackContainer container) {
    if (container == StackContainer::Vector) {
        _pimpl = new VectorStack();
        _containerType = container;
    } else {
        _pimpl = new ListStack();
        _containerType = container;
    }
    for (size_t i = 0; i < arraySize; i++) {
        _pimpl->push(valueArray[i]);
    }

}

//
Stack::Stack(const Stack &copyStack) {
    *this = copyStack;

}

Stack &Stack::operator=(const Stack &copyStack) {
    if (this != &copyStack) {
        delete _pimpl;
        _containerType = copyStack._containerType;
        if (copyStack._containerType == StackContainer::Vector) {
            _pimpl = new VectorStack(*dynamic_cast<VectorStack *>(copyStack._pimpl));
        }
            // this is not good...
        else {
            // !!!
            _pimpl = new ListStack(*dynamic_cast<ListStack *>(copyStack._pimpl));
        }
    }
    return *this;
}

//
Stack::Stack(Stack &&moveStack) noexcept {
    //
    _containerType = moveStack._containerType;
    _pimpl = moveStack._pimpl;
    moveStack._pimpl = nullptr;
};

Stack &Stack::operator=(Stack &&moveStack) noexcept {
    if (this != &moveStack) {
        _containerType = moveStack._containerType;
        _pimpl = moveStack._pimpl;
        moveStack._pimpl = nullptr;
//
    }
    return *this;
};

Stack::~Stack() {
    delete _pimpl;
};

void Stack::push(const ValueType &value) {
    _pimpl->push(value);
}

// удаление с хвоста
void Stack::pop() {
    _pimpl->pop();
}

// посмотреть элемент в хвосте
const ValueType &Stack::top() const {
    return _pimpl->top();
}

// проверка на пустоту
bool Stack::isEmpty() const {
    return _pimpl->isEmpty();
}

// размер
size_t Stack::size() const {
    return _pimpl->size();
}
