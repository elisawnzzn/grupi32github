float llogaritMesataren(Studenti &s) {
    float shuma = 0;
    for (int i = 0; i < 6; i++) {
        shuma += s.nota[i];
    }
    s.mesatarja = shuma / 6;
    return s.mesatarja;
}

bool kalonStudenti(Studenti s) {
    return s.mesatarja >= 50 && pjesemarrjaELejuar(s);
}

void gjeneroRaport(Studenti s) {
    cout << "\n----- RAPORTI I STUDENTIT -----\n";
    cout << "Emri: " << s.emri << endl;
    cout << "ID: " << s.id << endl;
    cout << "Semestri: " << s.semestri << endl;
    cout << "Pjesemarrja: " << s.pjesemarrja << "%" << endl;
    cout << "Notat: ";
    for (int i = 0; i < 6; i++) {
        cout << s.nota[i] << " ";
    }
    cout << endl;
    cout << "Mesatarja: " << s.mesatarja << endl;

    if (kalonStudenti(s))
        cout << "Statusi: STUDENTI KALON\n";
    else
        cout << "Statusi: STUDENTI DESHTON\n";
}
