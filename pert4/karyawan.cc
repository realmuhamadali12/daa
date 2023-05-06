#include <iostream>
using namespace std;

struct Employee {
   string name;
   int hours;
   int salary;
};

int main() {
   Employee emp;
   emp.salary = 0;

   cout << "Masukkan nama karyawan: ";
   getline(cin, emp.name);

   cout << "Masukkan jumlah jam kerja: ";
   cin >> emp.hours;

   int regularHours = emp.hours;
   int overtimeHours = 0;

   if (emp.hours > 7) {
      regularHours = 7;
      overtimeHours = emp.hours - 7;
   }

   emp.salary = (regularHours * 50000) + (overtimeHours * 75000);

   cout << "Gaji " << emp.name << " adalah " << emp.salary << endl;

   return 0;
}
