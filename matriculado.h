
//matriculado.h
#include <string>
using namespace std;

class matriculado
{
int tempo;
string nome;
string cadastro;
public:

void cadast(string);
string regis() {return cadastro;}

};


void matriculado::cadast(string cadastr)
{
cadastro = cadastr;


};