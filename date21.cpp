#include <iostream>
using namespace std;
// class animal
// {
// public:
//     virtual void speak()
//     {
//     }
// };

// class dog : public animal
// {
// public:
//     void speak()
//     {
//         cout << "Barks" << endl;
//     }
// };

// class cat : public animal
// {
// public:
//     void speak()
//     {
//         cout << "cat meows" << endl;
//     }
// };
// class lion : public animal
// {
// public:
//     void speak()
//     {
//         cout << "lion roar" << endl;
//     }
// };
// int main()
// {
//     animal *ani[5];
//     int i;
//     for (i = 0; i < 2; i++)
//     {
//         ani[i] = new dog();
//     }
//     for (i = 2; i < 4; i++)
//     {
//         ani[i] = new cat();
//     }
//     ani[4] = new lion();
//     for (i = 0; i < 5; i++)
//     {
//         ani[i]->speak();
//     }

//     for (i = 0; i < 5; i++)
//     {
//         delete ani[i];
//     }

//     return 0;
// }





// class payroll
// {
// public:
//     virtual void calculate_salary() = 0;
// };

// class manager : public payroll
// {
//     double salary;
//     double bonus;

// public:
// manager(double s,double b){
//     salary=s;
//     bonus=b;
// }
// void calculate_salary(){
//     salary=salary + bonus;
//     cout<<"Total salary is:"<<salary<<endl;
// }
// };

// class developer:public payroll{
//     private:
//     double salary;
//     int overtime;
//     public:
//     developer(double s, int time){
//         salary=s;
//         overtime=time;
//     }
//     void calculate_salary(){
//         if(overtime>30){
//             salary=salary + 1000;
//             cout<<"salary is:"<<salary<<endl;
//         }

//         else if(overtime>=60){
//             salary=salary + 2000;
//             cout<<"salary is:"<<salary<<endl;
//         }

//         else
//         {
//         cout<<"no increament then salary is same:"<<salary<<endl;
//         }
//     }
//     };

//     class runner:public payroll{
//         private:
//         double salary;
//         int leave;
//         public:
//         runner(double s,int l){
//             salary=s;
//             leave=l;
//         }
//         void calculate_salary(){
//             if(leave>3){
//                 salary=salary-1000;
//                 cout<<"salary is:"<<salary<<endl;
//             }
//             else if(leave>2){
//                 salary=salary-2000;
//                 cout<<"salary is:"<<salary<<endl;
//             }
//             else{
//                 cout<<"No increament in no of leaves the salaary remain same"<<endl;
//             }
//         }
//     };

//     int main(){
//         payroll * ptr[4];

      ////////////simple address pass////////////////////////
//         manager m1(4000,2000);
//         developer d1(3000,40);
//         runner r1(5000,3);
//         ptr[0]=&m1;
//         ptr[1]=&d1;
//         ptr[2]=&r1;

    ////////dynamically memory allaocation/////////////
//          ptr[0]=new manager(4000,1000);
//         ptr[1]=new developer(3000,40);
//         ptr[2]=new runner(5000,3);
//         for(int i=0;i<4;i++){
//             ptr[i]->calculate_salary();
//         }

//     for (int i = 0; i < 4; i++)
// {
//      delete ptr[i];
//  }

//  return 0;

// }

class ride
{
protected:
    float distance;

public:
    ride(float d)
    {
        distance = d;
    }
    virtual float calculatefare()
    {
        return distance * 10;
    }

    void displayfare()
    {
        cout << "Ride type is standard" << endl;
        cout << "Distance in kilometer " << distance << endl;
        cout << "Fare :" << calculatefare() << endl;
    }
};

class premium : public ride
{

public:
    premium(float d1) : ride(0)
    {
        distance = d1;
    }

    float calculatefare()
    {
        return (distance * 20) + 50;
    }
    void displayfare()
    {
        cout << "Ride type is premium" << endl;
        cout << "Distance in kilometer " << distance << endl;
        cout << "Fare :" << calculatefare() << endl;
    }
};

class bikeride : public ride
{
public:
    bikeride(float d) : ride(0)
    {
        distance = d;
    }
    float calculatefare()
    {
        return distance * 5;
    }

    void displayfare()
    {
        cout << "Ride type is bikeride" << endl;
        cout << "Distance in kilometer " << distance << endl;
        cout << "Fare :" << calculatefare() << endl;
    }
};

int main()
{
    ride *ptr[4];


    ptr[0] = new ride (40);
    ptr[1] = new premium(20);
    ptr[2] = new bikeride(10);

    for (int i = 0; i < 2; i++)
    {
        ptr[i]->displayfare();
    }

    for (int i = 0; i < 2; i++)
    {
        delete ptr[i];
    }

    return 0;
}