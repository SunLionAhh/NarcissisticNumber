#include <iostream>
#define MAX 999
using namespace std;
int main() {
    int count=0;
    cout<<"Here are all the Narcissistic Numbers from 100 to 999:"<<endl;
    for (int i = 100; i <= MAX; i++) {
        int unitsDigit = i%10;//个位数
        int tensDigit = i/10%10;//十位数
        int hundredsDigit = i/100%10;//百位数
        //判断是否是水仙花数
        if (unitsDigit*unitsDigit*unitsDigit+tensDigit*tensDigit*tensDigit+hundredsDigit*hundredsDigit*hundredsDigit==i){
            cout<<i<<"\t"<<"是水仙花数"<<endl;
            count++;
        } else{
            cout<<i<<"\t"<<"=_="<<endl;
        }
    }
    cout<<"There are "<<count<<" Narcissistic Numbers between 100 and 999."<<endl;
    return 0;
}
