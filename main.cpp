#include <iostream>
#include <cmath>
#define MAX 999
using namespace std;
int main() {
    int count=0;
    cout<<"Here are all the Narcissistic Numbers from 100 to 999:"<<endl;
    for (int i = 100; i <= MAX; i++) {
        int unitsDigit = i%10;//��λ��
        int tensDigit = i/10%10;//ʮλ��
        int hundredsDigit = i/100%10;//��λ��
        //�ж��Ƿ���ˮ�ɻ���
        if (pow(unitsDigit,3)+pow(tensDigit,3)+pow(hundredsDigit,3)==i){
            cout<<i<<"\t"<<"��ˮ�ɻ���"<<endl;
            count++;
        } else{
            cout<<i<<"\t"<<"=_="<<endl;
        }
    }
    cout<<"There are "<<count<<" Narcissistic Numbers between 100 and 999."<<endl;
    return 0;
}
