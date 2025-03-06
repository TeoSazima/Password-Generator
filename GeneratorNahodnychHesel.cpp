#include <iostream>
#include <cstdlib>
#include <ctime>


using std::cout;
using std::cin;

int main()
{
   
    int delkaHesla = 0;
    bool HDelkaPass = false;

    int  typHesla = 0;
    bool HTypPass = false;

    char jednotkaHesla = '0';
    int nahodneCislo = 0;
    char heslo[30] = {};
    int indexHesla = 1;


    srand(time(NULL));

    cout << "Vitejte v nahodnem generatoru hesel. \n";
    cout << "Nize si muzete zvolit specifikace hesla.\n\n";

    while (HDelkaPass == false) {

        cout << "Nini si zvolte delku hesla.\n";
        cin >> delkaHesla;
        std::cin.clear();
        std::cin.ignore();
        
        if (delkaHesla <= 0 || delkaHesla >= 30) {

            cout << "Zadejte prosim delku hesla 1 - 30.\n\n";

        }
        else
        {
            HDelkaPass = true;

        }
    }
        
    while (HTypPass == false) {

        cout << "Nini si zvolte typ generace hesla.\n\n";
        
        cout << "1. Pouze cisla\n";
        cout << "2. Cisla i mala pismena\n";
        cout << "3. Cisla velka i mala pismena\n";
        cout << "4. Cisla velka i mala pismena, specialni znaky\n\n";

        cout << "Zadejte prosim cislo 1-4\n";
        cin >> typHesla;
        std::cin.clear();
        std::cin.ignore();

        if (typHesla <= 0 || typHesla >= 5)
        {

            cout << "Zadali jste neplatnou hodnotu";

        }
        else
        {

            HTypPass = true;

        }

        cout << "Zadali jste delku " << delkaHesla << " a typ generovani " << typHesla << "\n";
        cout << "Heslo se zacne generovat po stisknuti libovolne klavesy...\n";
        system("pause");
        system("cls");

    }

    if (typHesla == 1) {

        for (int i = 0; i < delkaHesla; i++)
        {
            nahodneCislo = (rand() % 10) + 48;
            heslo[indexHesla] = nahodneCislo;

            indexHesla++;

        }

        indexHesla = 1;

        cout << "Helso bylo uspesne vygenerovano.\n";

        for (int i = 0; i < delkaHesla; i++)
        {
            cout << heslo[indexHesla];
            indexHesla++;
        }

        cout << "\n\n";
    }

    if (typHesla == 2) {

        for (int i = 0; i < delkaHesla; i++)
        {

            nahodneCislo = (rand() % 2) + 1;

            if (nahodneCislo == 1)
            {
                nahodneCislo = (rand() % 10) + 48;
                heslo[indexHesla] = nahodneCislo;

                indexHesla++;

            }

            if (nahodneCislo == 2)
            {

                nahodneCislo = (rand() % 25) + 97;
                heslo[indexHesla] = nahodneCislo;

                indexHesla++;

            }



        }

        indexHesla = 1;

        cout << "Helso bylo uspesne vygenerovano.\n";

        for (int i = 0; i < delkaHesla; i++)
        {
            cout << heslo[indexHesla];
            indexHesla++;
        }

        cout << "\n\n";
    
    }
    
    if (typHesla == 3) {

        for (int i = 0; i < delkaHesla; i++)
        {

            nahodneCislo = (rand() % 3) + 1;

            if (nahodneCislo == 1)
            {
                nahodneCislo = (rand() % 10) + 48;
                heslo[indexHesla] = nahodneCislo;

                indexHesla++;

            }
            
            if (nahodneCislo == 2)
            {

                nahodneCislo = (rand() % 25) + 65;
                heslo[indexHesla] = nahodneCislo;

                indexHesla++;


            }
            
            
            if (nahodneCislo == 3)
            {

                nahodneCislo = (rand() % 25) + 97;
                heslo[indexHesla] = nahodneCislo;

                indexHesla++;

            }
            
            

        }

        indexHesla = 1;

        cout << "Helso bylo uspesne vygenerovano.\n";

        for (int i = 0; i < delkaHesla; i++)
        {
            cout << heslo[indexHesla];
            indexHesla++;
        }

        cout << "\n\n";
    }

    if (typHesla == 4) {

        for (int i = 0; i < delkaHesla; i++)
        {
            nahodneCislo = (rand() % 92) + 33;
            heslo[indexHesla] = nahodneCislo;

            indexHesla++;

        }

        indexHesla = 1;

        cout << "Helso bylo uspesne vygenerovano.\n";

        for (int i = 0; i < delkaHesla; i++)
        {
            cout << heslo[indexHesla];
            indexHesla++;
        }

        cout << "\n\n";
    }


}
