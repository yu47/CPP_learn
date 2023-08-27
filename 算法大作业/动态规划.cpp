
#include<iostream>
#include<time.h>
#include<vector>
#include<algorithm>
#include <windows.h>
using namespace std;


//表示物品的结构体
struct obj
{
    int w;  //重量
    int v;  //价值
    double p;  //价值重量比
};

void myQuickSort(int left,int right,obj items[])
{
    if(left>=right)  return;
    int i=left,j=right;
    double base=items[left].p;  //取最左边的数为基准数
    while(i<j)
    {
        //一直从右边向左找到一个大于base的数
        while(items[j].p<=base&&i<j)
            j--;
        //一直从左往右找到一个小于base的数
        while(items[i].p>=base&&i<j)
            i++;
        //交换
        if(i<j)
        {
            obj temp=items[i];
            items[i]=items[j];
            items[j]=temp;
        }
    }
    //基准数归位
    obj temp=items[left];
    items[left]=items[i];
    items[i]=temp;
    //递归左半区间与右半区间
    myQuickSort(left,i-1,items);
    myQuickSort(i+1,right,items);
}

//1.贪心
int greedySolution(const vector<int>weights,const vector<int>values,const int M,const int n)
{

    obj items[n];
    for(int i=0;i<n;i++)
    {
        struct obj newo;
        newo.w=weights[i];
        newo.v=values[i];
        newo.p=double(values[i])/weights[i];
        items[i]=newo;
    }
    //将物品按单位价值从大到小排序
    myQuickSort(0,n-1,items);
    int m=M;    //背包当前容量
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(m>=items[i].w)
        {
            ans+=items[i].v;
            m-=items[i].w;
        }

    }
    return ans;
}


//2.动态规划
int dpSolution(const vector<int>weights,const vector<int>values,const int M,const int n)
    {

        vector<vector<int> >dp(n+1,vector<int>(M+1));   //二维dp数组

        //初始化边界
        /*因为vector初始值为0，所以这一步可以省略*/

        //开始计算dp表
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=M;j++)
            {
                //剩余容量小于当前物品重量，weights[i-1]表示第i个物品重量
                if(j<weights[i-1])    dp[i][j]=dp[i-1][j];
                    //背包容量大于当前物品重量，考虑拿还是不拿
                else    dp[i][j]=max(dp[i-1][j-weights[i-1]]+values[i-1],dp[i-1][j]);

            }

        }
        //返回结果
        return dp[n][M];
    }

//3.记忆递归算法
int knapSackrecur(int W,int N,vector<int> &v,vector<int> &w,vector<vector<int>>& dp){
    // 基本情况剩下 0 件物品或背包已满
    if(N == 0 || W == 0) 
        return 0;

    // 检查结果是否存在于DP

    if(dp[N][W]!=-1) 
        return dp[N][W];
    
    // 如果当前元素的权重小于或等于容量，我们可以包含或排除该项目并将其存储到 DP
    
    if(w[N] <= W){
         return dp[N][W] = max(v[N]+knapSackrecur(W-w[N],N-1,v,w,dp),knapSackrecur(W,N-1,v,w,dp));
    }
    // 如果当前元素的权重大于我们的容量不包括它，因此只返回忽略的部分并将其存储到 DP
    return dp[N][W] = knapSackrecur(W,N-1,v,w,dp);
}
int knapsack01(vector<int> &w,vector<int> &v,int W,int N) {
    // 定义 Dp 并用 -1 初始化
    vector<vector<int>> dp(N+1,vector<int> (W+1,-1)); 
    return knapSackrecur(W,N-1,v,w,dp);
}

int main()
{

    int M=255;
    int n=20;
    vector<int>weights={62 ,24 ,90 ,97 ,36 ,38 ,90 ,37 ,91 ,26 ,31 ,82 ,89 ,26 ,54 ,52 ,25 ,71 ,59 ,63};
    vector<int>values= {76, 57, 92, 46, 50, 32, 30, 75, 46, 57, 25, 30, 49, 57, 28, 98, 10, 86, 66, 32};
    
    int DP_ans,greed,memoization;
    //动态规划法,O(nM)
    DP_ans = dpSolution(weights,values,M,n);
    greed = greedySolution(weights,values,M,n);
    memoization = knapsack01(weights,values,M,n);

    cout<<"记忆递归算法:"<<memoization<<endl;
    cout<<"动态规划:"<< DP_ans <<endl;
    cout<<"贪心算法:"<< greed <<endl;


    return 0;
}
