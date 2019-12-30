#include <iostream>
#include <thread>   // C++多线程API头文件
#include <mutex>


using namespace std;

int a;
// mutex类型的独占锁
std::mutex mymutex;

void demo3_thread1() {
    // 在线程函数执行前加上这一句
    unique_lock<mutex> lock(mymutex);
    a = a + 10;
}

void demo3_thread2() {
    // 在线程函数执行前加上这一句
    unique_lock<mutex> lock(mymutex);
    a = a * 3;
}

int main() {
    a = 5;

    // 开启两个线程用于处理数据
    thread t1(&demo3_thread1);
    thread t2(&demo3_thread2);
    t1.join();
    t2.join();

    cout << a << endl;
    return 0;
}
