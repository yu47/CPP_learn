#include "iostream"
#include "memory"
#include "string"
using namespace std;

class Report
{
private:
    string str;

public:
    Report(const string s) : str(s)
    {
        cout << "构造函数" <<endl;
    }

    ~Report()
    {
        cout << "析构函数" <<endl;
    }

    void comment() const
    {
        cout << str << endl;
    }
};
int main(int argc, char const *argv[])
{
{
    auto_ptr<Report> ps (new Report("using auto_prt"));
    // Report ps("using auto_prt");
    // Report* ps = new Report("111");
    ps->comment();
    // delete ps;
}
{
    shared_ptr<Report> pd (new Report("using auto_prt"));
    pd->comment();
}
{
    unique_ptr<Report> pa (new Report("using auto_prt"));
    pa->comment();
}

    return 0;
}
