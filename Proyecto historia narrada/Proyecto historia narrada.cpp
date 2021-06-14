// Proyecto historia narrada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int respu = 0;
    string nombre[1];
    string nombre_1 = "Felipe";
    string nombre_2[1];
    string nombre_3[1];
    string nombre_4[1];
    string nombre_5 = "melanie";
    string respuesta;
    string res = "1";
    string res_2 = "2";
    string res_3 = "1";
    string respuesta_correcta = "Quiere unirse con nosotros?";
    string respuesta_correcta_2 = "quiere unirse con nosotros";
    string respuesta_correcta_3 = "Quiere unirse con nosotros";
    string respuesta_correcta_4 = "quiere unirse con nosotros?";
    string respuesta_correcta_5 = "nose";
    string respuesta_correcta_6 = "Nose";
    string respuesta_correcta_7 = "quiere unirse a nosotros";
    string respuesta_correcta_8 = "quiere unirse a nosotros?";
    string respuesta_correcta_9 = "Quiere unirse a nosotros";
    string respuesta_correcta_10 = "Quiere unirse a nosotros?";
    for (int i = 0; i < 1; i++)
    {
        cout << "El mundo a sido devastado por una invasion de muertos vivientes... han pasado 5 anios desde que inicio, tu y tu pequenia comunidad estan en un pueblo donde las cosas pueden tornarse muy feas con una simple accion o decision..." << endl;
        cout << "Como te gustaria que te llamaran en este pequenia aventura?" << endl;
        getline(cin, nombre[i]);
        cout << "*comienza*" << endl;
        cout << "Hey!" << endl;
        cout << "Hey!" << endl;
        cout << "*esfuerzos de despertar*" << endl;
        cout << "Hey por fin despiertas " << nombre[i] << ", relajate soy yo, Felipe, tu viejo amigo, te recuerdo que no podemos quedarnos dormidos mucho tiempo... todos tenemos que estar haciendo guardia de vez en cuando" << endl;
        cout << "En fin dejando de lado todo eso, tenemos una pequenia visita" << endl;
        cout << "*caminan*" << endl;
        cout << "Esta tipa estaba afuera, dice que se llama melanie y estaba pidiendo ayuda que por que tiene algun problema con la misma comunidad que nos esta causando problemas a nosotros, aparte nos pidio un favor, sabes que fue???" << endl;
        getline(cin, respuesta);
        if (respuesta_correcta == respuesta)
        {
            cout << "Exacto, tienes una buena intuicion" << endl;
        }
        if (respuesta_correcta_2 == respuesta)
        {
            cout << "Exacto, tienes una buena intuicion" << endl;
        }
        if (respuesta_correcta_3 == respuesta)
        {
            cout << "Exacto, tienes una buena intuicion" << endl;
        }
        if (respuesta_correcta_4 == respuesta)
        {
            cout << "Exacto, tienes una buena intuicion" << endl;
        }
        if (respuesta_correcta_5 == respuesta)
        {
            cout << "Bueno, ella quiere unirse con nosotros" << endl;
        }
        if (respuesta_correcta_6 == respuesta)
        {
            cout << "Bueno, ella quiere unirse con nosotros" << endl;
        }
        if (respuesta_correcta_7 == respuesta)
        {
            cout << "Exacto, tienes una buena intuicion" << endl;
        }
        if (respuesta_correcta_8 == respuesta)
        {
            cout << "Exacto, tienes una buena intuicion" << endl;
        }
        if (respuesta_correcta_9 == respuesta)
        {
            cout << "Exacto, tienes una buena intuicion" << endl;
        }
        if (respuesta_correcta_10 == respuesta)
        {
            cout << "Exacto, tienes una buena intuicion" << endl;
        }
        else
        {
            cout << "Te equivocas, ella quiere unirse a nosotros" << endl;
        }
        cout << "-en este momento viene una decision a tomar que cambiara el camino de tu historia-" << endl;
        cout << "Bien " << nombre[i] << ", que decides?, ella dice que sabe armar bombas, cocinar y usar bien todo tipo de armas" << endl; 
        cout << "1.- Puedes quedarte con nosotros 2.- No puedes quedarte con nosotros, lo siento..." << endl;
        getline(cin, respuesta);
        if (respuesta == res)
        {
            cout << "Ok, le explicare como funcionan las cosas aqui y todo lo demas, espero sea buena idea..." << endl;
            cout << "Bien, estoy preparando el equipo para ir a destruir a la comunidad hostil, tenemos que detener a esos canivales, no queremos que lastimen a mas gente y a los nuestros primero que nada, llevate a melanie contigo" << endl;
            cout << "*estando ya en la base enemiga entraste y se escucha un ruido de fondo, encontraste a uno de los canivales muriendo...*" << endl;
            cout << "Melanie: Dios mio..." << endl;
            cout << "Extranio: hola melanie y " << nombre[i] << ", vaya a pasado un tiempo... " << endl;
            cout << "*El extranio conoce a melanie, a ti ya desde hace un tiempo*" << endl;
            cout << "En este momento la decision que escojas sera la final... pero tendra diferentes efectos en melanie, tu comunidad y en ti" << endl;
            cout << "Extranio: veo que tienes una muy hermosa arma contigo... puedo usarla para acabar conmigo?" << endl;
            cout << "Le daras tu arma? o lo mataras?" << endl;
            cout << "1.- Dispararle 2.- Darle el arma" << endl;
            cin >> respu;
            switch (respu)
            {
            case 1:
                cout << "Pum..., *le has disparado al extranio*" << endl;
                cout << "Melanie: era... mi padre..." << endl;
                cout << "Escape... por que tenia miedo de el pero, no pense que me doleria ver esto..." << endl;
                cout << "*vuelven a la base*" << endl;
                cout << "*Todos te observan junto con melanie*" << endl;
                cout << "Tu comunidad sabe que los fuiste a liquidar, pero viendo la expresion de melanie, piensan cosas malas" << endl;
                cout << "Ahora esta es una pregunta para tu cabeza... crees que las decisiones que tomaste, estuvieron bien?" << endl;
                break;
            case 2:
                cout << "*le diste el arma y disparo hacia melanie...*" << endl;
                cout << "De un modo u otro... la salve de tener que vivir en este mundo..., mi pequenia hija malcriada... -el extranio era el padre de melanie- *muere lentamente...*" << endl;
                cout << "*regresas*" << endl;
                cout << "*Todos te observan sin melanie*" << endl;
                cout << "Tu comunidad sabe que los fuiste a liquidar, pero ven que vienes solo cuando te llevaste a melanie..., te ven raro y te empezaran a preguntar mientras te preguntan que paso???..." << endl;
                cout << "Ahora esta es una pregunta para tu cabeza... crees que las decisiones que tomaste, estuvieron bien?" << endl;
            }
           
        }
        else if (respuesta == res_2)
        {
            cout << "Esta bien, tu decides despues de todo..." << endl;
            cout << "Bien, ya tengo las cosas para ir y terminar con ellos, ire contigo" << endl;
            cout << "*estando ya en la base enemiga entraste y se escucha un ruido de fondo, encontraste a melanie, asesino a un zombie que pertencia a los canivales, pero a costa de matarlo ella fue mordida varias veces, esta muriendo...*" << endl;
            cout << "Felipe: Madre mia... es melanie" << endl;
            cout << "Melanie: hola Felipe y " << nombre[i] << ", opte mejor por venir a acabr con mi padre y su comunidad e inicar de nuevo, me dolio matar a mi padre y aparte me mordio varias veces... " << endl;
            cout << "*Melanie pertenecia a este comunidad, quizo huir, pero al no aceptarla, se frusto y no penso con claridad*" << endl;
            cout << "En este momento la decision que escojas sera la final... pero tendra diferentes efectos en Felipe, tu comunidad y en ti" << endl;
            cout << "Melanie: " << nombre[i] << " veo que tienes tu arma contigo... puedo dispararme?" << endl;
            cout << "Le daras tu arma? o tu acabaras con su sufrimiento?" << endl;
            cout << "1.- Dispararle 2.- Darle el arma" << endl;
            cin >> respu;
            switch (respu)
            {
            case 1:
                cout << "Pum..., *le has disparado a melanie*" << endl;
                cout << "Felipe: Oh maldita sea..., por que paso esto?..." << endl;
                cout << "*vuelven a la base*" << endl;
                cout << "*Todos te observan junto con Felipe*" << endl;
                cout << "Tu comunidad sabe que los fuiste a liquidar, pero viendo la expresion de Felipe, piensan que algo malo paso" << endl;
                cout << "Ahora esta es una pregunta para tu cabeza... hiciste bien?" << endl;
                break;
            case 2:
                cout << "*le diste el arma a melanie, disparo hacia Felipe...*" << endl;
                cout << "Te pude haber disparado a ti, pero que mejor venganza que hacerte sufrir mentalmente... *muere lentamente...*" << endl;
                cout << "*vuelves a la base*" << endl;
                cout << "*Todos te observan sin Felipe, tu viejo amigo*" << endl;
                cout << "Tu comunidad sabe que los fuiste a liquidar, pero ven que vienes sin compania..., te ven raro y te empezaran a preguntar mientras sigues en shock..." << endl;
                cout << "Ahora esta es una pregunta para tu cabeza... Hiciste bien?" << endl;
        }
    }
}   