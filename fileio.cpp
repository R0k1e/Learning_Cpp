#include <iostream>
#include <fstream>
int main(void)
{
    using namespace std;
    ofstream outFile; //创建输出对象
    outFile.open("test.txt");
    //不存在时将创建test.txt
    //存在时会清空
    //outFile 和cout 使用方法相同
    //把输入的东西写入了test.txt
    outFile.close();//用完后关闭，不用填文件名


    ifstream inFile;
    inFile.open("test.txt");

    inFile.eof();
    inFile.fail(); // check whether the data is input successfully
    inFile.good(); // return ture if no error happen


}