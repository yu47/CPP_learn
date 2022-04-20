#include <iostream>
#include<bits/stdc++.h>
using namespace std; 

int LCS(string a,string b){
    int n,m;
    n=a.size();
    m=b.size();
    vector<vector<int> > memo= vector<vector<int> >(n+1,vector<int>(m+1,0));
    for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++){
            if(a[i]==b[j]){
                memo[i][j]=memo[i-1][j-1]+1;
            }
            else{
                memo[i][j]=memo[i-1][j]>memo[i][j-1]?memo[i-1][j]:memo[i][j-1];
            }
        } 
    return memo[n][m];
}

int main(int argc, char *argv[]) {
    string a="BCDB";
    string b="ABCBDAB";
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout<<LCS(a,b);
    return 0;
}