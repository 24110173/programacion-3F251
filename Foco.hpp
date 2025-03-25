class Foco
{
private:
bool estadoActual;
public:
Foco() {
    estadoActual = false;
}
void Encender()
{
    estadoActual = true;
}
void Apagar()
{
estadoActual = false;
}
bool LeerEstado()
{
    return estadoActual;
}

};