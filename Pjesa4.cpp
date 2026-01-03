int main() {
    Studenti s;

    futTeDhenaStudenti(s);

    if (!eshteIRegjistruar(s)) {
        cout << "Te dhenat e regjistrimit jane te pavlefshme.\n";
        return 0;
    }

    regjistroPjesemarrjen(s);

    if (!pjesemarrjaELejuar(s)) {
        cout << "Pjesemarrja nuk eshte e mjaftueshme.\n";
    }

    futNotat(s);
    llogaritMesataren(s);

    while (!kalonStudenti(s)) {
        cout << "Studenti nuk i ploteson kushtet. Shkruaj notat perseri.\n";
        futNotat(s);
        llogaritMesataren(s);
    }

    gjeneroRaport(s);

    return 0;
}
