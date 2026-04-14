#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {

private:
    struct QNode {
        T data;
        QNode* next;

        QNode(T d) {
            data = d;
            next = nullptr;
        }
    };

    QNode* frontPtr;
    QNode* backPtr;

public:
    Queue() {
        frontPtr = nullptr;
        backPtr = nullptr;
    }


    bool isEmpty() {
        return frontPtr == nullptr;
    }


    T front() {
        return frontPtr->data;
    }


    void enqueue(T value) {
        QNode* newNode = new QNode(value);

        if (backPtr == nullptr) {
            frontPtr = newNode;
            backPtr = newNode;
        }
        else {
            backPtr->next = newNode;
            backPtr = newNode;
        }
    }


    void dequeue() {
        if (frontPtr == nullptr) return;

        QNode* temp = frontPtr;
        frontPtr = frontPtr->next;

        if (frontPtr == nullptr) {
            backPtr = nullptr;
        }

        delete temp;
    }
};
#endif