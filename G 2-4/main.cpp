#include <iostream>
#include <cmath>

#define PI 3.14
#define perimeter(r) (2*r*PI)
#define area(r) (PI*pow(r, 2))

using namespace std;

int main(){

    double r;

    cout << "Nhap ban kinh hinh tron: ";
    cin >> r;

    if (r == 0){
        cout << "Ban kinh khong the bang 0";
        exit(1);
    }
    else{
        cout << "Chu vi hinh tron: " << perimeter(r) << endl;
        cout << "Dien tich hinh tron: " << area(r) << endl;
    }

    return 0;
}