#include "iostream"
using namespace std;
#include "sstream"
#include "string"
int main(int argc, char const *argv[])
{
    
    ostringstream outstr;
    string hdisk;
    cout << "硬盘名称：";
    getline(cin,hdisk);
    int cap;
    cout << "多少容量";
    cin >> cap;
    outstr << "硬盘" << hdisk << "有"
    << cap <<"g"  ;
    string result = outstr.str();
    cout << result;

    return 0;
}
