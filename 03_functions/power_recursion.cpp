// 8. Power using recursion
#include<iostream>
using namespace std;

int power(int base, int exp){

    // Example call sequence for power(2,3):
    // power(2,3) → power(2,2) → power(2,1) → power(2,0)

    cout << "Calling: power(" << base << ", " << exp << ")" << endl;
    
    // 🔹 Base case
    if(exp == 0){
        // When exp becomes 0, recursion stops
        // power(2,0) = 1
        cout << "Base case reached, returning 1" << endl;
        return 1;
    }

    // 🔹 Recursive call
    // This goes DOWN until exp becomes 0
    int result = power(base, exp - 1);

    // 🔹 Backtracking starts here (coming UP)
    // Now multiplication happens step-by-step

    // Example:
    // power(2,1) → 2 * 1 = 2
    // power(2,2) → 2 * 2 = 4
    // power(2,3) → 2 * 4 = 8

    cout << "Back to power(" << base << ", " << exp << ") ";
    cout << "-> " << base << " * " << result << endl;

    // 🔹 Final multiplication at each level
    return base * result;
}

int main(){

    int base, exp;

    cout << "Enter the base and the power" << endl;
    cin >> base >> exp ;

    int ans = power(base, exp);

    cout << "Final Answer: " << ans << endl;

    return 0;
}

// power(2,3)
// = 2 * power(2,2)
// = 2 * (2 * power(2,1))
// = 2 * (2 * (2 * power(2,0)))
// = 2 * (2 * (2 * 1))

// Now returning:

// power(2,1) = 2 * 1 = 2
// power(2,2) = 2 * 2 = 4
// power(2,3) = 2 * 4 = 8