#include "miniwin.h"
#define LONGITUD 10
#define DISPARA = ' '

#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include"MMSystem.h"

using namespace miniwin;
using namespace std;
int nx, ny, ny2 , bx , by, rt;
int qx, qy ,ww1 , ww2, ww3 , d=0;

void nave(int dx){
    int x1,x2,y1,y2;
//Linea 1
x1 = (dx+1) * LONGITUD;
y1 = LONGITUD+280;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD+10; //longitud de cada cuadrado     
    
color_rgb(255, 255, 255); //turquesa
rectangulo_lleno(x1,y1,x2,y2);


//Linea 2
x1 = (dx-2)* LONGITUD;
y1 = 2*LONGITUD+280;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD+20; //longitud de cada cuadrado     
    
color_rgb(0, 7, 255);    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 3:case 6:
			color_rgb(255, 255, 255); break;
		case 2:case 4:
			color_rgb(180, 171, 169); break;
		default:
			color(NEGRO); break;
			
	}

rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}

//Linea 3
x1 = (dx-2) * LONGITUD;
y1 = 3*LONGITUD+300;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 3:case 6:
			color_rgb(255, 255, 255); break;
		case 2:case 4:
			color_rgb(180, 171, 169); break;
		default:
			color_rgb(255, 255, 255); break;
			
	}
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
//Linea 3
x1 = (dx-2) * LONGITUD;
y1 = 4*LONGITUD+300;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    color_rgb(180, 171, 169); //turquesa
for(int i=0; i<7; i++){
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
//Linea 4
x1 = (dx-1) * LONGITUD;
y1 = 5*LONGITUD+300;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    
for(int i=0; i<5; i++){
	if(i == 2){
		color_rgb(255, 255, 255);
	}else{
		color_rgb(255, 255, 255); //turquesa
	}
	
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}

//Linea 5
x1 = (dx-2) * LONGITUD;
y1 = 6*LONGITUD+300;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(255, 0, 7);    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 6:
			color_rgb(180, 171, 169); break;
		case 2:case 4:case 3:
			color_rgb(180, 171, 169); break;
		default:
			color_rgb(255, 255, 255); break;
			
	}
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;	
}


//Linea 6
x1 = (dx-2) * LONGITUD;
y1 = 7*LONGITUD+300;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(180, 171, 169);    
for(int i=0; i<7; i++){

rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}



//Linea 7
x1 = (dx-1) * LONGITUD;
y1 = 5*LONGITUD+320;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    
for(int i=0; i<5; i++){
	if(i == 2){
		color_rgb(255, 255, 255);
	}else{
		color_rgb(0, 0, 0); //turquesa
	}
	
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
  
}








void nave2(int dx){
    int x1,x2,y1,y2;
//Linea 1
x1 = (dx+1) * LONGITUD;
y1 = LONGITUD+80;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(255, 255, 255); //turquesa
rectangulo_lleno(x1,y1,x2,y2);
qx = x1;
qy = y1;

ny2 = y2;

//Linea 2
x1 = (dx-2)* LONGITUD;
y1 = 2*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
//color_rgb(0, 7, 255);  
color_rgb(255,255, 255);    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 3:case 6:
			color_rgb(255, 7, 7); break;
		case 2:case 4:
			color_rgb(255, 255, 0); break;
		default:
			color(NEGRO); break;
			
	}

rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}

//Linea 3
x1 = (dx-2) * LONGITUD;
y1 = 3*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 3:case 6:
			color_rgb(7, 7, 255); break;
		case 2:case 4:
			color_rgb(7, 7, 255); break;
		default:
			color(ROJO); break;
			
	}
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
//Linea 3
x1 = (dx-2) * LONGITUD;
y1 = 4*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD+1; //longitud de cada cuadrado     
    
    color_rgb(0, 7, 255); //turquesa
