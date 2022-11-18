#include <iostream>

int main() {
	int sayi;
	int onlar;
	int yuzler;
	std::cout << "Bir Sayı Girin: " << std::endl;
	std::cin >> sayi;

	if(sayi < 0 or sayi > 999){
		std::cout << "0 ile 999 arasında bir sayı giriniz." << std::endl;

	}

	if(sayi == 0){
		std::cout << "Sıfır" << std::endl;
	}

	if(sayi > 99 and sayi < 1000){
		yuzler = sayi / 100;
		switch(yuzler) {
		case 2:
			std::cout << "İki";
			break;
		case 3:
			std::cout << "Üç";
			break;
		case 4:
			std::cout << "Dört";
			break;
		case 5:
			std::cout << "Beş";
			break;
		case 6:
			std::cout << "Altı";
			break;
		case 7:
			std::cout << "Yedi";
			break;
		case 8:
			std::cout << "Sekiz";
			break;
		case 9:
			std::cout << "Dokuz";
			break;
		default:
			break;

		}
		std::cout << "Yüz ";
		sayi = sayi - (yuzler * 100);
	}
	if (sayi > 9 and sayi < 100){
		onlar = sayi / 10;
		switch(onlar) {
				case 1:
					std::cout << "On ";
					break;
				case 2:
					std::cout << "Yirmi ";
					break;
				case 3:
					std::cout << "Otuz ";
					break;
				case 4:
					std::cout << "Kırk ";
					break;
				case 5:
					std::cout << "Elli ";
					break;
				case 6:
					std::cout << "Altmış ";
					break;
				case 7:
					std::cout << "Yetmiş ";
					break;
				case 8:
					std::cout << "Seksen ";
					break;
				case 9:
					std::cout << "Doksan ";
					break;
				default:
					break;

				}
		sayi = sayi - (onlar * 10);

	}
	if(sayi > 0 and sayi < 10){
		switch(sayi){
				case 1:
					std::cout << "Bir";
					break;
				case 2:
					std::cout << "İki";
					break;
				case 3:
					std::cout << "Üç";
					break;
				case 4:
					std::cout << "Dört";
					break;
				case 5:
					std::cout << "Beş";
					break;
				case 6:
					std::cout << "Altı";
					break;
				case 7:
					std::cout << "Yedi";
					break;
				case 8:
					std::cout << "Sekiz";
					break;
				case 9:
					std::cout << "Dokuz";
					break;
				default:
					break;
		}
	}
	return 0;
}




























