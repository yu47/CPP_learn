#include "iostream"
using namespace std;
template<class T>
class MyArr
{
public:
    MyArr();
    MyArr(int Cap)
    {
        cout << "构造函数"<<endl;
        this->Cap = Cap;
        this->size = 0;
        paddress = new T[this->Cap];
    }

    MyArr(const MyArr &arr)
    {
        cout << "拷贝函数"<<endl;
        this->Cap = arr.Cap;
        this->size = arr.size;
        this->paddress = new T[arr.Cap];
        for (int i = 0 ;i < this->size ;i++)
        {
            this->paddress[i] = arr.paddress[i];
        }
    }

    MyArr& operator=(const MyArr& arr)
    {
        cout << "=函数"<<endl;
        if (this->paddress != NULL)
        {
            delete[] this->paddress;
            this->Cap = 0;
            this->size = 0;
        }
        this->Cap = arr.Cap;
        this->size = arr.size;
        this->paddress = new T[arr.Cap];
        for (int i = 0 ;i < this->size ;i++)
        {
            this->paddress[i] = arr.paddress[i];
        }
        return *this;
    }
    ~MyArr()
    {
        cout << "析构函数"<<endl;
    }

    T& operator [](int index)
    {
        return this->paddress[index];
    }

    void push(const T & val)
    {
        if(this->Cap == this->size)
        {
            return;
        }
        this->paddress[this->size] = val;
        this->size ++;
    }
    void back(const T & val)
    {
        if(this->size == 0)
        {
            return;
        }
        this->paddress[this->size] = NULL;
        this->size --;
    }

    int getSize()
    {
        return this->size;
    }

    int getCap()
    {
        return this->Cap;
    }
private:
    int Cap;
    int size;
    T* paddress;
};