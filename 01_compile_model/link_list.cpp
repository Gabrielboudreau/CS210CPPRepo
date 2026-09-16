#include <iostream>
class Box {
    public:
    Box(int value): data(new int(value)) {}

    ~Box() {
        delete data;
        data = nullptr;
    }
    int value(){
        return *data;
    }
    private:
    int * data;
};
/*
int main() {
    int x = 5;
    int* p = &x; // pointer p- stack memory, cannot be accessed in heap outside the stack
    // p points to memory of x through address not x value, pointer can be shifted
    std::cout << x << std::endl;
    std::cout << *p << std::endl; //dereferencing (prints value inside the address)
    std::cout << p << std::endl; //referencing (prints address)
    return 0;
}
*/
int main() { /*
    int* p = new int(5); //one integer memory space storing 5 in heap
    //"new" keyword carves out unnamed integer space in memory in unknown space. There is an address that can be ref
    std::cout << *p << std::endl;
    std::cout << p << std::endl;
    delete p; // destructor in classes that frees up memory of what was being referenced in heap
    p = nullptr; //Must point to something, temp point at it, does not use memory
    */
    Box box1(6);
    std::cout << box1.value() << std::endl;
    delete &box1;
    return 0;
}