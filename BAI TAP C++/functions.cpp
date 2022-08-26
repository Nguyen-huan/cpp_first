#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void Hello(string name, int old){
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your old: " ;
    cin >> old;
    cout << "Hello " << name << endl;
    cout << "You are " << old << " years old";
}
void Hello_(string name, int old);
double lap_phuong(double n){
    return  pow(n,3);;
}
bool Male(string a){
    if(a == "male")
        return true;
    return false;
}
bool Tall(string b){
    if (b == "tall")
        return true;
    return false;
}
int main(){
    
    // string name;
    // int old;
    // Hello(name, old); 
    // cout << endl;
    // cout << "------------------------------------------------" << endl;
    // Hello_("Chien",20);
    // double n;
    // cout << "Nhap n = ";
    // cin >> n;
    // cout << "Lap phuong cua " << n << " la: " <<  lap_phuong(n);
    string a,b;
    cout << "Enter a: " ;
    getline(cin, a);
    cout << "Enter b: " ;
    getline(cin, b);
    if(Male(a) && Tall(b))
        cout << "You are a tall male";
    else if(!Male(a) && Tall(b))
        cout << "You are tall but not male";
    else if(Male(a) && !Tall(b))
        cout << "You are a short male";
    else 
        cout << "You are not male and not tall";

   
    return 0;
}
void Hello_(string name, int old){
    cout << "Hello " << name << endl;
    cout << "You are " << old << endl;
}