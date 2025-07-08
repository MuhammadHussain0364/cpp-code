// #include <iostream>
// #include <string>
// using namespace std;
// class Customer
// {
//     string name;
//     float balance;
//     int Acc_No;
// public:
//     Customer(string n, float bal, int Acc)
//     {
//         name = n;
//         balance = bal;
//         Acc_No = Acc;
//     }
//     void deposit(int amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//             cout << "Amount " << amount << " is credited successfully" << endl;
//         }
//         else
//         {
//             throw "Deposit amount should be greater than 0.";
//         }
//     }
//     void withdraw(int amount)
//     {
//         if (amount <= 0)
//         {
//             throw "Withdrawal amount should be greater than 0.";
//         }
//         else if (amount > balance)
//         {
//             throw "Insufficient balance.";
//         }
//         else
//         {
//             balance -= amount;
//             cout << "Amount " << amount << " is debited successfully" << endl;
//         }
//     }
// };
// int main()
// {
//     try
//     {
//         Customer C1("Ali", 200, 1123);
//         C1.deposit(1000);
//         C1.withdraw(4000);
//     }
//     catch (const char *e)
//     {
//         cout << "Exception occurred: " << e << endl;
//     }
//     return 0;
// }

// class student
// {
// public:
//     int setmarks(int m)
//     {
//         if (m > 0 && m == 100)
//         {
//             return m;
//         }
//         else
//             throw 0;
//     }
// };
// int main()
// {
//     student stud;
//     try
//     {
//         cout << "marks :" << stud.setmarks(100) << endl;
//         cout << "marks :" << stud.setmarks(110) << endl;
//     }
//     catch (const int n)
//     {
//         cout << " Exception occured = " << n << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// class Student {
// protected:
//     string name;
//     int age;
//     int rollno;
// public:
//     Student(string n, int a, int r) {
//         if (a <= 0)
//             throw runtime_error("Age must be positive.");
//         name = n;
//         age = a;
//         rollno = r;
//     }
// };
// class Marks : public Student {
// private:
//     int maths;
//     int oop;
// public:
//     Marks(string n, int a, int r, int m, int o) : Student(n, a, r) {
//         if (m < 0 || o < 0)
//             throw invalid_argument("Marks cannot be negative.");
//         maths = m;
//         oop = o;
//     }
//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll No: " << rollno << endl;
//         cout << "Maths Marks: " << maths << endl;
//         cout << "OOP Marks: " << oop << endl;
//     }
// };
// int main() {
//     try {
//         Marks student1("Hussain", 19, 364, 85, 90);
//         student1.display();
//     } catch (const invalid_argument & e) {
//         cout << "Exception occurred: " << e.what() << endl;
//     }
//     return 0;
// }

// #invlude<iostream>
// using namespace std;
// int main(){
//     try{
//         int *ptr = new int[10000];
//         cout<<"Memory Allocation";
//         delete[]ptr;
//     }
//     catch(const exception &e){
//         cout<<"Exception occur "<<e.what();
//     }
// }

#include<iostream>
using namespace std;

 void check(){
     float score[2];

     for(int i=0;i<2;i++){                //this and next same  //ali haider code


     cout<<"enter score of "<<i+1<<endl;
     cin>>score[i];
     }
        int n;
        cout<<"enter no of student you want to check:";
        cin>>n;
        if(n<2 && n>0){
        cout<<"student score is :"<<score[n];
        }
        else if(n>5){
            throw string("invalid index");
        }
    }

int main(){
   try{
       check();
   }
catch(const string &e){
    cout<<"exception error :"<<" "<<e;
}
}


