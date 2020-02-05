//stack max size 8376976 bytes, manjaro, 8gb of ram, gcc.
//heap max size 16730271720 bytes


#include <iostream>
//#define testSize 8999999999

void arrayTest(unsigned long long testSize);

int main(){
    
    //max size 8376976, manjaro, 8gb of ram, gcc.
    //max size 16730271720 bytes


    // char testArray[testSize];
    // //filling the array just to be sure
    // for (int i = 0; i < testSize; i++){
    //     testArray[i] = i;
    // }

    // for (int i = 0; i < testSize; i++){
    //     //if ((i % 100) == 0 ){
    //       std::cout << testArray[i] << ",";
    //     //}else{
    //       //  std::cout << std::endl;
    //     //}
    // }


// 	char* testArray = nullptr;
//     testArray = new char[testSize];

//    for (int i = 0; i < testSize; i++){
//          testArray[i] = i;
//      }


// //  for (int i = 0; i < testSize; i++){
// //         //if ((i % 100) == 0 ){
// //           std::cout << testArray[i] << ",";
// //         //}else{
// //           //  std::cout << std::endl;
// //         //}
// //     }
//     std::cout << "done" << std::endl;
    for (unsigned long long testSize = 16730271715; testSize < 99909999999; testSize++)
    arrayTest(testSize);


//     delete[] testArray;
//     testArray = nullptr;

// std::cout << std::endl;
    return 0;
}


void arrayTest(unsigned long long testSize){
	char* testArray = nullptr;
    testArray = new char[testSize];

   for (int i = 0; i < testSize; i++){
          testArray[i] = i;
      }

    delete[] testArray;
    testArray = nullptr;
    std::cout << testSize << ". done" << std::endl;
}