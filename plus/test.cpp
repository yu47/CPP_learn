#include "test.h"
#include <string>

void printarr(MyArr<int> &arr)
{
    for (int i= 0; i < arr.getSize();i++)
    {
        cout << arr[i]<<endl;
    }
}
void test01()
{
    MyArr<int> arr1(10);
    MyArr<int> arr2(arr1);
    MyArr<int> arr3(arr2);
    arr3 = arr1;
    for (int i= 0 ; i<5;i++)
    {
        arr3.push(i);
    }
    printarr(arr3);
}

class Person
{
public:
    Person() {};
    Person(string name,int age)
    {
        this->name = name;
        this->age = age;
    }
public:
    string name;
    int age;
};

void printPersonArray(MyArr<Person>& personArr)
{
	for (int i = 0; i < personArr.getSize(); i++) {
		cout << "姓名："<< personArr[i].name << " 年龄： " << personArr[i].age << endl;
	}

}

void test02()
{
	//创建数组
	MyArr<Person> pArray(10);
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	//插入数据
	pArray.push(p1);
	pArray.push(p2);
	pArray.push(p3);
	pArray.push(p4);
	pArray.push(p5);

	printPersonArray(pArray);

}

int main()
{
    test01();
    test02();
    return 0;
}
