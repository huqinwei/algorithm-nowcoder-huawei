#include<string.h>
using namespace std;
int main()
{
        string input;
        int iResult = 0;
        int iTemp = 0;
        while(cin >> input)
        {
                //假设输入没错，跳过0x
                for(int i = 0;i < input.size() - 2;i++)//for循环可优化执行效率
                //for(int i = 2;i < input.size() ;i++)//优化版的input下标就可以改为input[i]，少了一次偏移计算。
                {
                        if(input[i + 2] >= 'a' && input[i + 2] <= 'f')//处理
                        {
                                iTemp = input[i + 2] - 'a' + 10;
                        }else if(input[i + 2] >= 'A' && input[i + 2] <= 'F')//处理
                        {
                                iTemp = input[i + 2] - 'A' + 10;
                        }else if(input[i + 2] >= '0' && input[i + 2] <= '9')
                        {
                                iTemp = input[i + 2] - '0';
                        }
                        iResult = iResult * 16 + iTemp;//用新参数iTemp取代input[i + 2]容易忘了替换此处
                }
                cout << iResult << endl;
                iTemp = 0;
                iResult = 0;
        }
}
