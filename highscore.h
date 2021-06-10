#include <vector>
#include "player.h"

#pragma once

class Highscore : public Observer
{
private:
    Subject *subject;
    std::vector<Player *> PLAyers;

public:
    
		Highscore(Subject &subject)
		{
		    this->subject = &subject;
		
		    subject.attach(*this);
		}
		
		void addPlayer(Player &player)
		{
		    PLAyers.push_back(&player);
		}
		
		void update()
		{
		    for (int i = 0; i <PLAyers.size(); i++)
		    {
		        for (int j = i + 1; j < PLAyers.size(); j++)
		        {
		            if (PLAyers[j]->getScore() > PLAyers[i]->getScore())
		            {
		                Player *tmp = PLAyers[i];
		                PLAyers[i] = PLAyers[j];
		                PLAyers[j] = tmp;
		            }
		        }
		    }
		
		    for (int i = 0; i < PLAyers.size(); i++)
		    {
		        PLAyers[i]->setPos(i + 1);
		    }
		}
};

