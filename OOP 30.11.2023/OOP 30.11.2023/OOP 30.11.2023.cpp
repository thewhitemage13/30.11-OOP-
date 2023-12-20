#include <iostream>
using namespace std;

class Cat {
private:
	string nick;
	int age;
	double weight;
	int paws;
	bool angry;
	bool is_live;
	bool is_happy;
	bool is_wakeup;
	int energy;

public:

	Cat()
	{
		SetAngry(true);
		SetHappy(false);
		SetWeight(5.67);
		SetEnergy(100);
		SetWakeUp(true);
		SetPaws(4);
		SetAge(2);
		SetNick("Vasya");
		SetLive(true);
	}
	Cat(bool angry, bool is_happy, double weight, int energy, double is_wakeup, int paws, int age, string nick, bool is_live)
	{
		SetAngry(angry);
		SetHappy(is_happy);
		SetWeight(weight);
		SetEnergy(energy);
		SetWakeUp(is_wakeup);
		SetPaws(paws);
		SetAge(age);
		SetNick(nick);
		SetLive(is_live);
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
	void SetNick(string nick)
	{
		this->nick = nick;
	}
	string GetName() const
	{
		return nick;
	}
	void SetAge(int age)
	{
		this->age = age;
	}
	int GetAge() const
	{
		return age;
	}
	void SetPaws(int paws)
	{
		this->paws = paws;
	}
	int GetPaws() const
	{
		return paws;
	}
};

class AirАreshener {
private:
	bool is_havepuff;
	bool is_battery;
	string brand;
	string form;
	unsigned short number_of_connectors;
	unsigned short number_of_buttons;
	string cylinder_type;
	double working_time;
public:

