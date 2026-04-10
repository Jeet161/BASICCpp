#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

mutex mtx;

void task1() {
    lock_guard<mutex> lock(mtx);
    cout << "Thread 1 is running. ID: " << this_thread::get_id() << "\n";
}

void task2() {
    lock_guard<mutex> lock(mtx);
    cout << "Thread 2 is running. ID: " << this_thread::get_id() << "\n";
}

int main() {
    thread t1(task1);
    thread t2(task2);

    {
        lock_guard<mutex> lock(mtx);
        cout << "t1 ID: " << t1.get_id() << "\n";
        cout << "t2 ID: " << t2.get_id() << "\n";
    }

    if (t1.joinable()) {
        t1.join();
        cout << "t1 joined\n";
    }

    if (t2.joinable()) {
        t2.detach();
        cout << "t2 detached\n";
    }

    cout << "Main thread sleeping for 1 second...\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Main thread awake.\n";

    return 0;
}
