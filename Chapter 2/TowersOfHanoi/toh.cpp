#include <iostream>
#include <cstdio>
#include <cstdlib>

void TowersOfHanoi(int n, char frompeg, char topeg, char auxpeg){
    
    if(n <= 1){
		printf("Move Disk 1 from peg %c to peg %c. \n",frompeg,topeg);
		return;
	}

	TowersOfHanoi(n-1,frompeg,auxpeg,topeg);
	printf("Move Disk %d from peg %c to peg %c. \n",n,frompeg,topeg);
    
	TowersOfHanoi(n-1,auxpeg,topeg,frompeg);

}

void pause()
{
  std::cin.ignore(-1,'\n');
  getchar();
}

int main(){

	int n;

    printf("Enter the number of Disks: \n");
	scanf("%d",&n);
	
	TowersOfHanoi(n,'A','B','C');
	
	pause();
	return 0;
}
