#include <string>
#include <algorithm>
#include<iostream> 
using namespace std;


int record[1000][1000];

void PrintLCS(int m, int n){
    if(n == 0 || m == 0){
        return;
    }
    if(record[n][m] == 1){
        PrintLCS(m-1, n-1);
        cout << s1[m-1];
    }else if(record[n][m] == 2){
        PrintLCS(m-1, n);
    }else{
        PrintLCS(m, n-1);
    }
}

int main() {
    string s1 = "bcdb";
    string s2 = "abcbdab";
    cout << "S1:" << s1 << endl;
    cout << "S2:" << s2 << endl;
    int m = s1.size();
    int n = s2.size();
    
    int dp[n+1][m+1];

    for(int i = 0; i < n+1; i++){dp[i][0] = 0;}
    for(int i = 0; i < m+1; i++){dp[0][i] = 0;}

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            if(s1[j-1] == s2[i-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
                // 若dp[i][j]的值来源于dp[i-1][j-1]+1，则给同位置的record数组赋值为1
                record[i][j] = 1;
            }else if(dp[i][j-1] > dp[i-1][j]){
                dp[i][j] = dp[i][j-1];
                //若来源于dp[i][j-1]，则给同位置的record数组赋值为2
                record[i][j] = 2;
            }else{
                dp[i][j] = dp[i-1][j];
                //若来源于dp[i-1][j]，则给同位置的record数组赋值为3
                record[i][j] = 3;
            }
        }
    }

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << dp[n][m] << endl;

    PrintLCS(m, n);

    return 0;
}
