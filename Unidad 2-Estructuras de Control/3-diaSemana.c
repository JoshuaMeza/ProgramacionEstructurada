/*
Titulo:3-diaSemana.c
Autor: Carlos Alejandro Pool Quintal


		if ( numero ==1){ /*Ahora se pregunta si es la primera respuesta posible*/
			printf ("El dia es Lunes."); /*En caso de que sea se imprime el resultado*/
		}else{
			if ( numero ==2){
				printf ("El dia es Martes.");
			}else{
				if ( numero ==3){
					printf ("El dia es Miercoles.");
				}else{
					if ( numero ==4){
						printf ("El dia es Jueves.");
					}else{
						if ( numero ==5){
							printf ("El dia es Viernes.");
						}else{
							if ( numero ==6){
								printf ("El dia Sabado.");
							}else{
								printf ("El dia es Domingo."); /*Debido a que no queda otra respuesta posible se coloca la que queda, en este caso el domingo*/
							}
						}
					}
				}
			}
		}
	}else{
		printf ("El numero ingresado no es valido"); /*En caso de que no sea el correcto se avisa (Salida)*/
	}
return 0;
}