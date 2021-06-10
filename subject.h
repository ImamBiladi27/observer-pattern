#include "Observer.h"
#include <vector>

#pragma once

class Subject
{
private:
    std::vector<Observer *> observers;

public:
		   void attach(Observer &observer)
		{
		    observers.push_back(&observer);
		}
		
		void SdataChanged()
		{
		
		    notifyObservers();
		}
		
		void notifyObservers()
		{
		    for (Observer *ob : observers)
		    {
		        ob->update();
		    }
		}
};


