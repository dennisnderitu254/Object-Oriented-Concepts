
#include <iostream>
using namespace std;

#include "person.h"

int main()
{

Person * person; // declare pointer to class P

person = new Person(); // allocate 

person->set_firstname("Njoroge");
person->set_lastname("Maina");
person->set_age(21);
person->set_gender("Male");


//delete person; // deallocate memory

cout<<person->get_firstname()<<endl;
cout<<person->get_lastname()<<endl;
cout<<person->get_age()<<endl;
cout<<person->get_gender()<<endl;

// person->display();

delete person; // deallocate memory



}