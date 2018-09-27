#pragma once
#include <vector>

class GrafDocument;

/// Controller class
/// Change model, create and setting view

class Observer
{
public:
	virtual void update() = 0;
};

class Observable
{
public:
	void addObserver(Observer *observer)
	{
		_observers.push_back(observer);
	}
	void notifyUpdate()
	{
		int size = _observers.size();
		for (int i = 0; i < size; i++)
		{
			_observers[i]->update();
		}
	}
private:
	std::vector<Observer*> _observers;
};

class Tool
{
public:
	Tool(GrafDocument* docudent);
	~Tool();

	void CreateLine();
	void CreateCircle();
	void CreatPoint();

private:
	void CreateContour();
	GrafDocument* m_GrafDoc;
};