#pragma once
#include "Model.h"
#include "Tool.h"

class Visualizer : public Observer
{
public:
	Visualizer(GrafDocument* document);
	~Visualizer();

	virtual void update();
private:
	GrafDocument* m_gragDoc;
};