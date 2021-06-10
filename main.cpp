#include <iostream>
#include "player.h"
#include "highscore.h"
#include "subject.h"

using namespace std;
int main() 

{
    cout << "HIGH SCORE" << endl << endl;

    Subject *subject = new Subject();

    Highscore *highscore = new Highscore(*subject);

   
    Player *pemain = new Player(*subject, "Natan ",320);
   	Player *pemain2 = new Player(*subject, "Roby ", 214);
    Player *pemain3= new Player(*subject, "Joane ", 211);
    highscore->addPlayer(*pemain);
	highscore->addPlayer(*pemain2);
    highscore->addPlayer(*pemain3);
    subject->notifyObservers();


    return 0;
}	
