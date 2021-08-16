class Automata
{
private:+
    int tam_alfabeto;
	int No_estados;
    char conjunto_Estados[No_estados];        // pueden ser 1,2,3.. A,B,C...
    char estado_Inicial;
    char estado_Aceptacion;
public:
	//metodos
    void obten_lenguaje();
    int verifica_cadena(string cadena, int);
    int transiciona(char caracter_Actual, char* conjunto_Estados);
    Automata(int tam_alfabeto, int No_estados, char* conjunto_Estados, char estado_Inicial, char estado_Aceptacion);
};

class AutoDeterminista : public Automata
{
private:
    char alfabeto[tam_alfabeto];    //en cada posición el símbolo 1 ó 0; a o b
    char funcion[No_estados][tam_alfabeto];
public:
    Automata(int No_estados, char* conjunto_Estados, char estado_Inicial, char estado_Aceptacion){char alfabeto[] = alfabeto[tam_alfabeto]; char funcion[No_estados][tam_alfabeto]=funcion[No_estados][tam_alfabeto];}
};

class AutoNoDeterminista : public Automata
{
private:
    char alfabeto[tam_alfabeto+1];    //en cada posición el símbolo 1 ó 0; a o b. Se considera E
    char funcion[No_estados][tam_alfabeto+1];
public:
    Automata(int No_estados, char* conjunto_Estados, char estado_Inicial, char estado_Aceptacion){char alfabeto[] = alfabeto[tam_alfabeto+1]; char funcion[No_estados][tam_alfabeto+1]=funcion[No_estados][tam_alfabeto+1];}
};