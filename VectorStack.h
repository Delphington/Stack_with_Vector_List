#ifndef LAB_2_VECTORSTACK_H
#define LAB_2_VECTORSTACK_H

#include <vector>
#include "StackImplementation.h"


using namespace std;
using ValueType = double;

class VectorStack : public IStackImplementation {
private:
    vector<ValueType> container;
public:
    // добавление в хвост
    virtual void push(const ValueType &value) override;

    // удаление с хвоста
    virtual void pop() override;

    // посмотреть элемент в хвосте
    virtual const ValueType &top() const override;

    // проверка на пустоту
    virtual bool isEmpty() const override;

    // размер
    virtual size_t size() const override;

    // виртуальный деструктор
    ~ VectorStack() override;
    // VectorStack(const VectorStack & co);
};


#endif //LAB_2_VECTORSTACK_H
