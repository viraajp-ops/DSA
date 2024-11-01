import java.util.*;
public class Powerof2{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        if((((n-1))&n)==0){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
