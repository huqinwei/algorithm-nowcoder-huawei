#include<iostream>
using namespace std;
int main(){
        int iBottlesHave;
        while(cin >> iBottlesHave != 0)
        {
                //输入i
                //初始化参数
                int iBottlesBorrowedTotal = 0;
                int iBottlesBorrowed = 0;
                while(iBottlesHave > 0)
                {
//                      cout << " circle:" <<endl;
                        if(iBottlesHave >= 3)//正常借，还有重新计算借后的数量
                        {
                                iBottlesBorrowed = iBottlesHave / 3;//本次能借的
                                iBottlesHave = iBottlesHave % 3;//更新：自己只剩零头
//                              cout << ">=3:iBottlesHave:"<<iBottlesHave<<endl;
                                iBottlesHave += iBottlesBorrowed;//加完了重新试，参数一定要够用
//                              cout << ">=3:iBottlesHave:"<<iBottlesHave<<endl;
                                iBottlesBorrowedTotal += iBottlesBorrowed;//统计进去
//                              cout << ">=3:iBottlesBorrowedTotal:"<<iBottlesBorrowedTotal<<endl;
                        }else if(iBottlesHave == 2)//唯一能赊账的情况吧//写成"="错
                        {
                                iBottlesHave = 0;//清空
                                iBottlesBorrowed = 1;//借成一个
                                iBottlesBorrowedTotal += iBottlesBorrowed;//统计
//                              cout << "2:iBottlesBorrowedTotal:"<<iBottlesBorrowedTotal<<endl;
                        }else//剩一个了，不能赊账
                        {
                                iBottlesHave = 0;//为了走循环，也清空
                                iBottlesBorrowed = 0;
                                iBottlesBorrowedTotal += iBottlesBorrowed;//统计
//                              cout << "1:iBottlesBorrowedTotal:"<<iBottlesBorrowedTotal<<endl;
                        }
                }
                cout << iBottlesBorrowedTotal << endl;
        }

}
