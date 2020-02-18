#include "func.h"
#include <iostream>
//huhhuh hävettää ihan tää mut jos tää toimii ni tää toimii, haluun nukkumaan
int analyysi(int inputRivi[], int arvottuRivi[]){

	int oikeinMenneet = 0;

	for(int i = 0; i < maxRivi; i++){
		if (inputRivi[i] == arvottuRivi[i]){
			oikeinMenneet++;
		}else if(inputRivi[i] != arvottuRivi[i]){
			for (int j = 0; j < maxRivi; j++){
				if (inputRivi[i] == inputRivi[j]){
					oikeinMenneet++;
				}
			}

		}
	}

    return oikeinMenneet;
}