#include <iostream>

int main() {
	std::cout << "=======\n";
	std::cout << "MarbleS\n";
	std::cout << "=======\n";

	std::cout << "Spēles noteikumi \n\n";
	std::cout << "Tev ir dotas 10 bumbiņas,";
	std::cout << "Tavs uzdevums ir dabūt pretinieka visas 10 bumbiņas.\n";
	std::cout << "Tas kas pirmais sāk liek pāra vai nepāra skaitli, \nvienlaicīgi ar to liek likmi ar kuru viņs uzvarēs\n";
	std::cout << "Pirms otrs izvēlas, viņs izvēlas savu likmi\n";
	std::cout << "Ja otrs uzmina vai tu uzliki pāra vai nepāra skaitli,\n";
	std::cout << "Kurš uzvar raundu tas savāc tik daudz bumbiņas no pretinieka cik tika uzlikta likme\n";
	srand(time(NULL));
	int Player1, Player2, Likme1 = 0, Likme2 = 0, Pirmais_start, rand_skaitlis;

	Player1 = 50;
	Player2 = 50;

	Pirmais_start = rand() % 2 + 1;

	if (Pirmais_start == 1)
	{
		std::cout << "Tu pirmais sāc gājienu! \n";
	}
	else
	{
		std::cout << "Tu otrais sāc gājienu! \n";
	}

	while (Player1 > 0 || Player2 > 0)
	{
		Likme2 = rand() % Player1 + 1;
		if (Pirmais_start == 1)
		{
			std::cout << "Ievadi pāra vai nepāra skaitli: ";
			std::cin >> Likme1;
			if (Likme1 % 2 == 0 && Likme2 % 2 == 0)
			{
				std::cout << "================================================= \n";
				std::cout << "Jūsu likme bija " << Likme1 << " bumbiņas(Pāra skaitlis) \n";
				std::cout << "Pretinieka likme bija " << Likme2 << " bumbiņas(Pāra skaitlis) \n";
				std::cout << "Jūs pretiniekam atdevāt " << Likme2 << " bumbiņas! \n";
				Player1 = Player1 - Likme2;
				std::cout << "Jums palika " << Player1 << " bumbiņas \n";
				Player2 = Player2 + Likme2;
				std::cout << "Pretiniekam palika " << Player2 << " bumbiņas \n";
				std::cout << "================================================= \n";
			}
			else if(Likme1 % 2 == 0 && Likme2 % 2 != 0)
			{
				std::cout << "================================================= \n";
				std::cout << "Jūsu likme bija " << Likme1 << " bumbiņas(Pāra skaitlis) \n";
				std::cout << "Pretinieka likme bija " << Likme2 << " bumbiņas(Nepāra skaitlis) \n";
				std::cout << "Pretinieks jums atdeva " << Likme1 << " bumbiņas \n";
				Player2 = Player2 - Likme1;
				Player1 = Player1 + Likme1;
				std::cout << "Jums ir " << Player1 << " bumbiņas \n";
				std::cout << "Pretiniekam ir " << Player2 << " bumbiņas \n";
				std::cout << "================================================= \n";

			}
			else if (Likme1 % 2 != 0 && Likme2 % 2 != 0)
			{
				std::cout << "================================================= \n";
				std::cout << "Pretinieka likme bija " << Likme2 << " bumbiņas(Nepāra skaitlis) \n";
				std::cout << "Jūs pretiniekam atdevāt " << Likme2 << " bumbiņas!(Nepāra skaitlis) \n";
				Player1 = Player1 - Likme2;
				std::cout << "Jums palika " << Player1 << " bumbiņas \n";
				Player2 = Player2 + Likme2;
				std::cout << "Pretiniekam palika " << Player2 << " bumbiņas \n";
				std::cout << "================================================= \n";
			}
			else if (Likme1 % 2 != 0 && Likme2 % 2 == 0)
			{
				std::cout << "================================================= \n";
				std::cout << "Jūsu likme bija " << Likme1 << " bumbiņas(nepāra skaitlis) \n";
				std::cout << "Pretinieka likme bija " << Likme2 << " bumbiņas(Pāra skaitlis) \n";
				std::cout << "Pretinieks jums atdeva " << Likme1 << " bumbiņas \n";
				Player2 = Player2 - Likme1;
				Player1 = Player1 + Likme1;
				std::cout << "Jums ir " << Player1 << " bumbiņas \n";
				std::cout << "Pretiniekam ir " << Player2 << " bumbiņas \n";
				std::cout << "================================================= \n";
			}
			else
			{
				std::cout << "ERROR???";
			}
		}
	}


	
	return 0;
}