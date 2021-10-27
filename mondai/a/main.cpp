#include <stdio.h>

class Object 
{
public:
    virtual void Update(float num)
    {
        x += num;
    };
private:
    float x = 0;
    float y = 0;
    float z = 0;
};