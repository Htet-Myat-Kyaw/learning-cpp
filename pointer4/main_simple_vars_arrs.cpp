#include <iostream>
using namespace std;

// SIMPLE VARS    //

int age = 18;
char letter = 'k';
char letters[] = {'a', 'b', 'c', 'd', 'e'};
const char* szName = "Alan Bob Cindy";

// string szName2= string( const string& szName);
// const char* szName2= string( const string &szName);

class Dog{
 public:
     int age;
     const char* name;
};

//  ARRAYS  //
int ages[3] = {1,22,33};
char letters2[3] = {'x', 'y', 'z'};
const char* szNames[3] = {"Alan Htet", "Ohnmar Shwe", "KK Naing"};
Dog dogs[2];


int main()
{
    cout << "Hello world!" << endl;
    cout << age << endl;
    cout << letter << endl;

    Dog dog;
    dog.age= 12;
    dog.name= "Blackie";
    cout << dog.name << " is " << dog.age << " years old!" << endl;



    cout << "--------------" << endl;
    cout << letters << endl;

    cout << "--------------" << endl;
    cout << szName << endl;
    cout << szName[1] << endl;
    cout << "--------------" << endl;
    //  ARRAYS  //

    Dog dg1;
    dg1.age=1;
    dg1.name="Agraa";

    Dog dg2; //= new Dog();
    dg2.age=2;
    dg2.name="Balannga";
    dogs[0]= dg1;
    dogs[1]= dg2;

    cout <<ages[0] << ", "<< ages[1] << ", "<<  ages[2] << endl;
    cout << letters2<< endl;;
    cout <<szNames[0] << ", "<< szNames[1] << ", "<<  szNames[2] << endl;
    cout << dogs[0].name<< ", "<< dogs[1].name << endl;

    return 0;
}
