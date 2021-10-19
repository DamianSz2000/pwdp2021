disp("Objetosc ziarnka ryzu: 7.5*10^-8 m^3")
disp("Ilosc czasteczek: 2.69*10^25")
disp("Promien ziemi: 6.371009*10^6 m")
r = 6.371009*10^6;
disp("Objetosc czasteczek po zamianie w ryz (m^3): ")
x = (2.69*10^25)*(7.5*10^-8);
disp(x)
disp("Objetosc ziemi (m^3): ")
y = (4/3)*pi*r^3;
disp(y)
disp("Suma objetosci (m^3): ")
v = x+y;
disp(v)
disp("Teraz wyznaczamy R calej objetosci ze wzoru na objetosc kuli (m)")
R = ((3*v)/(4*pi))*(1/3);
disp(R)
disp("Teraz promien calkowity odjac promien ziemii da wysokosc warstwy ryzu (m):")
h = R-r;
disp(h)



