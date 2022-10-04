// Linux 生成可执行文件 g++ asd.cxx qwe.cxx
// c++没有.h,转换过的c头文件开头加c eg：cmath
#include <iostream> //cin和cout
#include <string>   //string 变量
#include <cstring> //c++string.h,不能用于string变量
const int a = 5;    //用const不要用define
int main(void)      //空括号等于void
{
    using namespace std; //这个函数在std命名空间里，cin，cout不用加std::
    //写在函数外面全部函数都能够使用
    using std::cin; //只用一个cin

    auto test1 = 1; // auto类型可以自己判断应该用什么数据类型
    char a;

    string str1 = "3333"; //和char一样初始化
    string str[5]; 
    string str2{"345"};   //用大括号初始化，等号可加可不加
    //大括号里没有内容初始化为0
    str1 = "World "; //可以跟变量一样处理
    str1 += str2; //可以str1 = str1 +str2


    cin >> str2;        // cin给string输入,到空格截止
    //cin 忽略空格和换行符
    cin.get(a);//可以读取空格和换行符
    cin.fail(); //读取到eof时return 1
    //是事后报告，要放在读取后
    int n;
    cin >> n;
    //cin中的值和目标类型不匹配
    //1.n保持不变
    //2.不匹配的值仍在输入队列
    //3.cin中错误标记被设置，需要用clear清空
    //4.cin返回false
    //要先重置cin之后才可以继续接收输入

    cout << str2;
    getline(cin, str1); //从cin输入，到换行符截止
    cout << str1;

    char str3[10];
    cin.getline(str3, 10); // get不能跨过换行符，getline可以,读到字符数组中
    // 用get需要加一个get(ch)读空行

    cout << str3 << "\n";
    cout << str1 << endl; // endl和\n都可以换行
    cout << R"(str1 "\n")" << endl; //输出括号里面字符串的原样
    // endl是操作符,还有十进制dec,八进制oct,十六进制hex

    int len1 = str1.size(); // string 的字符数
}