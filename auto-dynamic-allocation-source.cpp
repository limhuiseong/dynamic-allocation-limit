#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int unit = sizeof(int) * 25;
	unsigned long long size = 1ULL * 1024 * 1024 * unit;
	
	while(1){
		
		void* ptr = malloc(size);
		if(ptr != NULL){
			cout << "�ִ� �����Ҵ� �뷮 ã�����Դϴ�. ��ø� ��ٷ��ּ���.  ";
			free(ptr);
			cout << unit << "mb pass...\n";
			unit += sizeof(int) * 25;
			size = 1ULL * 1024 * 1024 * unit;
		}
		else{
			cout << "\n�� " << unit - 100 << " ~ " << unit << "mb�� �ִ� �����Ҵ� �뷮�Դϴ�.\n";
			cout << "�� " << ((float)unit - 100) / 1000 << " ~ " << (float)unit / 1000 << "gb�� �ִ� �����Ҵ� �뷮�Դϴ�.\n\n"; 
			break;
		}
		
	}
	system("pause"); 
	
    return 0;
}
