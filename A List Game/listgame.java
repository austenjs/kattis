import java.util.Scanner;
import java.lang.String;
public class Main{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		int input = scanner.nextInt();
		printer(input);
/*
		for (int i = 1000000000 ; i > 1000 ; i--){
			System.out.println(i);
			printer(i);
		}
*/
	}

	public static void printer(int input){
		
		int counter = 0;
		int sqr = 2;
		//int iter = 1;
		//int sqr2 = 41;
		double dupl = input;
		while (sqr < dupl){
			if (sqr > Math.sqrt(dupl) + 1.0){
				if (counter == 0){System.out.println(1);}
				else if (dupl == 1){System.out.println(counter);}
				else{System.out.println(counter+1);}
				return;
			}
			while(dupl % sqr== 0){
				counter++;
				dupl /= sqr;
			}
			/*while(dupl % sqr2 == 0){
				counter++;
				dupl /= sqr2;
			}*/
			sqr++;
			//sqr2 = form(iter);
			//iter++;
			
		}
		if (dupl ==1){
		System.out.println(counter);}
		else{
		System.out.println(counter+1);
		}
	}
	
	public static int form(int x){
		return x*x + x + 41;
	}
}


