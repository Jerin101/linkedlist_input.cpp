#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    std::cout <<"Hello World" << std::endl;
    int age;
    char name;
    cin >> age;
    cout << "enter the first latter of your name : ";
    cin >> name;
    cout << age << endl;
    cout << name << endl;
    double a,b;
    while(cin >> a >> b){
        cout << fixed << setprecision(5) << a << b << endl;
    }
    return 0;
}