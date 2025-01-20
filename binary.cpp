#include <iostream>
#include <string>
using namespace std;

void binary(int num, string binaryNum){
int sum = 0;
    
   if (num != 0){
        sum = num % 2;
        if(sum == 0){
            binaryNum.append(1,'0');
        }
        else{
            binaryNum.append(1,'1');
        }
       binary(num / 2, binaryNum);
    }
    else{
        reverse(binaryNum.begin(), binaryNum.end());
        cout <<  "The binary is: " << binaryNum << endl;
    }
}

int main(){
	while(true){    
        cout << "enter a number: ";
        int n;
        cin >> n;
	if(n == 'x'){
		break;
	}else{
            binary(n, " ");
        }
        
    }
    
    return 0;
}
