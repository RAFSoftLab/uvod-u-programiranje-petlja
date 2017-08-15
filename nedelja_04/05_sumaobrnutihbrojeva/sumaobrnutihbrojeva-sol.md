## Analiza
Koristicemo funkciju getchar() da prodjemo kroz svaki karakter u tekstu koji korisnik unosi. Potrebna nam je dodatna promenljiva last koja je oznacavati karakter koji je unet pre trenutnog. Takodje nam je potrebna promenljiva broj koja ce oznacavati trenutni broj u tekstu, i promenljiva suma koja ce oznacavati trazeni zbir.
U while petlji, koja ce se vrtiti sve dok korisnik ne unese '\n' (enter), u kojoj cemo proci kroz ceo tekst, proveriti da li je ucitani karakter cifra, ukoliko jeste dodajemo tu cifru na trenutni broj ( broj = broj * 10 + c-'0'). Ukoliko nije, to znaci da se doslo do poslednje cifre trenutnog broja, pa je potrebno obrnuti trenutni broj, i dodati ga sumi( suma+=obrni(broj) ), da bismo na kraju imali sumu svih obrnutih brojeva u tekstu. Takodje je potrebno vratiti broj na nulu, jer broj cine samo cifre od 0 do 9, a mi smo naisli na karakter koji nije cifra. Kada smo ispitali karakter, potrebno je oznaciti da je taj karakter zadnji unet pre trenutnog, i ucitati novi( last=c, c=getchar() ).
Poseban slucaj: abc123de234
Nakon izlaska iz while petlje, promenljiva last ce imati stvarnu vrednost poslednjeg unetog karaktera, jer ce promenljiva c biti jednaka '\n'. U ovom slucaju last=4, c='\n', Potrebno je ispitati da li je karakter last cifra, ukoliko jeste, moramo uracunati u sumu i taj poslednji broj(234), s toga cemo obrnuti taj broj i dodati ga sumi. Na standardnom izlazu potrebno je ispisati trazenu sumu. 