
//                                    /*WRITE*/
// #include <iostream>
// #include<fstream>
// using namespace std;
// class student
// {
// public:
//     string name;
//     int roll_no;
//     int age;
//     void input()
//     {
//         cout << "Enter the information" << endl;
//         cout << "Enter the Name :" << endl;
//         getline(cin, name);
//         cout << "Enter the Roll no :" << endl;
//         cin >> roll_no;
//         cout << "Enter the Age :" << endl;
//         cin >> age;
//         cin.ignore();
//     }
//     void writetofile(ofstream &fout)
//     {
//         fout << name << endl;
//         fout << roll_no << endl;
//         fout << age << endl;
//     }
//     void display()
//     {
//         cout << "Name is :" << name << endl;
//         cout << "Roll No is :" << roll_no << endl;
//         cout << "Age is :" << age << endl;
//     }
// };
// int main(){
//     student st;
//     ofstream fout("student_info.txt",ios::app);
//     if(!fout.is_open()){
//         cout<<"Error file not found"<<endl;
//         return 0;
//     }
//     for(int i=0;i<3;i++){
//         st.input();
//         st.writetofile(fout);
//     }
//     fout.close();
//     return 0;
// }


                                      /*READ*/

#include <iostream>
#include <fstream>
using namespace std;

class student
{
public:
    string name;
    int roll_no;
    int age;

    void input()
    {
        cout << "Enter the information" << endl;
        cout << "Enter the Name: ";
        getline(cin, name);
        cout << "Enter the Roll no: ";
        cin >> roll_no;
        cout << "Enter the Age: ";
        cin >> age;
        cin.ignore();
    }
    bool readfromfile(ifstream &fin)
    {
        if (!getline(fin, name))
            return false;
        if (!(fin >> roll_no >> age))
            return false;
        fin.ignore();
        return true;
    }
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Roll No is: " << roll_no << endl;
        cout << "Age is: " << age << endl;
    }
};

int main()
{
    student st;
    ifstream fin("student_info.txt");

    if (!fin.is_open())
    {
        cout << "Error: File not found" << endl;
        return 1;
    }

    while (st.readfromfile(fin))
    {
        st.display();
    }

    fin.close();
    return 0;
}




