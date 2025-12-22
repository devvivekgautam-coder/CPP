#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void Sound() {
            cout << "Animal Makes A Sound. " << endl;
        }
};

class Dog :public Animal {
    public:
        void Sound() {
            cout << "Dog Barks. " << endl;
        }
};

int main () {
    Animal* s;
    Dog d;
    s = &d;

    s->Sound();
    return 0;
}