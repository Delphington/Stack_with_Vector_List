#ifndef LAB_2_LISTSTACK_H
#define LAB_2_LISTSTACK_H
//#include "StackImplementation.h"
#include <list>
#include "StackImplementation.h"

using namespace std;
using ValueType = double;


class ListStack : public IStackImplementation {
private:
    list<ValueType> container;
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
    virtual ~ListStack() override;
};


#endif //LAB_2_LISTSTACK_H
