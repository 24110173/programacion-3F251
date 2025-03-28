#pragma once

class Foco
{
private:
bool encendido;
public:
Foco() {
    encendido = false;
}
void Encender()
{
    encendido = true;
}
void Apagar()
{
encender = false;
}
char LeerEstado()
{
    if (encendido)
    return "*";
    else
    return "o";
}

};