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

	Cat()
	{
		SetAngry(true);
		SetHappy(false);
		SetWeight(5.67);
	}
	Cat(bool angry,bool is_happy,double weight)
	{
		SetAngry(angry);
		SetHappy(is_happy);
		SetWeight(weight);
	}

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
	void SetAngry(bool angry)
	{
		this->angry = angry;
	}
	bool GetAngry() const
	{
		return angry;
	}
	void SetLive(bool is_live)
	{
		this->is_live = is_live;
	}
	bool GetLive() const
	{
		return is_live;
	}
	void SetHappy(bool is_happy)
	{
		this->is_happy = is_happy;
	}
	bool GetHealth() const
	{
		return is_happy;
	}
	void SetWakeUp(bool is_wakeup)
	{
		this->is_wakeup = is_wakeup;
	}
	bool GetWakeUp() const
	{
		return is_wakeup;
	}
	void AddWeight(double weight)
	{
		this->weight += weight;
	}
	void SetWeight(double weight)
	{
		this->weight = weight;
	}
	double GetWeight() const
	{
		return weight;
	}
	void AddEnergy(int energy)
	{
		this->energy += energy;
	}
	void SetEnergy(int energy)
	{
		this->energy = energy;
	}
	int GetEnergy() const
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
	AirАreshener()
	{
		SetPuff(true);
		SetBattery(false);
	}
	AirАreshener(bool is_havepuff, bool is_battery)
	{
		SetPuff(is_havepuff);
		SetBattery(is_battery);
	}
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
	void SetBattery(bool is_battery)
	{
		this->is_battery = is_battery;
	}
	bool GetBattery() const
	{
		return is_battery;
	}
	void SetPuff(bool is_havepuff)
	{
		this->is_havepuff = is_havepuff;
	}
	bool GetPuff() const
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
	Malika()
	{
		SetHungry(true);
		SetWeight(55);
	}
	Malika(bool is_hungry, int weight)
	{
		SetHungry(is_hungry);
		SetWeight(weight);
	}
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
	void SetEnergy(int energy)
	{
		this->energy = energy;
	}
	int GetEnergy() const
	{
		return energy;
	}
	void AddEnergy(int energy)
	{
		this->energy += energy;
	}
	void AddHealth(int health)
	{
		this->health += health;
	}
	void SetHealth(int health)
	{
		this->health = health;
	}
	int GetHeakth() const
	{
		return health;
	}
	void SetWeight(unsigned int weight)
	{
		this->weight = weight;
	}
	unsigned int GetWeight() const
	{
		return weight;
	}
	void AddWeight(double weight)
	{
		this->weight += weight;
	}
	void SetHungry(bool is_hungry)
	{
		this->is_hungry = is_hungry;
	}
	bool GetHungry() const
	{
		return is_hungry;
	}
	void SetAngry(bool is_angry)
	{
		this->is_angry = is_angry;
	}
	bool GetAngry() const
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
	Fridge()
	{
		SetOn(true);
		SetTakeEat(false);
	}
	Fridge(bool on, bool take_eat)
	{
		SetOn(on);
		SetTakeEat(take_eat);
	}
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
	void SetOn(bool on)
	{
		this->on = on;
	}
	bool GetOn() const
	{
		return on;
	}
	void SetTakeEat(bool take_eat)
	{
		this->take_eat = take_eat;
	}
	bool GetTakeEat() const
	{
		return take_eat;
	}

	void SetMalikaHasEat(bool MalikaHasEat)
	{
		this->MalikaHasEat = MalikaHasEat;
	}
	bool GetMalikaHasEat() const
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
	Grill()
	{
		SetOn(true);
		SetMaxEnergy(false);
	}
	Grill(bool on, bool maxenergy)
	{
		SetOn(on);
		SetMaxEnergy(maxenergy);
	}
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
	void SetOn(bool on)
	{
		this->on = on;
	}
	bool GetOn() const
	{
		return on;
	}
	void SetMaxEnergy(bool maxenergy)
	{
		this->maxenergy = maxenergy;
	}
	bool GetEnergy() const
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

	Malika ma(true,55);
	AirАreshener aa(true,false);
	Fridge fr(true,false);
	Cat ca(true, false, 5.67);
	Grill gr(true,false);

	f.MalikaHungry(m);
	g.MalikaСooks(f, m);
	m.PlayWithCaty(c);
	g.ErrorVT(f);
	m.MalikaTackeHumidiffier(a);
}
