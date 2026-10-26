#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

int total = 0;
mutex mtx;

void add(int n) {
    this_thread::sleep_for(chrono::milliseconds(n * 1000));

    lock_guard<mutex> lock(mtx);
    total += n;
}

int main() {
    thread T1(add, 1);
    thread T2(add, 2);
    thread T3(add, 3);

    cout << "Initial value: " << total << endl;

    T1.join();
    cout << "After T1.join(): " << total << endl;

    T2.join();
    cout << "After T2.join(): " << total << endl;

    T3.join();
    cout << "After T3.join(): " << total << endl;

    return 0;
}