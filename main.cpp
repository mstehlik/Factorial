#include <iostream>

using namespace std;

int fact(int n) {
    if (n > 0)
        return n * fact(n-1);
    else
        return 1;
}

int main(int argc, char** argv) {

    cout << fact(5);    
    return 0;
}

