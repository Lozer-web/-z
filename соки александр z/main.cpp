#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);


	int choose = 0, choose1 = 0, choose2 = 0, choose3 = 0, choose4 = 0;
	int apple = 0, orange = 0, apricos = 0, pear = 0, tomato = 0, onion = 0, cucumber = 0, garlic = 0, parsley = 0;
	double summa = apple + orange + apricos + pear + tomato + onion + cucumber + garlic + parsley;
	double skidka;

	while (true)
	{
		system("cls");
		std::cout << "\t|Магазин  \"Соки Александра\"\n";
		std::cout << "\t|Категории:\n\n";
		std::cout << "\t|1 - Фруктовые соки\n";
		std::cout << "\t|2 - Овощные соки\n";
		std::cout << "\t|3 - Чаи!!\n";
		std::cout << "\t|4 - Корзина\n";
		std::cout << "\t|Все напитки по литру!!\n\n";
		std::cout << "\t|Выберите вашу категорию товара: ";
		std::cin >> choose;




		if (choose == 1)
		{
			system("cls");
			std::cout << "Вид Фруктового сока:\n";
			std::cout << "1 - Яблочный - 100\n";
			std::cout << "2 - Апельсиновый - 120\n";
			std::cout << "3 - Абрикосовый - 90\n";
			std::cout << "4 - Грушевый - 67\n";
			std::cout << "Напишите номер товара который хотите приобрести: ";
			std::cin >> choose1;
		}
		else if (choose1 == 1)
		{
			system("cls");
			int litrs = 0;

			std::cout << "Вы выбрали яблочный сок. Укажите сколько литров хотите " << apple << " л.\n";
			std::cout << "Введите сколько литров хотите добавить(с минусом если хотите вычесть): ";
			std::cin >> litrs;
			apple += litrs;
			if (apple < 0)
			{
				apple = 0;
			}
			std::cout << "Корзина обновлена! Литров: " << apple << " л.\n";
			system("pause");
		}
		else if (choose1 == 2)
		{
			system("cls");
			int litrs = 0;

			std::cout << "Вы выбрали апельсиновый сок. Укажите сколько литров хотите " << orange << " л.\n";
			std::cout << "Введите сколько литров хотите добавить(с минусом если хотите вычесть): ";
			std::cin >> litrs;
			orange += litrs;
			if (orange < 0)
			{
				orange = 0;
			}
			std::cout << "Корзина обновлена! Литров: " << orange << " л.\n";
			system("pause");



		}
		else if (choose1 == 3)
		{
			system("cls");
			int litrs = 0;

			std::cout << "Вы выбрали абрикосовый сок. Укажите сколько литров хотите " << apricos << " л.\n";
			std::cout << "Введите сколько литров хотите добавить(с минусом если хотите вычесть): ";
			std::cin >> litrs;
			apricos += litrs;
			if (apricos < 0)
			{
				apricos = 0;
			}
			std::cout << "Корзина обновлена! Литров: " << apricos << " л.\n";
			system("pause");



		}
		else if (choose1 == 4)
		{
			system("cls");
			int litrs = 0;

			std::cout << "Вы выбрали грушевый сок. Укажите сколько литров хотите " << pear << " л.\n";
			std::cout << "Введите сколько литров хотите добавить(с минусом если хотите вычесть): ";
			std::cin >> litrs;
			pear += litrs;
			if (pear < 0)
			{
				pear = 0;
			}
			std::cout << "Корзина обновлена! Литров: " << pear << " л.\n";
			system("pause");



		}
		
		if (choose == 2)
		{
			system("cls");
			std::cout << "Виды овощного сока:\n";
			std::cout << "1 - Томатный - 130\n";
			std::cout << "2 - Луковый - 100\n";
			std::cout << "3 - Огуречный - 150\n";
			std::cout << "Напишите номер товара, который вы хотите приобрести: ";
			std::cin >> choose2;
		}
		else if (choose2 == 1)
		{
			system("cls");
			int liters = 0;

			std::cout << "Вы выбрали томатный сок. Укажите сколько литров хотите " << tomato << " л.\n";
			std::cout << "Введите сколько литров хотите добавить(с минусом если хотите вычесть): ";
			std::cin >> liters;
			tomato += liters;
			if (tomato < 0)
			{
				tomato = 0;
			}
			std::cout << "Корзина обновлена! Литров: " << tomato << " л.\n";
			system("pause");
		}
		else if (choose2 == 2)
		{
			system("cls");
			int liters = 0;

			std::cout << "Вы выбрали луковый сок. Укажите сколько литров хотите " << onion << " л.\n";
			std::cout << "Введите сколько литров хотите добавить(с минусом если хотите вычесть): ";
			std::cin >> liters;
			onion += liters;
			if (onion < 0)
			{
				onion = 0;
			}
			std::cout << "Корзина обновлена! Литров: " << onion << " л.\n";
			system("pause");
		}
		else if (choose2 == 3)
		{
			system("cls");
			int liters = 0;

			std::cout << "Вы выбрали огуречный сок. Укажите сколько литров хотите " << cucumber << " л.\n";
			std::cout << "Введите сколько литров хотите добавить(с минусом если хотите вычесть): ";
			std::cin >> liters;
			cucumber += liters;
			if (cucumber < 0)
			{
				cucumber = 0;
			}
			std::cout << "Корзина обновлена! Литров: " << cucumber << " л.\n";
			system("pause");
		}
		
		if (choose == 3)
		{
			system("cls");
			std::cout << "Виды чая:\n";
			std::cout << "1 - Чесночный - 80\n";
			std::cout << "2 - Петрушевый - 90\n";
			std::cout << "Напишите название товара, который хотите приобрести: ";
			std::cin >> choose3;
		}
		else if (choose3 == 1)
		{
			system("cls");
			int litr = 0;

			std::cout << "Вы выбрали чесночный чай. Укажите сколько литров хотите " << garlic << " л.\n";
			std::cout << "Введите сколько литров хотите добавить(с минусом если хотите вычесть): ";
			std::cin >> litr;
			garlic += litr;
			if (garlic < 0)
			{
				garlic = 0;
			}
			std::cout << "Корзина обновлена! Литров: " << garlic << " л.\n";
			system("pause");
		}
		else if (choose3 == 2)
		{
			system("cls");
			int litr = 0;

			std::cout << "Вы выбрали Петрушевый чай. Укажите сколько литров хотите " << parsley << " л.\n";
			std::cout << "Введите сколько литров хотите добавить(с минусом если хотите вычесть): ";
			std::cin >> litr;
			parsley += litr;
			if (parsley < 0)
			{
				parsley = 0;
			}
			std::cout << "Корзина обновлена! Литров: " << parsley << " л.\n";
			system("pause");
		}

		if (choose == 4)
		{
			system("cls");
			std::cout << "Ваша Корзина:\n";
			std::cout << "Яблочный сок - " << apple * 100 << " руб\n";
			std::cout << "Апельсиновый сок - " << orange * 120 << " руб\n";
			std::cout << "Абрикосовый сок - " << apricos * 90 << " руб\n";
			std::cout << "Томатный сок - " << pear * 67 << " руб\n";
			std::cout << "Луковый сок - " << tomato * 130 << " руб\n";
			std::cout << "Огуречный сок - " << onion * 100 << " руб\n";
			std::cout << "Чесночный чай - " << cucumber * 150 << " руб\n";
			std::cout << "Огуречный чай - " << garlic * 80 << " руб\n";
			std::cout << "Петрушевый чай - " << parsley * 90 << " руб\n";
			std::cout << "Общая сумма: " << summa << " руб";
			if (parsley >= 3)
			{
				std::cout << (90 * parsley) * 0.05;
			}
			if (summa > 2500)
			{
				skidka = summa * 0.13;
				summa = summa - skidka;
			}
			system("pause");
		}
	}
	
}