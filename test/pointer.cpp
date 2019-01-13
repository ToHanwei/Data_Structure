#include <iostream>

using namespace std;
const int MAX = 4;
void pointer1(){
    const char *names[MAX]={
        "Zara Ali",
        "Hiza Ali",
        "Nuha Ali",
        "Sara Ali",
    };
    for (int i=0; i<MAX; i++) {
        cout << "Value of names["<< i << "]:";
        cout << names[i] << endl;
    }
}


void pointer2() {
    int var[MAX] = {10, 20, 30, 40};
    int *pir[MAX];
    for (int i=0; i<MAX; i++) {
        pir[i] = &var[i];
    }
    for (int i=0; i<MAX; i++) {
        cout << "Value of var :[" << i << "] = ";
        cout << *pir[i] << endl;
    }
}

int main(void) {
    pointer1();
    pointer2();
}