	AirАreshener()
	{
		SetBrand("Samsung");
		SetPuff(true);
		SetBattery(false);
		SetForm("Col");
		SetNumberConnectors(2);
		SetNumberButtons(2);
		SetType("Electro");
		SetWorkTime(129);
	}
	AirАreshener(bool is_havepuff, bool is_battery, string brand, string form, unsigned short number_of_connectors, unsigned short number_of_buttons, string cylinder_type, double working_time)
	{
		SetPuff(is_havepuff);
		SetBattery(is_battery);
		SetBrand(brand);
		SetForm(form);
		SetNumberConnectors(number_of_connectors);
		SetNumberButtons(number_of_buttons);
		SetType(cylinder_type);
		SetWorkTime(working_time);
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
	void SetWorkTime(double working_time)
	{
		this->working_time = working_time;
	}
	double GetWorkTime() const
	{
		return working_time;
	}
	void SetType(string cylinder_type)
	{
		this->cylinder_type = cylinder_type;
	}
	string GetType(string cylinder_type) const
	{
		return cylinder_type;
	}
	void SetNumberButtons(unsigned short number_of_buttons)
	{
		this->number_of_buttons = number_of_buttons;
	}
	unsigned short GetNumberButtons() const
	{
		return number_of_buttons;
	}
	void SetNumberConnectors(unsigned short number_of_connectors)
	{
		this->number_of_connectors = number_of_connectors;
	}
	unsigned short GetNumberConnectors() const
	{
		return number_of_connectors;
	}

	void SetForm(string form)
	{
		this->form = form;
	}
	string GetForm() const
	{
		return form;
	}
	void SetBrand(string brand)
	{
		this->brand = brand;
	}
	string GetBrand() const
	{
		return brand;
	}
};

class Malika {
private: 
	int health;
	int energy;
	bool is_hungry;
	bool is_angry;
	bool is_happy;
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
		SetHealth(100);
		SetEnergy(100);
		SetAngry(false);
		SetHappy(true);
		SetSurname("Benoeva");
		SetAdress("Yakira 17");
		SetAge(18);
		SetHairColor("Dark");
		SetEye("Dark");
		SetSleightHand(2);
		SetNumberLegs(2);
		SetNumberFingers(10);
		SetNumberToes(10);
		SetTeeth(32);
		SetLegSize(37);
	}
	Malika(bool is_hungry, int weight, int health, int enegry, bool is_angry, bool is_happy, string surname, string adress, int age, string hair_color, string eye_color, unsigned short sleight_of_hand, unsigned short number_of_legs, unsigned short number_of_fingers, unsigned short number_of_toes, unsigned short number_of_teeth, unsigned short leg_size)
	{
		SetHungry(is_hungry);
		SetWeight(weight);
		SetHealth(health);
		SetEnergy(energy);
		SetAngry(is_angry);
		SetHappy(is_happy);
		SetSurname(surname);
		SetAdress(adress);
		SetAge(age);
		SetHairColor(hair_color);
		SetEye(eye_color);
		SetSleightHand(sleight_of_hand);
		SetNumberLegs(number_of_legs);
		SetNumberFingers(number_of_fingers);
		SetNumberToes(number_of_toes);
		SetTeeth(number_of_teeth);
		SetLegSize(leg_size);
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

	void SetLegSize(unsigned short leg_size)
	{
		this->leg_size = leg_size;
	}
	unsigned short GetLegSize() const
	{
		return leg_size;
	}

	void SetTeeth(unsigned short number_of_teeth)
	{
		this->number_of_teeth = number_of_teeth;
	}
	unsigned short GetTeeth() const
	{
		return number_of_teeth;
	}

	void SetNumberToes(unsigned short number_of_toes)
	{
		this->number_of_toes = number_of_toes;
	}
	unsigned short SetNumberToes() const
	{
		return number_of_toes;
	}

	void SetNumberFingers(unsigned short number_of_fingers)
	{
		this->number_of_fingers = number_of_fingers;
	}
	unsigned short GetNumberFingers() const
	{
		return number_of_fingers;
	}

	void SetNumberLegs(unsigned short number_of_legs)
	{
		this->number_of_legs = number_of_legs;
	}
	unsigned short GetNumberLegs() const
	{
		return number_of_legs;
	}

	void SetSleightHand(unsigned short sleight_of_hand)
	{
		this->sleight_of_hand = sleight_of_hand;
	}
	unsigned short GetSleightHand() const
	{
		return sleight_of_hand;
	}

	void SetEye(string eye_color)
	{
		this->eye_color = eye_color;
	}
	string GetEye() const
	{
		return eye_color;
	}

	void SetHairColor(string hair_color)
	{
		this->hair_color = hair_color;
	}
	string GetHairColor() const
	{
		return hair_color;
	}

	void SetAge(unsigned short age)
	{
		this->age = age;
	}
	int GetAge() const
	{
		return age;
	}

	void SetAdress(string adress)
	{
		this->adress = adress;
	}
	string GetAdress() const
	{
		return adress;
	}

	void SetSurname(string surname)
	{
		this->surname = surname;
	}
	string GetSurname() const
	{
		return surname;
	}

	void SetHappy(bool is_happy)
	{
		this->is_happy = is_happy;
	}
	bool GetHappy() const
	{
		return is_happy;
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
	bool on;
	bool MalikaHasEat;
	bool take_eat;
	string brand;
	string color;
	unsigned short height;
	unsigned short width;
	unsigned short number_of_compartments;
	unsigned short volume_in_liters;
	unsigned short maximum_temperature;
    unsigned short minimum_temperature;
	bool light;

public:
	Fridge()
	{
		SetOn(true);
		SetTakeEat(false);
		SetMalikaHasEat(true);
		SetBrand("Samsung");
		SetColor("Blue");
		SetHeight(195);
		SetWidth(100);
		SetCompartments(4);
		SetLiter(250);
		SetMaxTemp(15);
		SetMinimum(2);
		SetLight(true);
	}

	Fridge(bool on, bool take_eat, bool MalikaHasEat,string brand, string color, unsigned short height, unsigned short width, unsigned short number_of_compartments, unsigned short volume_in_liters, unsigned short maximum_temperature, unsigned short minimum_temperature, bool light)
	{
		SetOn(on);
		SetTakeEat(take_eat);
		SetMalikaHasEat(MalikaHasEat);
		SetBrand(brand);
		SetColor(color);
		SetHeight(height);
		SetWidth(width);
		SetCompartments(number_of_compartments);
		SetLiter(volume_in_liters);
		SetMaxTemp(maximum_temperature);
		SetMinimum(minimum_temperature);
		SetLight(light);
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

	void SetLight(bool light)
	{
		this->light = light;
	}
	bool GetLight() const
	{
		return light;
	}

	void SetMinimum(unsigned short minimum_temperature)
	{
		this->minimum_temperature = minimum_temperature;
	}

	unsigned short GetMinimum() const
	{
		return minimum_temperature;
	}

	void SetMaxTemp(unsigned short maximum_temperature)
	{
		this->maximum_temperature = maximum_temperature;
	}
	unsigned short GetMaxTemp() const
	{
		return maximum_temperature;
	}

	void SetLiter(unsigned short volume_in_liters)
	{
		this->volume_in_liters = volume_in_liters;
	}
	unsigned short GetLiter() const
	{
		return volume_in_liters;
	}

	void SetCompartments(unsigned short number_of_compartments)
	{
		this->number_of_compartments = number_of_compartments;
	}
	unsigned short SetCompartments() const
	{
		return number_of_compartments;
	}

	void SetWidth(unsigned short width)
	{
		this->width = width;
	}
	unsigned short SetWidth() const
	{
		return width;
	}

	void SetHeight(unsigned short height)
	{
		this->height = height;
	}
	unsigned short SetHeight() const
	{
		return height;
	}

	void SetColor(string color)
	{
		this->color = color;
	}
	string GetColor() const
	{
		return color;
	}

	void SetBrand(string brand)
	{
		this->brand = brand;
	}
	string GetBrand() const
	{
		return brand;
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
	unsigned short number_of_buttons;

public:
	Grill()
	{
		SetOn(true);
		SetMaxEnergy(false);
		SetDirty(false);
		SetBrand("Samsung");
		SetMax(230);
		SetMin(25);
		SetButtons(15);
	}
	Grill(bool on, bool maxenergy, bool is_dirty, string brand, unsigned short max_temperature, unsigned short min_temperature, unsigned short number_of_buttons)
	{
		SetOn(on);
		SetMaxEnergy(maxenergy);
		SetDirty(is_dirty);
		SetBrand(brand);
		SetMax(max_temperature);
		SetMin(min_temperature);
		SetButtons(number_of_buttons);
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

	void SetButtons(unsigned short number_of_buttons)
	{
		this->number_of_buttons = number_of_buttons;
	}
	unsigned short GetButtons() const
	{
		return number_of_buttons;
	}

	void SetMin(unsigned short min_temperature)
	{
		this->min_temperature = min_temperature;
	}
	unsigned short GetMin() const
	{
		return min_temperature;
	}

	void SetMax(unsigned short max_temperature)
	{
		this->max_temperature = max_temperature;
	}
	unsigned short GetMax() const
	{
		return max_temperature;
	}

	void SetBrand(string brand)
	{
		this->brand = brand;
	}
	string GetBrand() const
	{
		return brand;
	}

	void SetDirty(bool is_dirty)
	{
		this->is_dirty = is_dirty;
	}
	bool GetDirty() const
	{
		return is_dirty;
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

	Cat ca(true,false,4,60,true,4,1,"Petya",true);
	AirАreshener ai(true, true, "Samsung", "Column", 2, 2, "Electro", 345);
	Malika(true,54,100,50,true,false,"Blala","Nekrasova 5",17,"blue","red",2,2,10,10,32,36);
	Fridge(false,false,false,"Bosch","Dark",200,120,2,150,20,1,false);
	Grill(true, false, false, "Tefal", 180, 30, 5);

	f.MalikaHungry(m);
	g.MalikaСooks(f, m);
	m.PlayWithCaty(c);
	g.ErrorVT(f);
	m.MalikaTackeHumidiffier(a);
}
