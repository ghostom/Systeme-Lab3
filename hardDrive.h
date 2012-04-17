#ifndef DEF_HARDRIVE
#define DEF_HARDRIVE

#include <string>
#include <fstream>
#include <iostream>

#define MAX 32
#define NB_CLUSTERS 8
using namespace std;


/*
struct FAT{

	
	*	FAT : Tableau de 8 cases, chaque case est composé de 32 bits, ce qui signifie qu'on a 4 octets par cases => 8 cluster de 4octets
	*	l'unité prise est l'octet donc on a un tableau de 32 octets, decomposé en 8 clusters de 4 octets chacun (32*8 = 256)
	
	
	int _tabFat[MAX] ;
	int _numCluster;
};
*/

class hardDrive{

	//ATTRIBUTS
	private:
		
		string _file;			//fichier "contenant" le DD
		int _position;			//position dans le DD	
		string _contenuRead;	//contenu a lire dans le DD
		string _contenuWrite;	//Contenu a ecrire dans le DD
		int _tabFat[MAX];
		
		
	//METHODES
	public:
		hardDrive(string);
		
		/*
		*	Pour les methodes readBlock et writeBlock 
		*	@param int :	position dans le DD
		*	@param string :	contenu à lire / ecrire  
		*/
		void readBlock(int, string);
		void writeBlock(int, string);
		void afficheHD();	
		
		/***ACCESSEURS***/
		string getFile(){return _file;}
};

#endif
