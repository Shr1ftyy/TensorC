#include<stdio.h>
#include<string.h>
#include<math.h>

double act();
double relu();
double sigmoid();
double tan_h();

double act(double x, char actFunc[]){
	double y;

	if(actFunc == "relu"){
		y = relu(x);
	}
	if(actFunc == "sigmoid"){
		y = sigmoid(x);
	}
	if(actFunc == "tanh"){
		y = tan_h(x);
	}

	return y;
}

double relu(double input){
	double output;
	if(input < 0){
		output = 0;
	} else{

		output = input;
	}
	return output;

}

double sigmoid(double input){
	input = -1*input;
	return 1/(1+exp(input));
}

double tan_h(double input){
	return tanh(input);
}
