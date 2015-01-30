float somma(float a, float b) {
    float risultato;
    risultato = a+b;
    return risultato;
}

float sottrazione(float a, float b) {
    float risultato;
    risultato = a-b;
    return risultato;
}

float prodotto(float a, float b) {
    float risultato;
    risultato = a*b;
    return risultato;
}

float divisione(float a, float b) {
    float risultato;
    risultato = a/b;
    return risultato;
}

int quoziente(int a, int b) {
    int risultato;
    risultato = a/b;
    return risultato;
}

float frazionale(int a, int b) {
    int q;
    float d, risultato;
    q = quoziente(a,b);
    d = divisione((float)a, (float)b);
    risultato = d - q;
    return risultato;
}

float potenza(float base, int esponente) {
    float risultato;
    risultato = 1;
    while(esponente > 0) {
        risultato *= base;
        esponente--;
    }
    return risultato;
}
