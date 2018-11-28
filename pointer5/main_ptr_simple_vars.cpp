#include <iostream>
using namespace std;

// SIMPLE VARS    //

int age = 18;
char letter = 'k';
char letters[] = {'a', 'b', 'c', 'd', 'e'};
const char* szName = "Alan Htet MK";

// string szName2= string( const string& szName);
// const char* szName2= string( const string &szName);

class Dog{
 public:
     int age;
     const char* name;
};


int* pAge     = &age;
char* pLetter = &letter;
char* pLetters= letters; /* NO & */

char letts[5];
char* pLetts=letts;

const char** pSzName = &szName;

//  ARRAYS  //

int main()
{
   cout << pAge << " , " <<  &age <<" , "<< *pAge << endl;
   *pAge = 20018;
   cout << pAge << " , " <<  &age <<" , "<< *pAge << endl;
   cout << age << endl;

   cout << "---------------------------" << endl;
   cout << pLetter << " , " <<  &letter <<" , "<< *pLetter << endl;

   cout << pLetter << " , " <<  &letter <<" , "<< *pLetter << endl;

   *pLetter = 'h';
   cout << pLetter << " , " <<  &letter <<" , "<< *pLetter << endl;
   cout << letter << endl;

  cout << "---------------------------" << endl;

   cout << pLetters << " == " << letters   << endl;
   cout << &pLetters << " == " << &letters << endl;
   cout << *pLetters << endl;

   cout << pLetters[0] << ", " << pLetters[1] << ", " << pLetters[2] << ", " <<  pLetters[3] << ", " <<  pLetters[4] <<    endl;
   pLetters[1] = 'Z';
   cout << pLetters[1] << " , " <<  letters << endl;
   cout << letters[1] << endl;

   cout << "---------------------------" << endl;
   cout << "address of Name = " << pSzName << endl ;
   cout << "value  of Name = " << *pSzName << endl ;
   cout << "---------------------------" << endl;

   Dog doggie;
   doggie.age=1;
   doggie.name="F Daring Canine";

   Dog* pDog= &doggie;
   cout << pDog << endl;
   cout << pDog->name << " at age of " << pDog->age << endl;

   // *pDog->name = "No-work All-fun Alan"
   (*pDog).name = "No-work All-fun Alan";
   // pDog.name = "No-work All-fun Alan"
   // pDog->name = "No-work All-fun Alan"

   cout << pDog->name << endl;
   cout << doggie.name << endl;

    //  ARRAYS  //

    return 0;
}
