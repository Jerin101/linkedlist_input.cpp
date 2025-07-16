#include <iostream>
using namespace std;
void fun(int* p){
    *p = 100;
//cout<< "in fun :" << *p << endl;
}
int main() {
    int x = 10;
    int* p =  &x;
    fun(p);
    //cout<< "in mainn :" << *p << endl;
    cout << x << endl;
    return 0;
}