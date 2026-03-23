#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        int age;
        double salary;
        string name;

        double calculate_salary() {
            return salary;
        }

        double commission() {
            return salary * 0.10;
        }
};

int main() {
    Employee emp1, emp2;
    double sal, com;

    emp1.age = 22;
    emp1.salary = 90000;
    emp1.name = "Serita";

    sal = emp1.calculate_salary();
    com = emp1.commission();

    cout << "The salary of employee 1 is: " << sal << endl;
    cout << "Commission of employee 1 is: " << com << endl;

    return 0;
}
