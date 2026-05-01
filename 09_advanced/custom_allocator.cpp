#include<iostream>
#include<vector>
using namespace std;

template<typename T>
struct MyAllocator{

    using value_type = T;   // 🔥 REQUIRED

    MyAllocator() = default;

    template<typename U>
    MyAllocator(const MyAllocator<U>&) {}

    T* allocate(size_t n){
        cout << "Allocating " << n << " elements\n";
        return (T*)::operator new(n * sizeof(T));
    }

    void deallocate(T* p, size_t n){
        cout << "Deallocating\n";
        ::operator delete(p);
    }
};

int main(){

    vector<int, MyAllocator<int>> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int x : v){
        cout << x << " ";
    }

    return 0;
}