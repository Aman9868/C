/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Employee {
    public:
    int emp_id;
    string first_name;
    string last_name;
    string sex;
    float salary;
Employee(int e,string f,string l,string s,float sal){ //Constructor should be same name as class name
    emp_id=e;
    first_name=f;
    last_name=l;
    sex=s;
    salary=sal;
        
    }
void display(){
    cout<<emp_id<<" "<<first_name<<" "<<last_name<<" "<<sex<<" "<<salary<<endl;
}    
};

main(){
    Employee e1= Employee(102,"Michael","Scot","M",75000); // creating object & passing values to Constructor
    Employee e2=Employee(100,"David","Wallac","M",25000);
    e1.display();
    e2.display();
}
