#pragma once
#ifndef BOX_H
#define BOX_H

class Box {
public:
	void getBox();  // get the dimension of the box 
	double volume();
	//with default value
	double h = 0;
	double w = 0;
	double l = 0;
	Box();
	~Box();


};

#endif // !BOX_H
