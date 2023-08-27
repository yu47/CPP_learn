#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <io.h>
using std::vector;
using std::string;
void ls_files(string path, vector<string>& paths); // 该函数获取path所指向目录下的所有文件和文件夹的路径, 并存放在paths中
bool is_dir(string path); // 若path表示的路径指向目录, 则返回true, 否则返回false


void GetAllFiles(string target_dir,vector<string> result){
    //储存该路劲下的所有文件目录
    vector<string> paths;
    ls_files(target_dir, paths);

    //遍历所有文件目录，如果是文件夹，递归；否则加入结果；
    for(int i=0 ; i < paths.size(); i++){
        if(is_dir(paths[i])){
            GetAllFiles(paths[i],result);
        }
        result.push_back(paths[i]);
    }
}
void main() {
    string target_dir = "/test";
    vector<string> result;
    GetAllFiles(target_dir,result);
    // todo: 
    
}
