#include <iostream>
using namespace std;

class Cat {
public:
	string nick;
	int age;
	double weight;
	int paws;
	bool angry = false;
	int clows_lengs;
	bool is_live = true;
	bool is_happy = false;
	bool is_wakeup = true;
	int energy = 100;

	void Sound()
	{
		cout << "Sound meow meow meow" << "\n";
	}
	void Play()
	{
		cout << "Play with me!" << "\n";
	}
	void Eat()
	{
		cout << "I want to eat meow" << "\n";
	}
	void Pee()
	{
		cout << "I have to go to the bathroom" << "\n";
	}
	void Attention()
	{
		cout << "caress me." << "\n";
	}
};

class AirАreshener {
public:
	bool is_havepuff = true;
	bool is_battery = true;
	string brand;
	string form;
	unsigned short number_of_connectors;
	unsigned short number_of_buttons;
	string cylinder_type;
	double working_time;

	void Spritz()
	{
		cout << "Pshhh" << "\n";
	}
	void Вischarge()
	{
		cout << "Hey, I'm out of battery" << "\n";
	}
	void Sound()
	{
		cout << "I make a sound, so don't be scared at night)))))" << "\n";
	}
	void Break()
	{
		cout << "I'm sorry, I broke down!" << "\n";
	}
	void ExhaustBallon()
	{
		cout << "I used the whole bottle with the smell." << "\n";
	}
};

class Malika {
public:
	int health = 100;
	int energy = 100;
	bool is_hungry = true;
	bool is_angry = false;
	bool is_happy = true;
	string surname;
	string adress;
	unsigned short age;
	unsigned short weight;
	string hair_color;
	string eye_color;
	unsigned short sleight_of_hand;
	unsigned short number_of_legs;
	unsigned short number_of_fingers;
	unsigned short number_of_toes;
	unsigned short number_of_teeth;
	unsigned short leg_size;

	void Sleep()
	{
		cout << "Zzzz..."<<"\n";
	}
	void Eat()
	{
		cout << "maybe I'll go get something to eat)" << "\n";
	}
	void Speak()
	{
		cout << "Bla bla bla..."<<"\n";
	}
	void Read()
	{
		cout << "I like to read code)" << "\n";
	}
	void PlayComputerGames()
	{
		cout << "I hate my teammates!!!!!!!" << "\n";
	}

	void MalikaTackeHumidiffier(AirАreshener &a)
	{
		if (a.is_battery == false)
		{
			a.is_battery == true;
		}
		if (a.is_havepuff == false)
		{
			a.is_havepuff == true;
		}
	}

	void PlayWithCaty(Cat& some_cat)
	{
		if (some_cat.is_live == false)
		{
			cout << "oops..." << "\n";
			return;
		}
		if (some_cat.angry)
		{
			health -= 20;
		}
		some_cat.is_happy = true;
		some_cat.weight -= 0.2;
		some_cat.energy -= 10;
		if (is_angry == true)
		{
			is_angry = false;
		}
	}
};

class Fridge {
public:
	bool on = true;
	bool MalikaHasEat = true;
	bool take_eat = false;
	string brand;
	string color;
	unsigned short height;
	unsigned short width;
	unsigned short number_of_compartments;
	unsigned short volume_in_liters;
	unsigned short maximum_temperature;
	unsigned short minimum_temperature;
	string connection_method;
	bool light;

	void StoreFood()
	{
		cout << "I can store food" << "\n";
	}
	void MakeSound()
	{
		cout << "I can make a sound" << "\n";
	}
	void Freeze()
	{
		cout << "I can lower the temperature of food" << "\n";
	}
	void ShutDown()
	{
		cout << "If the lights go out, so do I(((((" << "\n";
	}
	void Stagger()
	{
		cout << "If you don't close the freezer tightly, get the mop ready)" << "\n";
	}
	
	void MalikaHungry(Malika& m)
	{
		
		if (m.is_hungry == false)
		{
			return;
		}
		if (MalikaHasEat == false and m.is_angry == false)
		{
			m.is_angry == true;
		}
		if (m.is_hungry == true)
		{
			cout << "Hmm, I'm so hungry. What do I have in the fridge?" << "\n";
			take_eat == true;
		}
	}
};

class Grill {
public:
	bool on = true;
	bool maxenergy = true;
	bool is_dirty = false;
	string brand;
	unsigned short max_temperature;
	unsigned short min_temperature;
	unsigned short height;
	unsigned short width;
	unsigned short number_of_buttons;
	string connection_method;

	void Cook()
	{
		cout << "I can cook a meal" << "\n";
	}
	void Dirt()
	{
		cout << "I can get dirty" << "\n";
	}
	void ShutDown()
	{
		cout << "I can turn myself off if the lights go out." << "\n";
	}
	void Overheating()
	{
		cout << "If I'm on for too long, I'll overheat." << "\n";
	}
	void OverheatFood()
	{
		cout << "if you don't watch the food, it'll burn." << "\n";
	}

	void MalikaСooks(Fridge& f, Malika& m)
	{
		if (f.take_eat == false)
		{
			cout << "I think we should start by taking food out of the fridge" << "\n";
			return;
		}
		if (f.take_eat == true)
		{
			cout << "I'm gonna use the grill to cook tonight" << "\n";
			is_dirty == true;
			m.is_hungry == false;
			m.weight += 0.2;
		}
		if (m.energy < 100)
		{
			m.energy += 5;
		}
		if (m.is_angry == true)
		{
			m.is_angry == false;
		}
	}

	void ErrorVT(Fridge& f)
	{
		if (f.on == true and on == true and maxenergy == true)
		{
			cout << "The grill is on maximum. overvoltage. Reduce the power!!!!!!" << "\n";
			f.on == false;
		}
	}
};

int main()
{
	Malika m;
	AirАreshener a;
	Fridge f;
	Cat c;
	Grill g;

	f.MalikaHungry(m);
	g.MalikaСooks(f, m);
	m.PlayWithCaty(c);
	g.ErrorVT(f);
	m.MalikaTackeHumidiffier(a);
}
