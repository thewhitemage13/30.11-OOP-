#include <iostream>
using namespace std;

class Cat {
private:
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

public:

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
	void SetAngry(bool a)
	{
		angry = a;
	}
	bool GetAngry()
	{
		return angry;
	}
	void SetLive(bool l)
	{
		is_live = l;
	}
	bool GetLive()
	{
		return is_live;
	}
	void SetHappy(bool h)
	{
		is_happy = h;
	}
	bool GetHealth()
	{
		return is_happy;
	}
	void SetWakeUp(bool w)
	{
		is_wakeup = w;
	}
	bool GetWakeUp()
	{
		return is_wakeup;
	}
	void AddWeight(double mg)
	{
		weight += mg;
	}
	void SetWeight(double wg)
	{
		weight = wg;
	}
	double GetWeight()
	{
		return weight;
	}
	void AddEnergy(int e)
	{
		energy += e;
	}
	void SetEnergy(int e)
	{
		energy = e;
	}
	int GetEnergy()
	{
		return energy;
	}
};

class AirАreshener {
private:
	bool is_havepuff = true;
	bool is_battery = true;
	string brand;
	string form;
	unsigned short number_of_connectors;
	unsigned short number_of_buttons;
	string cylinder_type;
	double working_time;
public:
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
	void SetBattery(bool b)
	{
		is_battery = b;
	}
	bool GetBattery()
	{
		return is_battery;
	}
	void SetPuff(bool p)
	{
		is_havepuff = p;
	}
	bool GetPuff()
	{
		return is_havepuff;
	}

};

class Malika {
private:
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

public:
	void Sleep()
	{
		cout << "Zzzz..." << "\n";
	}
	void Eat()
	{
		cout << "maybe I'll go get something to eat)" << "\n";
	}
	void Speak()
	{
		cout << "Bla bla bla..." << "\n";
	}
	void Read()
	{
		cout << "I like to read code)" << "\n";
	}
	void PlayComputerGames()
	{
		cout << "I hate my teammates!!!!!!!" << "\n";
	}
	void SetEnergy(int en)
	{
		energy = en;
	}
	int GetEnergy()
	{
		return energy;
	}
	void AddEnergy(int en)
	{
		energy += en;
	}
	void AddHealth(int h)
	{
		health += h;
	}
	void SetHealth(int h)
	{
		health = h;
	}
	int GetHeakth()
	{
		return health;
	}
	void SetWeight(unsigned int w)
	{
		weight = w;
	}
	unsigned int GetWeight()
	{
		return weight;
	}
	void AddWeight(double w)
	{
		weight += w;
	}
	void SetHungry(bool h)
	{
		is_hungry = h;
	}
	bool GetHungry()
	{
		return is_hungry;
	}
	void SetAngry(bool an)
	{
		is_angry = an;
	}
	bool GetAngry()
	{
		return is_angry;
	}
	void MalikaTackeHumidiffier(AirАreshener& a)
	{
		if (a.GetBattery() == false)
		{
			a.SetBattery(true);
		}
		if (a.GetPuff() == false)
		{
			a.SetPuff(true);
		}
	}
	void PlayWithCaty(Cat& some_cat)
	{
		if (some_cat.GetLive() == false)
		{
			cout << "oops..." << "\n";
			return;
		}
		if (some_cat.GetAngry())
		{
			AddHealth(-20);
		}

		some_cat.SetHappy(true);
		some_cat.AddWeight(-0.2);
		some_cat.AddEnergy(-10);
		if (GetAngry() == true)
		{
			SetAngry(false);
		}
	}
};

class Fridge {
private:
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

public:

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
	void SetOn(bool o)
	{
		on = o;
	}
	bool GetOn()
	{
		return on;
	}
	void SetTakeEat(bool te)
	{
		take_eat = te;
	}
	bool GetTakeEat()
	{
		return take_eat;
	}

	void SetMalikaHasEat(bool mh)
	{
		MalikaHasEat = mh;
	}
	bool GetMalikaHasEat()
	{
		return MalikaHasEat;
	}

	void MalikaHungry(Malika& m)
	{
		if (m.GetHungry() == false)
		{
			return;
		}
		if (MalikaHasEat == false and m.GetHungry() == false)
		{
			m.SetAngry(true);
		}
		if (m.GetHungry() == true)
		{
			cout << "Hmm, I'm so hungry. What do I have in the fridge?" << "\n";
			SetTakeEat(true);
		}
	}
};

class Grill {
private:
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

public:


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
	void SetOn(bool o)
	{
		on = o;
	}
	bool GetOn()
	{
		return on;
	}
	void SetMaxEnergy(bool me)
	{
		maxenergy = me;
	}
	bool GetEnergy()
	{
		return maxenergy;
    }
	void MalikaСooks(Fridge& f, Malika& m)
	{
		if (f.GetTakeEat() == false)
		{
			cout << "I think we should start by taking food out of the fridge" << "\n";
			return;
		}
		if (f.GetTakeEat() == true)
		{
			cout << "I'm gonna use the grill to cook tonight" << "\n";
			is_dirty = true;
			m.SetHungry(false);
			m.AddWeight(+0.2);
		}
		if (m.GetEnergy() < 100)
		{
			m.AddEnergy(+5);
		}
		if (m.GetAngry() == true)
		{
			m.SetAngry(false);
		}
	}
	void ErrorVT(Fridge& f)
	{
		if (f.GetOn() == true and GetOn() == true and GetEnergy() == true)
		{
			cout << "The grill is on maximum. overvoltage. Reduce the power!!!!!!" << "\n";
			f.SetOn(false);
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
