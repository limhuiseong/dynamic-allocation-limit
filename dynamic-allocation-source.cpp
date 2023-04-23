#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

HANDLE heap = GetProcessHeap();
SIZE_T maxSize = -1;
SIZE_T prevSize;
BOOL success = HeapSetInformation(heap, HeapCompatibilityInformation, &maxSize, sizeof(maxSize));

int main(){
	
	string unit;
	int sizeControl;
	unsigned long long N;
	
	while(1){
		cout << "단위를 입력하세요(kb, mb, gb, tb, pb): ";
		cin >> unit;
		if(unit == "kb"){
			sizeControl = 1;
			break;
		}
		else if(unit == "mb"){
			sizeControl = 2;
			break;
		}
		else if(unit == "gb"){
			sizeControl = 3;
			break;
		}
		else if(unit == "tb"){
			sizeControl = 4;
			break;
		}
		else if(unit == "pb"){
			sizeControl = 5;
			break;
		}
		else cout << "정확히 입력하세요.\n";
	} 
	
    cout << "몇 " << unit <<"를 동적할당?: ";
    cin >> N;
    
    unsigned long long size = N * 1ULL;
   	
	for(int i = 0; i < sizeControl; i++) size *= sizeof(int) * 256;

    void* ptr = malloc(size);

    if(ptr == NULL){
        cout << "실패\n";
        system("pause");
        return 1;
    }
    
	cout << "성공\n";
    free(ptr);
    system("pause");
    
    return 0;
}
