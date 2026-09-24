//Exercici Pràctic : Escriu un programa que determini si un dígit(0 - 9) és parell o senar amb les següents
//condicions :
//1. Utilitza la classe std::string per definir dos textos : "parell" i "senar".
//2. En iniciar el programa, crea un vector dinàmic de booleans amb bool* elMeuVector = new bool[10]; i
//calcula si els números de 0 a 9 són parells o senars.
//3. Demana un número a l'usuari per comprovar dins d'un bucle infinit while (true).

#include <iostream>
#include <string>

int main() {
    std::string parell = "parell";
    std::string senar = "senar";

    bool* elMeuVector = new bool[10];
    for (int i = 0; i < 10; i++) {
        elMeuVector[i] = (i % 2 == 0);
    }

    while (true) {
        int num;
        std::cout << "Introdueix un digit (0-9): ";
        std::cin >> num;

        if (elMeuVector[num]) {
            std::cout << num << " es " << parell << std::endl;
        }
        else {
            std::cout << num << " es " << senar << std::endl;
        }
    }

    return 0;
}
