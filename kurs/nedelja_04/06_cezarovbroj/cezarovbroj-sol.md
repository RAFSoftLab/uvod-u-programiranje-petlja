Koristićemo funkciju getchar() da prođemo kroz svaki karakter u tekstu koji korisnik unosi. Proveravamo da li je uneti karakter malo slovo engleskog alfabeta, ukoliko jeste, dodajemo 3 na njega. Ukoliko je karakter sada veći od slova 'z' to znači da je došlo do prekoračenja, i da moramo da oduzmemo 26 od trenutnog karaktera, da bismo se vratili na početak alfabeta. Isti postupak ponavljamo i kada je karakter veliko slovo. Na kraju ispisujemo karakter i učitavamo novi sa standardnog ulaza.