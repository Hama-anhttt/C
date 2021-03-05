
package edu.mta.demo;
import java.util.Scanner;
public class InforBank {
    double soTaiKhoan;
    String hoTen;
    double soTien;
    public InforBank( String hoTen, double soTien)
    {
        this.hoTen = hoTen;
        this.soTien = soTien;
    }

    public void output()
    {
        System.out.println("Chu tai khoan: "+hoTen);
      
        System.out.println("So tien trong tai khoan: "+soTien);
        
    }
    public void naptien()
    {
        double tien1;
        Scanner s = new Scanner(System.in);
        System.out.println("So tien muon nap vao tai khoan: ");
        tien1 = s.nextDouble();
        System.out.println("So tien trong tai khoan: " + (tien1+soTien));
        System.out.println("Ban da hoan thanh giao dich");
    }
    public void ruttien()
    {
        double tien2;
        Scanner s = new Scanner(System.in);
        System.out.println("So tien muon rut tu tai khoan: ");
        tien2 = s.nextDouble();
        if(tien2>soTien)
            System.out.println("So tien trong tai khoan cua ban khong du!!");
        else{
            System.out.println("So tien trong tai khoan: " + (soTien-tien2));
            System.out.println("Ban da hoan thanh giao dich");
        }
        
    }
    public void chuyentien()
    {
        double tien3;
        Scanner s = new Scanner(System.in);
        System.out.println("So tk ban muon chuyen tien den : ");
        this.soTaiKhoan= s.nextDouble();
        System.out.println("So tien ban muon chuyen den tai khoan: ");
        tien3 = s.nextDouble();
        if(tien3>soTien)
            System.out.println("So tien trong tai khoan cua ban khong du!!");
        else{
            System.out.println("So tien trong tai khoan: " + (soTien-tien3));
            System.out.println("Ban da hoan thanh giao dich");
        }
    }
}

