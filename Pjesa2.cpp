void regjistroPjesemarrjen(Studenti &s) {
    do {
        cout << "Shkruaj pjesemarrjen (0-100): ";
        cin >> s.pjesemarrja;
    } while (s.pjesemarrja < 0 || s.pjesemarrja > 100);
}

bool pjesemarrjaELejuar(Studenti s) {
    return s.pjesemarrja >= 75;
}

void futNotat(Studenti &s) {
    for (int i = 0; i < 6; i++) {
        do {
            cout << "Shkruaj noten " << i + 1 << " (0-100): ";
            cin >> s.nota[i];
        } while (s.nota[i] < 0 || s.nota[i] > 100);
    }
}

float llogaritMesataren(Studenti &s) {
    float shuma = 0;
    for (int i = 0; i < 6; i++) {
        shuma += s.nota[i];
    }
    s.mesatarja = shuma / 6;
    return s.mesatarja;
}
