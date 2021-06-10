#include "observer.h"
#include "subject.h"
#include <iostream>
#include <string.h>

using namespace std;

#pragma once

using namespace std;

class Player : public Observer
{
protected:
    Subject *subject;
    string name;
    int score;
    int position;

public:

			Player(Subject &subject, string name, int score)
			{
			    this->subject = &subject;
			   	
			    this->name = name;
			    this->score = score;
			    position = 0;
			
			    subject.attach(*this);
			}


			int getScore()
			{
			    return score;
			}
			
			void setPos(int position)
			{
			    this->position = position;
			}
			
			void update()
			{
			   cout << name << "Ada di posisi :  " << position << endl;
			}
};




