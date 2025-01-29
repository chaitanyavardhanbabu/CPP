/*//call by refernce//
#include<iostream>
using namespace std;

int main()
{
    int x, y, swap;

    cout << "Enter the value x: ";
    cin >> x; // Read x from the user

    cout << "Enter the value y: ";
    cin >> y; // Read y from the user

    swap = x;
    x = y;
    y = swap;

    cout << "Changed value of x: " << x << endl;
    cout << "Changed value of y: " << y << endl;

    return 0;
}
#include <iostream>

template <typename T>
class Demo {
public:
    Demo(T arr[5]) {
        for (int i = 0; i < 5; i++) {
            elements[i] = arr[i];
        }
    }

    T findMaxValue() {
        T maxVal = elements[0];
        for (int i = 1; i < 5; i++) {
            if (elements[i] > maxVal) {
                maxVal = elements[i];
            }
        }
        return maxVal;
    }

    void displayElements() {
        std::cout << "Elements in the array: ";
        for (int i = 0; i < 5; i++) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    T elements[5];
};

int main() {
    float arr[5] = {3.5, 1.2, 6.7, 2.1, 5.9};
    Demo<float> demo(arr);

    demo.displayElements();

    float maxVal = demo.findMaxValue();
    std::cout << "Maximum value among the elements: " << maxVal << std::endl;

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the values of a and b: ";
    cin>>a;
    cin>>b;
    int x=a-b;
    try{
        if(x!=0)
        {
            cout<<"Result(a/x)"<<a/x;

        }
        else{
            throw(x);
        }
    }
    catch(int x)
    {
        cout<<"excreption caught:x="<<x;

    }
    cout<<"end";
    return 0;
}

#include<iostream>
#include<vector>

int main()
{
    std::vector<int> v(3);
    v[0] = 23;
    v[1] = 12;
    v[2] = 9;
    v.push_back(17);

    for(int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={12,3,4,6};
    vector<int> v(arr,arr+4);
    while(!v.empty())
    {
        cout<<v.back()<<" ";
        v.pop_back();
    }
}

#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
    public:
    virtual ~ Base()
    {
        cout<<"\n Baase destructor called";

    }
};
class Derived:public Base
{
    public:
    ~Derived()
    {
        cout<<"\nDervied Destructor Called";
    }
};
int mqin()
{
    Base*bptr=new Derived;
    delete bptr;
};*/

#include<iostream>
#include<list>
#include<conio.h>
using namespace std;
int main(void)
{
    list  <int> ls1;
    int arr[]={1,2,3,12};
    list
}