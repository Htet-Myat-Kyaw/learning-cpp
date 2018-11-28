#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "How many ints?";
    int num=0;
    cin >> num;
    int* p2Ints= new int[num];
    cout << "Allocated" << endl;
    for(int c=0; c<num; ++c){
         cout << "Put in number " << c << " :";
         cin >> *(p2Ints + c);

    }
    cout << "The nums are :"<< endl;
    int sum= 0;
    for(int c=0; c<num; ++c){
         int n = *(p2Ints++);
         sum =sum +  n;
         cout << n << "  ";
    }
    cout << endl;
    cout << "Sum = " << sum << endl;

    p2Ints -= num; //reset pt to init
    delete[] p2Ints;

    cout << endl;

    return 0;
}
