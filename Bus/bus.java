import java.util.Scanner;
import java.lang.String;
public class Main{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		int testcase = scanner.nextInt();
		for (int i = 0 ; i < testcase ; i++){
			int ik = 0;
			int stops = scanner.nextInt();
			for (int stop = 0 ; stop < stops ; stop++){
				ik = 2*ik + 1;
			}
			System.out.println(ik);
		}
	}
}