for(int i=0; i<7; i++){
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
//Linea 4
x1 = (dx-1) * LONGITUD;
y1 = 5*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD+10; //longitud de cada cuadrado     
    
    
for(int i=0; i<5; i++){
	if(i == 2){
		color_rgb(0, 7, 255);
	}else{
		color_rgb(0, 7, 255); //turquesa
	}
	
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}

//Linea 5
x1 = (dx-2) * LONGITUD;
y1 = 6*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD+10; //longitud de cada cuadrado     
    
color_rgb(255, 0, 7);    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 6:
			color_rgb(255, 7, 7); break;
		case 2:case 4:case 3:
			color_rgb(7, 255, 7); break;
		default:
			color(AZUL); break;
			
	}
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;	
}


//Linea 6
x1 = (dx-2) * LONGITUD;
y1 = 7*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(255, 7, 7);    
for(int i=0; i<7; i++){

rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
  
}












void nave3(int dx){
    int x1,x2,y1,y2;
//Linea 1
x1 = (dx+12) * LONGITUD;
y1 = LONGITUD+80;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(255, 7, 7); //turquesa
rectangulo_lleno(x1,y1,x2,y2);

ny = y1;

//Linea 2
x1 = (dx+9)* LONGITUD;
y1 = 2*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(0, 7, 255);    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 3:case 6:
			color_rgb(255, 7, 7); break;
		case 2:case 4:
			color_rgb(0, 0, 0); break;
		default:
			color(NEGRO); break;
			
	}

rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}

//Linea 3
x1 = (dx+9) * LONGITUD;
y1 = 3*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 3:case 6:
			color_rgb(7, 7, 255); break;
		case 2:case 4:
			color_rgb(7, 7, 255); break;
		default:
			color(ROJO); break;
			
	}
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
//Linea 3
x1 = (dx+9) * LONGITUD;
y1 = 4*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    color_rgb(0, 7, 255); //turquesa
for(int i=0; i<7; i++){
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
//Linea 4
x1 = (dx+10) * LONGITUD;
y1 = 5*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    
for(int i=0; i<5; i++){
	if(i == 2){
		color_rgb(0, 7, 255);
	}else{
		color_rgb(0, 7, 255); //turquesa
	}
	
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}

//Linea 5
x1 = (dx+9) * LONGITUD;
y1 = 6*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(255, 0, 7);    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 6:
			color_rgb(255, 7, 7); break;
		case 2:case 4:case 3:
			color_rgb(7, 255, 7); break;
		default:
			color(AZUL); break;
			
	}
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;	
}


//Linea 6
x1 = (dx+9) * LONGITUD;
y1 = 7*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(255, 7, 7);    
for(int i=0; i<7; i++){

rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
} 
}














void nave4(int dx){
    int x1,x2,y1,y2;
//Linea 1
x1 = (dx+21) * LONGITUD;
y1 = LONGITUD+80;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(255, 7, 7); //turquesa
rectangulo_lleno(x1,y1,x2,y2);

//Linea 2
x1 = (dx+18)* LONGITUD;
y1 = 2*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(0, 7, 255);    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 3:case 6:
			color_rgb(255, 7, 7); break;
		case 2:case 4:
			color_rgb(0, 0, 0); break;
		default:
			color(NEGRO); break;
			
	}

rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}

//Linea 3
x1 = (dx+18) * LONGITUD;
y1 = 3*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 3:case 6:
			color_rgb(7, 7, 255); break;
		case 2:case 4:
			color_rgb(7, 7, 255); break;
		default:
			color(ROJO); break;
			
	}
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
//Linea 3
x1 = (dx+18) * LONGITUD;
y1 = 4*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    color_rgb(0, 7, 255); //turquesa
for(int i=0; i<7; i++){
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}
//Linea 4
x1 = (dx+19) * LONGITUD;
y1 = 5*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
    
for(int i=0; i<5; i++){
	if(i == 2){
		color_rgb(0, 7, 255);
	}else{
		color_rgb(0, 7, 255); //turquesa
	}
	
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;
}

