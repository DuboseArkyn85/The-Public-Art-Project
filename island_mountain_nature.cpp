#include<iostream>
#include<string>

using namespace std;

//Project Class Declaration
class project
{
private:
	string title;			//Project Title
	string description;		//Project Description
	float budget;			//Project Budget
public:
	project();				//Default Constructor
	project(string, string, float);		//Overload Constructor
	void setTitle(string);				//Set Title
	void setDescription(string);		//Set Description
	void setBudget(float);				//Set Budget
	string getTitle();					//Get Title
	string getDescription();			//Get Description
	float getBudget();					//Get Budget
	void displayProject();				//Display Project
};

//Default Constructor
project::project()
{
	title = 'Public Art Installation and Education Project';
	description = 'A public art installation and education project that brings art to the masses, inspiring creativity and conversation.';
	budget = 10000.00;
}

//Overload Constructor
project::project(string title, string description, float budget)
{
	this->title = title;
	this->description = description;
	this->budget = budget;
}

//Set Title Method
void project::setTitle(string title)
{
	this->title = title;
}

//Set Description Method
void project::setDescription(string description)
{
	this->description = description;
}

//Set Budget Method
void project::setBudget(float budget)
{
	this->budget = budget;
}

//Get Title Method
string project::getTitle()
{
	return title;
}

//Get Description Method
string project::getDescription()
{
	return description;
}

//Get Budget Method
float project::getBudget()
{
	return budget;
}

//Display Project Method
void project::displayProject()
{
	//Display Project Information
	cout << "Title: " <<title <<endl;
	cout << "Description: " <<description <<endl;
	cout << "Budget: $" <<budget <<endl;
}

int main()
{
	//Create project Object
	project project;

	//Display project information
	project.displayProject();

	return 0;
}