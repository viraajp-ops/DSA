import java.util.*;
public class atoi{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        String str = sc.nextLine();
        int n= Integer.parseInt(str);
        System.out.println("The number is "+ n);
    }
}