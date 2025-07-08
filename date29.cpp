// #include <iostream>
// using namespace std;

// template <class t>
// class test
// {
//     t val1;
//     t val2;

// public:
//     test(t a, t b)
//     {
//         val1 = a;
//         val2 = b;
//     }

//     t maxval()
//     {
//         return (val1 > val2) ? val1 : val2;
//     }
// };

// template <class t1, class t2>
// class mypair
// {
//     t1 first;
//     t2 second;

// public:
//     mypair(t1 f, t2 s)
//     {
//         first = f;
//         second = s;
//     }

//     t1 getfirst()
//     {
//         return first;
//     }

//     t2 getsecond()
//     {
//         return second;
//     }
// };
// int main()
// {
//     test<int> obj(3, 5);
//     cout << "Max value: " << obj.maxval() << endl;

//         mypair<int, double>
//             myPair(10, 3.14);
//     cout << "First value: " << myPair.getfirst() << endl;
//     cout << "Second value: " << myPair.getsecond() << endl;

//     return 0;
// }


#include<iostream>
using namespace std;
template <class T1, class T2>
class pairs
{
private:
    T1 firstval;
    T2 secondval;

public:
    pairs(T1 a1, T2 b1)
    {
        firstval = a1;
        secondval = b1;
    }
    template <typename t>
    void swap(t a,t b)
    {
        t temp = a;
        a = b;
        b = temp;
    }
};

int main()
{
    int a;
    int b;
    cout << "Enter value 1: ";
    cin >> a;
    cout << "Enter value 2: ";
    cin >> b;
    pairs<int,int>c(a , b);

    cout << "Before swapping: " << a << " " << b << endl;
    swap(a,b);
    cout<<"After swapping: " << a << " " << b << endl;

}