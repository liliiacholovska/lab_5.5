#include <iostream>

using namespace std; 


int NSD(int n, int m) {
    if (n == 0) {
        return m;
    }
    if (m == 0) {
        return n;
    }
    else {
        int r = n % m;
        return NSD(m, r);
    }
}

int main() {
    int n, m;

    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;

    int gcd = NSD(n, m);
    cout << "The GCD of " << n << " and " << m << " is: " << gcd << endl;

    return 0;
}