#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int unit = sizeof(int) * 25;
	unsigned long long size = 1ULL * 1024 * 1024 * unit;
	
	while(1){
		
		void* ptr = malloc(size);
		if(ptr != NULL){
			cout << "최대 동적할당 용량 찾는중입니다. 잠시만 기다려주세요.  ";
			free(ptr);
			cout << unit << "mb pass...\n";
			unit += sizeof(int) * 25;
			size = 1ULL * 1024 * 1024 * unit;
		}
		else{
			cout << "\n약 " << unit - 100 << " ~ " << unit << "mb가 최대 동적할당 용량입니다.\n";
			cout << "약 " << ((float)unit - 100) / 1000 << " ~ " << (float)unit / 1000 << "gb가 최대 동적할당 용량입니다.\n\n"; 
			break;
		}
		
	}
	system("pause"); 
	
    return 0;
}
