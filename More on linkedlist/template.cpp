// create a template class
#include <iostream>
using namespace std;

// Template Class
template <typename T>
class MyClass {
private:
    T data; // Generic Data Type
public:
    // Constructor
    MyClass(T value) {
        data = value;
    }

    // Function to Display Data
    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    // Integer Type Object
    MyClass<int> obj1(10);
    obj1.display();  // Output: Data: 10

    // Double Type Object
    MyClass<double> obj2(15.75);
    obj2.display();  // Output: Data: 15.75

    // String Type Object
    MyClass<string> obj3("Hello, Templates!");
    obj3.display();  // Output: Data: Hello, Templates!

    return 0;
}