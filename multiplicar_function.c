int multiplicar(int numero1,int numero2)
{
    int contador1 = 0; 
    int contador2 = 0; 
    int produto = 0; 

    while (contador1 < numero1){ 
        contador2 = 0; 
        while (contador2 < numero2){ 
            produto++; // produto = produto + 1; 
            contador2++;    
        } 
        contador1++;     
    }
    return produto;
}
