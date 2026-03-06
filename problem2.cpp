#include <iostream>
using namespace std;

class DynArray {
private:
    int* data;
    int size;
    int capacity;

public:

    DynArray(int cap = 8) {
        capacity = cap;
        size = 0;
        data = new int[capacity];
    }

    void pushBack(int value) {
        data[size] = value;
        size++;
    }

    void insert(int index, int value) {

        for(int i = size; i > index; i--) {
            data[i] = data[i-1];
        }

        data[index] = value;
        size++;
    }

    void remove(int index) {

        for(int i = index; i < size-1; i++) {
            data[i] = data[i+1];
        }

        size--;
    }

    int get(int index) {
        return data[index];
    }

    void set(int index, int value) {
        data[index] = value;
    }

    void print() {

        cout << "[";

        for(int i = 0; i < size; i++) {
            cout << data[i];
            if(i != size-1) cout << ", ";
        }

        cout << "] (size=" << size << ", cap=" << capacity << ")" << endl;
    }
};

int main() {

    DynArray arr;

    arr.pushBack(10);
    arr.pushBack(20);
    arr.pushBack(30);
    arr.pushBack(40);
    arr.pushBack(50);

    arr.print();

    arr.insert(2,25);
    arr.print();

    arr.remove(0);
    arr.print();

    cout << "Element at index 2: " << arr.get(2) << endl;

    arr.set(2,99);
    arr.print();

    return 0;
}