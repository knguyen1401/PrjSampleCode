#include <iostream>
#include <cmath>

#define sum(a,b,c) (a+b+c)
#define avg(a, b, c) (sum(a,b,c)/3)

using namespace std;

int main(){

    double toan, van, anh;
    double tong_diem, diem_tb;
     
    cout<<"Nhap diem Toan: ";
    cin >> toan;

    cout <<"\nNhap diem Van: ";
    cin >> van;

    cout << "\nNhap diem Anh: ";
    cin >> anh;

    if (toan >10 || van >10|| anh >10){
        cout<<"\nDiem khong the lon hon 10.";
        exit(1);
    }
    else{
        tong_diem  = sum(toan, van, anh);
        diem_tb = avg(toan, van, anh);

        cout<<"\nTong diem: " << tong_diem << endl;

        printf("Diem trung binh: %.2lf", diem_tb);
    }
    return 0;
}
