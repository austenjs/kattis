import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testcase = scanner.nextByte();
        String trump = scanner.next();
        int sum = 0;
        for (int i = 0; i < 4*testcase; i++) {
            String hand = scanner.next();
            if (hand.substring(0,1).equals("7") || hand.substring(0,1).equals("8") ){
                continue;
            }
            else if(hand.substring(0,1).equals("A")){
                sum += 11;
            }
            else if(hand.substring(0,1).equals("K")){
                sum += 4;
            }
            else if(hand.substring(0,1).equals("Q")){
                sum += 3;
            }
            else if(hand.substring(0,1).equals("T")){
                sum += 10;
            }
            else if(hand.substring(0,1).equals("J")){
                if(hand.substring(1,2).equals(trump)){
                    sum += 20;
                }
                else{
                    sum += 2;
                }
            }
            else if(hand.substring(0,1).equals("9")){
                if(hand.substring(1,2).equals(trump)){
                    sum += 14;
                }
            }
        }
        System.out.println(sum);
    }
}

