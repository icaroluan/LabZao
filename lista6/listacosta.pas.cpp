    if(estrutura == 10){ return "vai putaa"; }
    Bruno, Clovis, Ley, outras 2 pessoas
    Vinicius, Ley, Icaro

        Celular
        Leandro Ribeiro
        Celular
        Luana Rodrigues

	
	
On-lineCleiton Ferreira
Início da conversa no bate-papo
14 de abril de 2015 20:46
eai jovem
as questoes de fila e aeroporto se tiver alguma duvida me pergunta
filavetor.c
aeroportovetor2.c
21 de abril de 2015 23:32
https://wiki.dcc.ufba.br/OndaDigital/Edital022015
Onda Digital - Seleção de Bolsistas
/* * Color, Border, and Button Rules */ .contentslider { padding: 0; /* This acts as a border for the content slider */ background: none; /* This is the color of said border */ } .cs_wrapper, .cs_article { /* background-color: none; Background color for the entries */ } .cs_leftBtn, .cs_rightBtn { w…
wiki.dcc.ufba.br
há 24 minutos
eai jovem
voce ja fez a lista 6
nem
vo fazer ainda
mas sei como ela é toda
eu sei que é pra amanhã
porra voce fez costa
fiz
mas ta em pascal
tem como voce manda pra mim pra eu dar uma olhada nao vou copiar nao
mando sim
pera
certo
Program costa;
var
a: array[1..1000,1..1000]of char;
i,n,m,j,cont:longint;
Begin

readln(n,m);
	for i:=1 to n do
		begin
				for j:=1 to m-1 do
					read(a[i,j]);
					readln(a[i,m]);
		end;	
	for i:=1 to n do
		begin
			for j:=1 to m do
				begin
					if (a[i,j] = '#') then
						begin
								if(i = 1) or (j = 1) or (i = n) or (j = m) then
									begin
										cont:=cont+1;
									end
								else if (a[i,j] <> a[i+1,j]) or (a[i,j] <> a[i-1,j]) or (a[i,j] <>a[i,j+1]) or (a[i,j] <> a[i,j-1]) then
									begin
										cont:=cont+1;
									end;
						end;
				end;
		end;	
	writeln(cont)
				  
				
				
End.
