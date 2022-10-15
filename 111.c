void *comer_burger(void *tid)
while (turno == tid)
{
    if (cantidad_restante > 0)
    {   
        if (tid == 0)
        {
            printf((*hola soy comensal1) %d , me voy a comer una burger, todavia queda/n %d \n*, tid, cantidad_restante);
            cantidad_restante--; //me comi una
            turno = 1;
        }

        else
        {
            printf((*hola soy comensal1) %d , me voy a comer una burger, todavia queda/n %d \n*, tid, cantidad_restante);
            cantidad_restante--; //me comi una
            turno = 0;
        }
    }

    else
    {
        if (tid == 0)
        {
            printf(* SE TERMINARON LAS BURGER :( \n*)ñ
            turno = 1;
        }
        else
        {
            printf(* SE TERMINARON LAS BURGER :( \n*)ñ
            turno = 0;
        }
        pthread_exit(NULL);
    }

}