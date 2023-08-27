
#include <iostream>
#include <string>
#include <vector>

#define HEADERINDEX_1 0xFF; //第一个帧头
#define HEADERINDEX_2 0xAA; //第二个帧头
void ReceiveData(String Data,vector<string>& datas ){
while (Data.size() >= 6) 
{
    //2.1 查找帧头
    int headerIndex = Data.find(HEADERINDEX_1); // 帧头第一个字符索引
    if(headerIndex != Data.npos)
    {
        if ( Data[headerIndex + 1] == HEADERINDEX_2) // 帧头第二个字符
        {
            int len = Data[headerIndex + 2]; // 获取数据长度
            if (Data.size() < len + 1)// 数据长度不足，则等待下一次判断
            {
                break;
            }
            else
            {
                bool dataNeedCheck = Data[headerIndex+len + 1];
                if(dataNeedCheck)
                {
                    // 数据校验成功，提取数据
                    string dataFrame = Data.substring(headerIndex,len + 1);
                    datas.pushback(dataFrame);
                    continue;
                }
                else
                {
                    // 数据校验失败，继续下一次循环
                    continue;
                }
            }
        }
        else
        {
            // 帧头判断失败，则继续寻找下一个
            Data = Data.substring(2); // Data指向后面的数据
            continue;
        }
    }
}
}