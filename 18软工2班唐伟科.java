import java.util.*;
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] ary=new int[10];
		Scanner reader=new Scanner(System.in);
		System.out.println("�밴˳������10�����֣�");
		for(int i=0;i<10;i++){
			int a=reader.nextInt();//����10������
			ary[i]=a;
		}
		System.out.println("��������Ҫ���ҵ����֣�");
		int b=reader.nextInt();//����Ҫ���ҵ�����
		System.out.println();
		int i=10;
		for(int j=4;j<0;j--){
			i=i/2;
			if(b<ary[i]){
				i=i-1;
			}if(b==ary[i]){
				System.out.println("���ҵ�");
				System.out.println("iΪ"+i);
				break;
			}else{
				i=ary.length+i;
			}
		}
		System.out.println("δ�ҵ�");
	}
}

