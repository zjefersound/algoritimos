
import java.util.Scanner;


public class Exec1 {

    public static void main(String[] args) {
        // TODO code application logic here
        
        // Emissor -> PISTA = 3KM
        //circulo = 8km pista
        //pista -> sensor = 2 km
        //entrada será a distancia
        int d, d_final;
        Scanner in = new Scanner(System.in);
        //d <= 6 && D < 800008
        
        
        System.out.println("Digite a D percorrida");
        d = in.nextInt();
        
        if ( d >= 6 && d <= 800008 ) {
            d_final = (d - 3)%8;
            switch(d_final){
                case 3:
                    System.out.println("Sensor 1");
                    break;
                case 4:
                    System.out.println("Sensor 2");
                    break;
                case 5:
                    System.out.println("Sensor 3");
                    break;
            }
            
            
        } else {
            System.out.println("D inválido.");
        }

    }
    
}