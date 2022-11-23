#include <iostream>

using namespace std;

int main(){

    double a, b, c;
    double biggest_num;

    cout << "Nhap so thu nhat: ";
    cin >> a;

    cout << "Nhap so thu hai: ";
    cin >> b;

    cout << "Nhap so thu ba: ";
    cin >> c;

    if (a >= b && a >= c){
        biggest_num = a;
    }
    else if (b >= a && b>=c){
        biggest_num = b;
    }
    else{
        biggest_num = c;
    }
    cout<<"\nSo lon nhat la: " << biggest_num;

    return 0;
}