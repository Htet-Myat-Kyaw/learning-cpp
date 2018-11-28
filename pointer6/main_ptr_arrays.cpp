#include <iostream>
using namespace std;

// SIMPLE VARS    //


class Dog{
 public:
     int age;
     const char* name;
};




//  ARRAYS  //
int ages[3] = {100,202,3330};
int* pAges= ages; /* NO & */

char letters[] = {'a', 'b', 'c', 'd', 'e'};
char* pLetters= letters; /* NO & */

const char* szNames[3] = {"Alan Htet", "Ohnmar Shwe", "KK Naing"};
const char** pSzNames = szNames;

Dog dogs[2];


int main()
{
   cout << "---------------------------" << endl;
   cout << pAges << " == " <<  ages <<" , "<< endl; // arr123 shows its address.
   cout << ages << " == " <<  &ages <<" , "<< endl;
   cout << *pAges << "," <<endl;

   cout << pAges[0] << ", " << pAges[1] << ", " << pAges[2] <<   endl;
   pAges[1] = 999;
   cout << pAges[1] << " , " <<  ages << endl;
   cout << ages[1] << endl;


   cout << "---------------------------" << endl;

   cout << pLetters << " == " << letters   << endl;
   cout << &pLetters << " != " << &letters << endl;
   cout << *pLetters << endl;

   cout << pLetters[0] << ", " << pLetters[1] << ", " << pLetters[2] << ", " <<  pLetters[3] << ", " <<  pLetters[4] <<    endl;
   pLetters[1] = 'Z';
   cout << pLetters[1] << " , " <<  letters << endl;
   cout << letters[1] << endl;
   cout << "---------------------------" << endl;


   cout << "Address= " << pSzNames << " == "<< &szNames << endl;
   cout << pSzNames[0] << ", " << pSzNames[1] << ", " << pSzNames[2] <<    endl;
   pSzNames[2] = "Master George";
   cout << pSzNames[0] << ", " << pSzNames[1] << ", " << pSzNames[2] <<    endl;

   cout << "---------------------------" << endl;

    //  OBJECT ARRAYS  //

    Dog dg1;
    dg1.age=1;
    dg1.name="Agraa";

    Dog dg2; //= new Dog();
    dg2.age=2;
    dg2.name="Balannga";

    Dog dg3; //= new Dog();
    dg3.age=3;
    dg3.name="Crickey";

    dogs[0]= dg1;
    dogs[1]= dg2;
    dogs[2]= dg3;

    cout << "---------------------------" << endl;
    Dog* pDogs = dogs; //
    cout << "Address= " << pDogs << " == "<< &dogs << endl;
    cout << pDogs[0].name << ", " << pDogs[1].name << ", " << pDogs[2].name <<    endl;
    pDogs[2].name = "The Last Dog";
    cout << pDogs[0].name << ", " << pDogs[1].name << ", " << pDogs[2].name <<    endl;

    return 0;
}
