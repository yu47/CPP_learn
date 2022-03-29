#include "iostream"
using namespace std;
#include "vector"
#include "string"
#include "algorithm"
class Person
{
public:
    Person(){};
    Person(string name,int age)
    {
        this->name =name;
        this->age = age;
    }
public:
    string name;
    int age;

};
template<typename T>
void MyPrint(T val)
{
    cout << val <<endl;
}

void test()
{
    vector <Person> v;
    Person p1("aa",11);
    Person p2("bb",22);
    Person p3("cc",33);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    for(vector<Person>::iterator it = v.begin(); it != v.end() ;it++)
    {
        cout << it ->name <<"      "<<it->age <<endl;
    }

    vector <string> s;
    s.push_back("aa");
    s.push_back("vv");

    for_each(s.begin(),s.end(),MyPrint<string>);
    
}
int main(int argc, char const *argv[])
{
    test();
    return 0;
}
