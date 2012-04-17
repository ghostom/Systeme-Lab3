

#include "hardDrive.h"

using namespace std;

	//Constructeur
	hardDrive::hardDrive(string file){


		
		//On ouvre le fichier HD.DH en ecriture et en lecture
		_file = file;
		ofstream flux(_file.c_str(), ios::out);

		//Ecriture de l'entete du fichier		
		if(flux){
			flux << "\t\t\t\tHD.DH" << endl;
			flux << "Indice FAT\t\tNom Fichier\t\tTaille du fichier\t\tIndice du premier bloc" << endl;
				//Initialisation de la FAT
			for(int i=0; i<MAX; i++){
				_tabFat[i]=i;
				flux << i <<endl;
			}
			
		} else
			cout<<"ERROR : File not found"<<endl;	
			

	}
	
	void hardDrive::readBlock(int numeroBlock, string tamponLecture){
		
		_position = numeroBlock;
		_contenuRead = tamponLecture;
	
	}
	
	void hardDrive::writeBlock(int numeroBlock, string tamponEcriture){
	
	}
	void hardDrive::afficheHD(){
			
		//modele de presentation : indiceFat		nomFichier		tailleFichier		indice du premier bloc
		ifstream flux(_file.c_str(), ios::in);
		
		if(flux)  // si l'ouverture a fonctionné
        {	
        	string ligne;
			while(getline(flux, ligne))  // tant que l'on peut mettre la ligne dans "contenu"
				    cout << ligne << endl;  // on l'affiche
		
		}
		else
			cout<<"ERROR: (display) File not found"<<endl;
	}

