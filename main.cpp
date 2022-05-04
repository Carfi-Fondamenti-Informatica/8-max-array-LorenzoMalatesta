#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int d;
    cin >> d;
    float a[d];
    for (int i=0; i<d; i++) {
        a[i]=0;
    }
    for (int i=0; i<d; i++) {
        cin >> a[i];
    }
    cout << max (a, d);
    return 0;
}
