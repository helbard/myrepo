#ifndef CLASS_H
#define CLASS_H

class EineKlasse
{
  public:                              // öffentlich
    EineKlasse();                      // der Default-Konstruktor
    EineKlasse(int a=0, int b=0);               // weiterer Konstruktor mit Parameter und Defaultwert
    EineKlasse(const EineKlasse& a);   // Copy-Konstruktor
    ~EineKlasse();                     // der Destruktor

    int eineFunktion(int x=42, int y=43);        // eine Funktion mit einem (Default-) Parameter

  private:                             // privat
    int m_eineVariable;
};

#endif // CLASS_H
