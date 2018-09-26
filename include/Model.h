#pragma once
#include <vector>
#include <chrono>
#include <string>

#include "Tool.h"

class Point2D
{
public:
	Point2D();
	~Point2D();
	
	auto GetX();
	auto SetX();

	auto GetY();
	auto SetY();

private:
	/// Normal		- Начальная или конечная точка кривой или линии
	/// Smooth		- Гладкий переход между соседними кривыми
	/// Symmetrical - Гладкий и симметричный переход между соседними кривыми
	/// Control		- Управляющая точка кривой
	enum contourFlags {
		Normal,
		Smooth,
		Symmetrical,
		Control
	};
	contourFlags	m_Flag;
	float			m_x;
	float			m_y;
};

class Contour
{
public:
	Contour();
	~Contour();
	
	void AddPoint();
	Point2D* GetPoint();

private:
	std::vector<Point2D> m_Points;
};

/// Model class
/// Abstract data model

class GrafDocument : public IObservable
{
	using deta = std::chrono::time_point<std::chrono::system_clock>;
public:
	GrafDocument();
	~GrafDocument();
	
	void Create(std::chrono::time_point<std::chrono::system_clock> creatingDetaTime, std::string autor);

	void SaveDocument(std::string path);
	void LoadDocument(std::string path);

	void SetCreatingDeta(const deta creatingDetaTime);
	void SetAutor(const std::string& autorName);

	deta GetCreatingDeta();
	std::string& GetAutor();
private:
	std::vector<Contour> m_model;
	deta			m_createDeta;
	std::string		m_autor;
};