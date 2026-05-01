
#include<iostream>
#include<thread>
using namespace std;

// Function for thread
void task(int id){
    cout << "Thread " << id << " is running\n";
}

int main(){

    // Create 3 threads
    thread t1(task, 1);
    thread t2(task, 2);
    thread t3(task, 3);

    // Wait for all threads to finish
    t1.join();
    t2.join();
    t3.join();

    cout << "Main function finished\n";

    return 0;
}