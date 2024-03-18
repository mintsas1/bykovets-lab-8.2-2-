#include <iostream>
using namespace std;

const int n = 5;

int main() {
    int a[n], s = 1; 

    
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << " array element: ";
        cin >> a[i];
    }

    
    int min_el = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min_el)
            min_el = a[i];
    }

    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == min_el)
            break;
        sum += a[i];
    }

    cout << "s = " << s << '\n'; 
    cout << "Sum of elements before the minimum element: " << sum << '\n'; 

    return 0;
}



 
