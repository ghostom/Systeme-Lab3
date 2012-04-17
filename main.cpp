#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include "hardDrive.h"
#include "operatingSystem.h"


using namespace std;


int main(){
	string fichierDD = "HD.DH";
	hardDrive monDD(fichierDD);
	
	monDD.afficheHD();
	
	return 0;
}
