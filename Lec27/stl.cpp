#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // create vector
    vector<int> v;
    vector<int> v1(5, 1);
    // size and capacity
    cout << "Size of v :" << v.size() << endl;
    cout << "Capacity of v :" << v.capacity() << endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout << "Size of v :" << v.capacity() << endl;
    cout << "Capacity of v :" << v.capacity() << endl;
    // update value
    v[1] = 5;
    cout << "Size of v1 :" << v1.size() << endl;
    cout << "Capacity of v1 :" << v1.capacity() << endl;
    v1.push_back(8);
    cout << "Size of v1 :" << v1.size() << endl;
    cout << "Capacity of v1 :" << v1.capacity() << endl;

    // Delete value from vector
    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);
    vnew.pop_back();
    cout <<"Size of v new:" <<vnew.size()<<endl;
    cout << "Capcity of v new:" <<vnew.capacity ()<< endl;

}