#include<stdio.h>
#include "utils/activations.h"

double check();

int main(){
	printf("%f", check());
}

double check(){
	double output = act(0.2, "relu");
	return output;

}
