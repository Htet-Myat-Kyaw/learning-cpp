#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int dog_age = 9;

    cout << "Integer age = "<< age << endl;
    cout << "Integer dog_age = "<< dog_age << endl; 
 
    int* mypointer = &age; 
    cout << "mypointer points to age " << endl;
    cout << "Integer age is located at: 0x"<< hex << mypointer << endl;
    cout << "Value of mypointer = "<< dec << *mypointer << endl;
   

    mypointer = &dog_age; 
    cout << "Reassigned mypointer points to dog_age " << endl;
    cout << "Dog age is located at: 0x"<< hex << mypointer << endl;
    cout << "Value of reassigned mypointer = "<< dec << *mypointer << endl;
    
    
    return 0;
}
