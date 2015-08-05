#include <iostream>

class car
{
public:
	std::string color;
	std::string engine;
	float gas_tank;
	unsigned int wheel;
	
	void fill_tank(float liter);
	void running(void);

};

void car::fill_tank(float liter)
{
	gas_tank += liter;
}


int main()
{
	
	return 0;
}
