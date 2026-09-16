# pragma once
#include <iostream>
using namespace std;

template <typename  T>
class ArrayList {
    public:
        ArrayList():size(0) {

        }
        void add(T item) {
            if (size>=CAPACITY) {
                cout<<"CAPACITY FULL"<<endl;
                return;
            }
            data[size++] = item;
            for (int i =size; i >0; i--) {
                data[i] = data[i-1];
            }
            data[0]=item;
            size++;
        }
        void deleteFront() {
            if (size<=0) {
                cout<<"CAPACITY EMPTY"<<endl;
                return;
            }
            for (int i =0; i<size-1; i++) {
                data[i] = data[i+1];
            }

            size--;
        }
    bool search(T item) {
            if (size<=0) {
                cout<<"CAPACITY EMPTY"<<endl;
                return false;
            }
            for (int i =0; i<size; i++) {
                if (data[i]==item) {
                    return true;
                }
            }
            return false;
        }
    private:
        static const int CAPACITY = 20;
        T data[CAPACITY];
        int size;


};