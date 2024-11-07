#include <iostream>
using namespace std;

int main(){

    // Here's some math/physics values that we copy-pasted from elsewhere
    double pi { 3.14159 };
    double gravity { 9.8 };
    double phi { 1.61803 };

    cout << pi << '\n';  // pi is used
    cout << phi << '\n'; // phi is used

    // The compiler will likely complain about gravity being defined but unused
    int x{};
    int y{};
    
    cout << "Enter two number seperated by space: ";
    cin >> x >> y;
    
    cout << "You entered " << x << " and " << y << '\n';

    return 0;
}
