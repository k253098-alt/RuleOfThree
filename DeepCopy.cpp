#include <iostream>

using namespace std;
class Student {
	public:
		
		int* marks;
		int size;
		Student (int s){
			size = s;
			marks = new int[size];
			for(int i=0; i<size; i++){
				marks[i] = 0;
				
			}
			 
		}
		
		~Student(){
			delete[] marks;
			
		}
};

int main() {
	Student s1(3);
	s1.marks[0] = 90;
	s1.marks[1] = 80;
	s1.marks[2] = 70;
	
	for(int i=0; i<s1.size; i++){
				cout<< "marks " << s1.marks[i] << endl;
				
				
			}
}