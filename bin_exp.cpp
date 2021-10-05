#include<bits/stdc++.h>
using namespace std;


int power(int a, int n) {
    if (n == 0)
        return 1;
    int temp = power(a, n / 2);

    return n % 2 == 0 ? temp * temp : temp * temp * a;
}

int main() {
    cout << power(2, 3);
}