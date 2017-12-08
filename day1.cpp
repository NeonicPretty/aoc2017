//
// Created by neon on 12/1/17.
//
#include <string>
#include <fstream>
#include <iostream>

using std::string;

struct LoopElement{ //:)
	char c;
	LoopElement* next = nullptr;
};

void day1(string inputFile){
	std::ifstream inStream(inputFile);
	string input;
	std::getline(inStream, input);

	int sum = 0;

	LoopElement start;
	start.c = input[0];
	LoopElement* next = &start;

	for (auto c = input.begin() + 1; c != input.end(); c++){
		next->next = new LoopElement;
		next = next->next;
		next->c = *c;
	}

	/*for(char c : input){
		next->c = c;
		next->next = new LoopElement;
		next = next->next;
	}*/

	next->next = &start;
	next = &start;

	do{
		if (next->c == next->next->c){
			sum += (next->c - '0');
		}

		next = next->next;
	} while(next != &start);

	std::cerr << sum;
}