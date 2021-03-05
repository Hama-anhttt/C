
package edu.mta.demo;
import java.util.Scanner;
import edu.mta.demo.InforBank;
public class CheckBank {

   
    public static void main(String[] args) {
      InforBank info = new InforBank("Ha ma", 5000000);
      info.output();
      System.out.println("-----------Tien hanh giao dich-------------");
        System.out.println("        1. Nap tien.");
        System.out.println("        2. Rut tien.");
        System.out.println("        3. Chuyen tien.");
        int chon;
        Scanner s = new Scanner(System.in);
        System.out.println("Nhap giao dich: ");
        chon = s.nextInt();
        switch(chon)
        {
            case 1:
                info.naptien();
            break;
            case 2: 
                info.ruttien();
            break;
            case 3:
                info.chuyentien();
            break;
            default:
                if(chon !=1 && chon != 2 && chon != 3)
                    System.out.println("Errorrr!!");
        }
    }
    
}
