#include <iostream>

class SmartArray {
private:
    int* data;
    int size;

public:
    SmartArray(int size) : size(size) {
        data = new int[size];
    }

    ~SmartArray() {
        delete[] data;
    }

    void addElement(int element) {
        if (size < size + 1) {
            int* newData = new int[size + 1];

            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }

            newData[size] = element;

            delete[] data;
            data = newData;
            size++;
        }
    }

    int getElement(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        } else {
            throw std::out_of_range("Invalid index");
        }
    }
};

int main() {
    SmartArray arr(5);

    arr.addElement(10);
    arr.addElement(20);
    arr.addElement(30);

    std::cout << "Element at index 0: " << arr.getElement(0) << std::endl;
    std::cout << "Element at index 1: " << arr.getElement(1) << std::endl;
    std::cout << "Element at index 2: " << arr.getElement(2) << std::endl;

    return 0;
}
