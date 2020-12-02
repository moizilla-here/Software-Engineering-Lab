#include <iostream>
using namespace std;

enum scale {ounces, kilograms};

class ZooAnimal  
{   
    private:
        char *name;
        int cageNumber;
        int weightDate;
        int weight;
		ZooAnimal *mother;

    public:
        void Create(char*, int, int, int); 
        void Destroy(); 
		void isMotherOf(ZooAnimal&);
        void changeWeight(int pounds);
        void changeWeightDate(int today);
        char* reptName();
        int reptWeight();
        void reptWeight(scale which);
        inline int reptWeightDate();
        int daysSinceLastWeighed(int today);
	
};

void ZooAnimal::Destroy()
{
   delete[] name;
}
 
void ZooAnimal::Create(char *Name, int CageNumber, int DateOfWeight, int Weight)
{
      name = Name;
      cageNumber = CageNumber;
      weightDate = DateOfWeight;
      weight = Weight;
}

int ZooAnimal::daysSinceLastWeighed(int today)
{
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
      thisday += 360;
    return (thisday-startday);
}

char* ZooAnimal::reptName ()
{
    return name;
}

int ZooAnimal::reptWeight()
{
	return weightDate;
}

void ZooAnimal::changeWeightDate (int today)
{
	weightDate = today;
}

void ZooAnimal::isMotherOf(ZooAnimal& mama)
{
	*mother = mama;
}

int main()
{
	ZooAnimal bozo;
	bozo.Create ("Bozo", 408, 1027, 400);
	std::cout << "This animal's name is " << bozo.reptName() << std::endl;
	
	
	return 0;
}