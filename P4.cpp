#include <iostream>
#include <thread>
using namespace std;

void func(int x) {
    cout << "Hi " << x << endl;
}

int main() {
    thread t1(func, 1);
    thread t2(func, 2);
    thread t3(func, 3);
    thread t4(func, 4);
    thread t5(func, 5);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
}