//Linea 5
x1 = (dx+18) * LONGITUD;
y1 = 6*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(255, 0, 7);    
for(int i=0; i<7; i++){
	switch(i){
		case 0:case 6:
			color_rgb(255, 7, 7); break;
		case 2:case 4:case 3:
			color_rgb(7, 255, 7); break;
		default:
			color(AZUL); break;
			
	}
rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;	
}


//Linea 6
x1 = (dx+18) * LONGITUD;
y1 = 7*LONGITUD+10;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD; //longitud de cada cuadrado     
    
color_rgb(255, 7, 7);    
for(int i=0; i<7; i++){

rectangulo_lleno(x1,y1,x2,y2);
x1 = x1 + LONGITUD;
x2 = x2 + LONGITUD;

nx = x1;
ny = y1;

}
    refresca(); 
}












 



void nave5(int dx, int dy){
    int x1,x2,y1,y2;
                              //LA BALA
x1 = (dx+1) * LONGITUD;
y1 = LONGITUD+290-dy;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD+10; //longitud de cada cuadrado     
    
color_rgb(255, 255, 255); //turquesa
rectangulo_lleno(x1,y1,x2,y2);

bx = x1;
by = y1;
}


void nave6(int dx){
int x1,x2,y1,y2;
x1 = 150;
y1 = 100;
x2 = x1 + LONGITUD;
y2 = y1 + LONGITUD+10; 
color_rgb(255, 255, 255); 
rectangulo_lleno(x1,y1,x2,y2);

}








int main(){
    vredimensiona(850,600);
    int v =100, z=10;
    int t = tecla();
    int x = 10, y = 10;
    int p=0,di=5,to=10,t1,t2,t3;
     int i=10;
     int p1,p2,di1,di2,to1,to2; 
    
    nave(x);
    nave2(p);
    nave3(di);
    nave4(to);
      
	refresca();
	espera(10);
	borra();
		
	
    while(t != ESCAPE){  
      
       if( t == DERECHA ){
           x++;    
           nave(x);
           refresca();
           borra();
  
       }else if( t == IZQUIERDA ){
           x--;

           nave(x);  
           refresca();
           borra();  
       }
        if(t != ESCAPE){
          
          if( p != 500 ){
           if( p <= 60){
                 p =  p + 1;
           }else{
                p = 0;   
           }
          }
           
           if( di != 500 ){
               if( di <= 60){
                    di= di + 1; 
               }else{
                    di = 0;   
               }
           }
           
           if( to != 500 ){
               if( to <= 60){
                    to= to + 1;
               }else{
                    to = 0;   
               }
           }
          
           nave(x);
           nave2(p);    
           nave3(di);
           nave4(to);
           
           refresca();
           espera(70);
           borra();
          }
            
       if( t == ESPACIO ){
       sndPlaySound(TEXT("disparo.wav"), SND_ASYNC);
       
                                        
             for(int i=1; i <= 80; i=i+1)
             {   
                 if(y <= 205 ){
                  y = y+1;
                  nave5(x,y); 
                  
   
                  p1 = p-5;
                  p2 = p+5;
                   if(x >= p1 && x <= p2 ){
                        nave2(1000);
                  sndPlaySound(TEXT("explox.wav"), SND_ASYNC);    
                        p = 500;
                   }
                   
                
                   di1 = di + 4;
                   di2 = di + 14;
                  if(x >= di1 && x <= di2  ){
                       nave3(1000);
                       sndPlaySound(TEXT("explox.wav"), SND_ASYNC);   
                       di = 500;  
                  }
                  
                 
                  to1 = to + 16;
                  to2 = to + 25;
                  if(x >= to1 && x <= to2  ){
                       nave4(1000);
                       sndPlaySound(TEXT("explox.wav"), SND_ASYNC);   
                       to = 500;  
                  }

                 }else{
                 y = 0;
                 } 
             }    
          
              
       }
       
       t = tecla();
    }
    refresca();
    return 0;    
}

