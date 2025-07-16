#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
};

bool cmp(Student a, Student b) {
    int total1 = a.math + a.eng;
    int total2 = b.math + b.eng;
    if (total1 != total2) return total1 > total2;
    return a.id < b.id;
}

int main() {
    int n;
    cin >> n;
    Student arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].id >> arr[i].math >> arr[i].eng;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].id << " " << arr[i].math << " " << arr[i].eng << endl;
    }
    return 0;
}
