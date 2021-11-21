#include <stdio.h>

class Object 
{
public:
    float x = 0;
    float y = 0;
    float z = 0;

	virtual void Update()
	{
		printf("x = %f\n", x);
		printf("y = %f\n", y);
		printf("z = %f\n", z);
	};

private:
};
class Vehicle : public Object
{
public:

	virtual void SpeedUp()
	{
		speed += accel;
	}

	virtual void Update()
	{
		printf("x=%f\n", speed);
	}

	int speed = 1;
	int	accel = 1;

private:

};
class Car : public Vehicle
{
public:
	Car()
	{
		speed = 1;
		accel = 1;
	};
	void Update()
	{
		Vehicle::Update();
	}
private:
};
int main()
{
	Car car;

	for (int i = 0; i < 10; i++)
	{
		car.SpeedUp();
		car.Update();
	}
};