#include <iostream>

int indexArray(int indexArr[]);
void pointerArray(int *ptrArr);

int main(){
	int arrayToIndex[10];
	int arrayToPtr[10];
	int filledArray[10];

	std::cout << "Index Array" << std::endl;
	indexArray(arrayToIndex);
	for (int i = 0; i < 10; i++){
		std::cout << arrayToIndex [i] << std::endl;
	}//for

	std::cout << "Pointer Array" << std::endl;
	pointerArray(arrayToPtr);
	for (int i = 0; i < 10; i++){
		std::cout << arrayToPtr[i] << std::endl;
	}//for

	for (int i = 0; i < 10; i++){
		filledArray[i] = 0;	
	}//for

	std::cout << "Giving an array filled with 0's in main to the functions" << std::endl;
	
	std::cout << "indexArray" << std::endl;
	indexArray(filledArray);
	for (int i = 0; i < 10; i++){
		std::cout << filledArray[i] << std::endl;
	}//for

	for (int i = 0; i < 10; i++){
		filledArray[i] = 0;
	}//for

	std::cout << "pointerArray" << std::endl;
	pointerArray(filledArray);
	for (int i = 0; i < 10; i++){
		std::cout << filledArray[i] << std::endl;
	}//for
}//main


int indexArray(int indexArr[]){
	for (int i = 0; i < 10; i++){
		indexArr[i] = i + 1;
	}//for
	
	return *indexArr;
}//indexArray


void pointerArray(int *ptrArr){
	for (int i = 0; i < 10; i++){
	*ptrArr = i + 1;
	ptrArr++;
	}//for
}//pointerArray
