//
// circularBuffer.h Created by smaug on 04.09.22.
//

#ifndef LEETCODE_CIRCULARBUFFER_H
#define LEETCODE_CIRCULARBUFFER_H

template <typename T>
class circularBuffer{

public:

    circularBuffer(const int& bufSize)
    {
        bufferSize = bufSize;
        buffer = new T[bufferSize];
        head = bufferSize -1;
        tail = 0;
        length = 0;
    }

    int head;
    int tail;
    int length;
    int bufferSize;

    T* buffer;

public:

    bool isEmpty()
    {
        return length == bufferSize;
    }

    bool isFull()
    {
        return length==0;
    }

    T getElem()
    {
        T get = buffer[tail];
        tail = nextPosition(tail);
        --length;
        return get;
    }

    void push(T addEl)
    {
        head = nextPosition(head);
        buffer[head] = addEl;
        if(circularBuffer<T>::isFull()){
            tail = nextPosition(tail);
        }
        else
        {
            ++length;
        }
    }

private:

    int nextPosition(int &pos)
    {
        return (pos+1) % bufferSize;
    };

};




#endif //LEETCODE_CIRCULARBUFFER_H
