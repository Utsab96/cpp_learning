#include<iostream>
#include<thread>
#include<queue>
#include<mutex>
#include<condition_variable>
using namespace std;

queue<int> buffer;
const int MAX = 5;

mutex mtx;
condition_variable cv;

// Producer
void producer(){
    for(int i = 1; i <= 10; i++){
        unique_lock<mutex> lock(mtx);

        cv.wait(lock, [](){ return buffer.size() < MAX; });

        buffer.push(i);
        cout << "Produced: " << i << endl;

        lock.unlock();
        cv.notify_all();
    }
}

// Consumer
void consumer(){
    for(int i = 1; i <= 10; i++){
        unique_lock<mutex> lock(mtx);

        cv.wait(lock, [](){ return !buffer.empty(); });

        int val = buffer.front();
        buffer.pop();
        cout << "Consumed: " << val << endl;

        lock.unlock();
        cv.notify_all();
    }
}

int main(){

    thread t1(producer);
    thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}