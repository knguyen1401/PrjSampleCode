#include <iostream>

using namespace std;

int main(){
    int gia_tien;

    cout << "Nhap gia tien: ";
    cin >> gia_tien;

    if (gia_tien >= 100000){
        gia_tien = gia_tien *7/10;
    }
    else{
        gia_tien = gia_tien * 9/10;
    }

    cout << "Gia tien phai tra: " << gia_tien;
    return 0;

}