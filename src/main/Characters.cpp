/*
 * Characters.cpp
 *
 *  Created on: 15 apr. 2016
 *      Author: jogr
 */
#include "AttackData.h"
#include <iostream>
#include <string>
#include "Characters.h"
#include <fstream>

using namespace std;

string Characters::characters(int x){

choice = x;

if(choice!=1){
ifstream characters;
characters.open("characters.txt");
while (characters >> name){
	cout<<name<<endl;

}
}

//buckyFile<<"I love tuna and tuna loves me!\n";
//buckyFile.close();
}

