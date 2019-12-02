import java.util.Scanner;

public class BinarySearch {
	public static int binarySerach(int data[], int start, int end, int n) {
		if (start > end) {
			return -1;
		}
		int i = (start + end) / 2;
		if (data[i] == n) {
			return i;
		}
		if (data[i] > n) {
			return binarySerach(data, start, i - 1, n);
		}
		return binarySerach(data, i + 1, end, n);
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("����������ĳ��ȣ�");
		int n = sc.nextInt();
		System.out.println("�������������飺");
		int data[] = new int[n];
		for (int i = 0; i < n; i++) {
			data[i] = sc.nextInt();
		}
		// �������� ð������
		for (int i = 0; i < data.length; i++) {
			for (int j = 0; j < data.length - 1; j++) {
				if (data[j] > data[j + 1]) {
					int temp = data[j];
					data[j] = data[j + 1];
					data[j + 1] = data[j];
				}
			}
		}
		System.out.println("��������Ҫ���ҵ�����Ԫ��");
		int b = sc.nextInt();
		int x = binarySerach(data, 0, n - 1, b);
		if (x == -1) {
			System.out.println(b + "���������У����������룺");
			b = sc.nextInt();
			x = binarySerach(data, 0, n - 1, b);
		}
		System.out.println("�����ҵ�����Ԫ���±�Ϊ��" + x);
	}
}