#include<iostream>
#include<malloc.h>
using namespace std;
int main(){
        int iNumber;
        int iInput;
        int iLength = 0;
        int iDuplicated = 0;//设置错了初始值，应该是0
        int *array = NULL;//声明数组

        while(cin >> iNumber && iNumber > 0)//防止输入0导致malloc错
        {
//              cout <<"iNumber is :"<<iNumber<<endl;
                array = (int *)malloc(sizeof(int) * iNumber);//声明数
组
                if(array == NULL)
                        return 0;

            for(int j = 0;j < iNumber;j++)
            {
                    cin >> iInput;//如果while(cin >>iINput),记得注释>掉
                    for(int i = 0;i < iLength;i++)
                    {
                            if(array[i] == iInput)
                            {
                                    iDuplicated = 1;//做标记
                                    break;//跳出
                            }
                    }
                    //不重复才进组
                    if(iDuplicated == 0)
                    {
                            array[iLength] = iInput;//进组
    //                      cout << "array["<<iLength<<"] "<<array[iLength] << endl;
                            iLength++;//标记长度
                    }

                    iDuplicated = 0;//reset
    //              j++;
            }
            cin.clear();
            //sort
            for(int i = iLength - 1;i > 0;i--)
            {
                    for(int j = 0;j < i;j++)
                    {
                            if(array[j] > array[j + 1])
                            {
                                    int temp = array[j];
                                    array[j] = array[j + 1];
                                    array[j + 1] = temp;
                            }
                    }
            }
            //output
            for(int i = 0;i < iLength;i++)
            {
                //cout << "array[" <<i<<"] "<< array[i] << endl;
                cout << array[i] << endl;
            }
//      cout << "now free:"<<array<<endl;
        free(array);
        array = NULL;
                iLength = 0;//reset
        }
    return 0;
}
