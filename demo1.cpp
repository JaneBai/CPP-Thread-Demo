#include <iostream>
#include <unistd.h> // Linux系统下的头文件，下面用到的sleep函数就是出自这里，其本身与多线程没什么关系
#include <thread>   // C++多线程API头文件


using namespace std;

// 不带参数的线程函数
void demo1_thread1() {
    while (true) {
        sleep(1);
        cout << "hello world" << endl;
    }
}

// 传入参数的线程函数
void demo1_thread2(int n) {
    while (true) {
        sleep(1);
        cout << "input parameter " << n << endl;
    }
}

int main() {
    int a = 1;
    // 新建两个thread对象
    thread t1(&demo1_thread1);    // 不带参数
    thread t2(&demo1_thread2, a); // 带参数
    // 调用thread对象的成员函数join实现运行
    t1.join();
    t2.join();
    return 0;
}
