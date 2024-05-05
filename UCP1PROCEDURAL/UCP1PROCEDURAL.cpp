// UCP1PROCEDURAL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct node {
    string nama;
    string nilaibahasainggris;
    string nilaimatematika;
    string status;
};



void addnode() {
    string nama;
    string nilaibahasainggris;
    string nilaimatematika;
    string status;
    cout << "masukan nama:";
    cin >> nama;
    cout << "masukan nilai bahasa inggris:";
    cin >> nilaibahasainggris;
    cout << "masukan nilai matematika:";
    cin >> nilaimatematika;

    if (nilaimatematika <= 80)
    {
        cout << "status lulus" << endl;
        cin >> status;
    }

    if (nilaibahasainggris & nilaimatematika > 70)
    {
        cout << "status lulus" << endl;
        cin >> status;
    }

    if (nilaimatematika & nilaibahasainggris < 70)
    {
        cout << "status tidak lulus" << endl;
        cin >> status;
    }

}



int main()
{
    cout << "masukan nama " << endl;
    cout << "masukan nilai matematika " << endl;
    cout << " masukan nilai bahasa inggris " << endl;
    cout << "tampilkan status" << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// jawaban ucp no 1-5
//   1.implementasi variabel 
// int ctr;
// char ch;
// int item;
//   2. implementasi conditional stetement
//   if (nilaimatematika & nilaibahasainggris < 70)
// { cout << " masukan nilai matematika "
// cin }
//   3. implementasi srtuct 
// 
//   4. implementasi fungsi 
//      switch(kondisi)
//       {
//        case konstanta-1=-----
//         break;
//         case konstanta-2=-----
//            break;
//         default = 
//           break;
//           }
// implementasi prosedur 
//         void display()
// {
// cout << "array elements are:";
// for (i=0;<n; i++)
// cout << arr[i]<<""'
// cout << endl;
//   5.implementasi looping
// do....)
// {
// 
// }while 


