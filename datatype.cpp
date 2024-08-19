#include <iostream>
#include <iomanip>  // For setting precision
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    
    // Read the input values
    cin >> a >> b >> c >> d >> e;
    
    // Print each value on a new line
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    // Set precision for float and double
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;

    return 0;
}
