#include <stdio.h>
#include <stdlib.h>


struct student {
	int ID;			//�й� 
	char name[100];	//�̸� 
	float score;	//���� 
};

int main(int argc, char *argv[]) {
	//instance���� 
	struct student s1 = {123, "juyup", 4.3};
	
	//�ٸ� �� ����
	s1.ID=123456;
	s1.name[0]='c';
	s1.score=0.7;
	
	
	//��� 
	printf("%d\n %s\n %f\n", s1.ID, s1.name, s1.score);
		
	printf("ID: %i\n", s1.ID);
	printf("name: %s\n", s1.name);
	printf("gradeee: %f\n", s1.score);
	strcpy(s1.name, "Bangjun");
			
	system("PAUSE");
	return 0;
}
