// AdventOfCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <tuple>
#include <iostream>


#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
void doNothing() {
    // Empty function body
}
int najdi_special_symbol(string radek) {
    //najdeme zde index specialniho symbolu
    std:string specialChars = "#@%^+&*$";
    for (int c = 0;  c < radek.size();c++) {
        for (char spec : specialChars) {
            if (radek[c] == spec)
            {
                return c;
            }
            else {
                doNothing();            }
        }
    }

}
bool je_numericky(char c){
    if (isdigit(c))
    {
        return true;
    }
    else {
        return false;
    }
}

//pokud index mimo pole, napisu true false
bool je_index_mimo_pole(int indexik) {
    if (0<= indexik <=9)
    {
        return true;
    }
    else {
        return false;
    }
}

int hledani_rodiny_cisla(string radek, int indexik) {
    
    bool je_vpravo_od_ss_v_danem_radku_num_otaznik = je_numericky(radek[indexik+1]);
    bool je_v_miste_v_danem_radku_ss_num_otaznik = je_numericky(radek[indexik]);
    bool je_vlevo_od_ss_v_danem_radku_num_otaznik = je_numericky(radek[indexik-1]);

    //resime pripady sousedu numerickych ci nenumerickych
    if (je_v_miste_v_danem_radku_ss_num_otaznik = false)
    {
        if ( // v radku neni cislo
            (je_vlevo_od_ss_v_danem_radku_num_otaznik = false)
            && (je_vpravo_od_ss_v_danem_radku_num_otaznik = false)
            )
        {
            cout << "V radku neni cislo";
        }
        else if ( // cislo je jak napravo tak nalevo
            (je_vlevo_od_ss_v_danem_radku_num_otaznik = true)
            && (je_vpravo_od_ss_v_danem_radku_num_otaznik = true)
            ) {
            cout << "cislo je napravo a nalevo";
        }
        else if ( // cislo je jen napravo
            (je_vlevo_od_ss_v_danem_radku_num_otaznik = false)
            && (je_vpravo_od_ss_v_danem_radku_num_otaznik = true)
            )
        {
            cout << "cislo je napravo";
        }
        else if ( // cislo je jen nalevo
            (je_vlevo_od_ss_v_danem_radku_num_otaznik = true)
            && (je_vpravo_od_ss_v_danem_radku_num_otaznik = false)
            )
        {
            cout << "cislo je napravo";
        }
    
    }
    else {
          if ( // cislo je jak napravo tak nalevo
              (je_vlevo_od_ss_v_danem_radku_num_otaznik = true)
               && (je_vpravo_od_ss_v_danem_radku_num_otaznik = true)
          ) {
              cout << "cislo je napravo a nalevo a nad takze to je uz cele cislo";
        }
          else if (// nad nalevo a jeste jednou nalevo
              (je_vlevo_od_ss_v_danem_radku_num_otaznik = true)
              && (je_vpravo_od_ss_v_danem_radku_num_otaznik = false)
              )
          else {
            cout << "Cislo je na tom miste napravo a napravo"
          }
    }


}

//hledam okoli, tech 8 tfujki mistecek
int hleadni_okolo_spec_charu(std::vector<string> velkyTfujki) {
    //toto mi prochazi velky ftufjki, a hleda mi index v kazdem stringu = radku spec symbol
    for (int radek = 0; radek < velkyTfujki.size(); radek++)
    {
        int indexikSpecSymbolu = najdi_special_symbol(velkyTfujki[radek]);

        //nad, stejny, pod
        if (radek = 0)
        {
            //to je prvni radek
            string radek_stejny_ss = velkyTfujki[radek];
            string radek_pod_ss = velkyTfujki[radek - 1];

        }
        else if (radek = 9) {
            //posledni radek
            string radek_nad_ss = velkyTfujki[radek + 1];
            string radek_stejny_ss = velkyTfujki[radek];

        }
        else {
            //stredni radky
            string radek_nad_ss = velkyTfujki[radek + 1];
            string radek_stejny_ss = velkyTfujki[radek];
            string radek_pod_ss = velkyTfujki[radek - 1];

        }


       
      








    }

}


int main() {
    std::string tfujki1 = "467..114..";
    std::string tfujki2 = "...*......";
    std::string tfujki3 = "..35..633.";
    std::string tfujki4 = "1";

    std::vector<std::string> velkyTfujki = { tfujki1, tfujki2, tfujki3 };

    for (int i = 0; i < velkyTfujki.size(); i++)
    {
        cout << velkyTfujki[i] << "\n";
    }
    /*cout << najdi_special_symbol(tfujki2);
    for (char i = 0; i < tfujki1.size(); i++)
    {
        cout << je_index_mimo_pole(i) << "\n";
    }
    std::vector<string> velkyTfujki = 
    */
    return 0;
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
