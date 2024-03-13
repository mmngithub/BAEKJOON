
import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		//이건 그냥 입력받기 위한 기본 작업이라고 생각
		int N=sc.nextInt();
		int sum=1;
		for(int i=1; i<=N; i++) {
			sum *= i; 
		}		
		System.out.println(sum);		
	}
}
