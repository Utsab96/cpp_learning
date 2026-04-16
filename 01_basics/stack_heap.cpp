/*Program Memory
 ├── Stack  (automatic)
 └── Heap   (manual)

Stack
 Created automatically ✔
Deleted automatically ✔
Very fast ⚡
Limited size ❗

⚖️ 8. Stack vs Heap (Final)
Feature	    Stack	            Heap
Allocation	Automatic	        Manual
Speed	    Fast ⚡	            Slower
Size	    Small	            Large
Lifetime	Function scope      Until delete
Managed by	Compiler	        Programmer

 Pointer = variable that stores address of another variable

*/


#include <iostream>
using namespace std;


int main(){
    int a = 10; //stack
    int *b = new int(20); //heap

    cout << a << endl;
    cout << *b << endl;

    cout << b << endl; // address lof the heap memory , where 20 is stored

    cout << &b << endl;



    delete b ; //need to free heap memory
}