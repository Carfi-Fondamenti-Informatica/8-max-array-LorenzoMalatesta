#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int d;
    cin >> d;
    float a[d], num_max;
    for (int i=0; i<d; i++) {
        a[i]=0;
    }
    for (int i=0; i<d; i++) {
        cin >> a[i];
    }
    num_max = max (a, d);
    cout << num_max;
    return 0;
}
//
