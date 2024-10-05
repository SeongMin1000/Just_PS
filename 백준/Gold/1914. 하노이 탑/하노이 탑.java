import java.util.Scanner;
import java.math.BigInteger;

class howMove{
    private final int layer;

    public howMove(int layer){
        this.layer=layer;
    }

    public void tower(int first, int second, int third, int count){
        if(count==1){
            System.out.println(first+" "+third);
            return;
        }
        tower(first, third, second,count-1);
        System.out.println(first+" "+third);
        tower(second, first, third, count-1);

    }

    public void print(){
        System.out.println(BigInteger.valueOf(2).pow(layer).subtract(BigInteger.ONE));
        if(layer<=20){
            tower(1,2,3,layer);
        }

    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        howMove towering= new howMove(n);
        towering.print();
    }
}
