#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    // string name = "huan";
    // int old = 19;
    // cout << "My name is " << name << endl;
    // cout << "I am " << old << " years old" << endl;

    // name = "nguyen huu huan";
    // old = 20;
    // cout << "My name is " << name << endl;
    // cout << "I am " << old << " years old" << endl;
    // cout << name.length() << endl;
    // cout <<  name[0] << name[2] << endl;
    // cout << "-------------------------------------------------" << endl;
    // name[0] = 'N';
    // name[7] = 'H';
    // name[11] = 'H';
    // cout << "After replace name " << name << endl;

    // cout <<"-------------------------------------------------" << endl;
    // string school = "Dai hoc dien luc";
    // cout << school.find("hoc",0) << endl;
    // cout << school.substr(4,8) << endl;
    // int x = school.find("dien",2);
    // cout << x + 10 << endl;
    // string phrase = school.substr(5,9);
    // cout << phrase << endl;

    // cout << "------------------------------------------------"<< endl;
    // cout << "Mot ham tinh toan" << endl;
    // cout << round(4.3) << endl << round(4.6) << endl 
    //      << "Lam tron xuong: "<< floor(6.8) << endl << "Lam tron len: " << ceil(6.2)  << endl;
    // cout << fmax(3,7) << "\t" << fmin(3,7) << endl;

    cout << "***************Getting user input**************" << endl;
    string name;
    cout << "Enter yout name: ";
    //cin >> name;  cach nhap mot str sai !!!!!!!
    getline(cin, name); // Cach nhap dung 
    cout << "Hello " << name << endl;

    cout <<"--------------------- Mang ----------------------" << endl;
    int a[20] = {1, 9, 0, 123, 93,55};
    cout << a[3] << endl;
    a[3] = 100000; // gan gia tri khac cho cac phan tu trong mang
    cout << a[3];
    return 0;
}