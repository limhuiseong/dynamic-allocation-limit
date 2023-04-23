#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	string unit;
	int sizeControl;
	unsigned long long N;
	
	while(1){
		cout << "������ �Է��ϼ���(kb, mb, gb, tb, pb): ";
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
		else cout << "��Ȯ�� �Է��ϼ���.\n";
	} 
	
    cout << "�� " << unit <<"�� �����Ҵ�?: ";
    cin >> N;
    
    unsigned long long size = N * 1ULL;
   	
	for(int i = 0; i < sizeControl; i++) size *= sizeof(int) * 256;

    void* ptr = malloc(size);

    if(ptr == NULL){
        cout << "����\n";
        system("pause");
        return 1;
    }
    
	cout << "����\n";
    free(ptr);
    system("pause");
    
    return 0;
}
