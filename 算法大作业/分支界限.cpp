#include<iostream>
#include<time.h>
#include<vector>
#include<algorithm>
#include <windows.h>
#include <stack>
using namespace std;
const int N=100;
const int inf=0x3f3f3f3f;
typedef long long ll;
class HeadNode{
public:
    double upper,prize,weight;//upper:节点上界，节点价值,节点重量
    int leve,x[N];//
};

stack<HeadNode>high;

double cw,cp,c;
int w[] = {62 ,24 ,90 ,97 ,36 ,38 ,90 ,37 ,91 ,26 ,31 ,82 ,89 ,26 ,54 ,52 ,25 ,71 ,59 ,63};
int p[] = {76, 57, 92, 46, 50, 32, 30, 75, 46, 57, 25, 30, 49, 57, 28, 98, 10, 86, 66, 32};
    
int n;
int cmp(int x,int y)
{
    return p[x]/w[x]>p[y]/w[y];
}
void add(double up,double cp,double cw,bool ch,int leve)//存放节点
{
    HeadNode be;//生成一个空节点
    be.upper=up;
    be.prize=cp;
    be.weight=cw;
    be.leve=leve;
    if(leve<=n)
    {
        high.push(be);
    }
}
double MaxBound(int j)//更新上界
{
    double left=c-cw,b=cp;//left:剩余的容量,b:此时的价值
    while(j<=n&&w[j]<=left)//通过单位体积价值算出理想情况下的最优解
    {
        left-=w[j];
        b+=p[j];
        j++;
    }
    if(j<=n)
        b+=p[j]/w[j]*left;

    return b;
}
int bfs()
{
   int i=1,cw=0,cp=0;//初始在第一层，当前重量为0，当前价值为0
   double bestp=0,up=MaxBound(1);//bestp:最优解，up=MaxBound(1):在根节点时候的上界
   while(1)//(FIFO队列式分支限界法）此处可改为 priority_queue:优先队列，每次上界最大的在上面
   {

       double wt=cw+w[i];//搜索左子树的可行解
       if(wt<=c)//更新
       {
           bestp=max(bestp,cp+p[i]);//更新可行解
           add(up,cp+p[i],cw+w[i],true,i+1);//将此节点放入栈中
       }
       up=MaxBound(i+1);//右节点不放
       if(up>=bestp)//右节点可能含有最优解
       {
           add(up,cp,cw,false,i+1);
       }
       if(high.empty())return bestp;//当栈为空的时候，此时的bestp就是最优解
       HeadNode node=high.top();//把栈顶的点拿出来
       high.pop();
       cw=node.weight;cp=node.prize;up=node.upper;
       i=node.leve;
   }

}
int main()
{

    int n=255;
    int c=20;
    // vector<int>weights={62 ,24 ,90 ,97 ,36 ,38 ,90 ,37 ,91 ,26 ,31 ,82 ,89 ,26 ,54 ,52 ,25 ,71 ,59 ,63};
    // vector<int>values= {76, 57, 92, 46, 50, 32, 30, 75, 46, 57, 25, 30, 49, 57, 28, 98, 10, 86, 66, 32};
    


    sort(p+1,p+1+n,cmp);
    cout<<bfs()<<endl;

}