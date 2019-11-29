/*
 *ѧ�ţ�180021103308
 *��������ҽ�
 * ���η�-������������
 */
package divide_and_conquerMethod;

import java.util.Scanner;

public class BinarySearch {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Please enter the array's length: ");//�������鳤��
		int n=in.nextInt();
		int[] arr=new int[n];
		arr=initArray(arr);										//��ʼ�����鲢�ԴӼ�������������������
		System.out.print("\n"+"Please enter what you want to find: ");
		int findOut = ToBinarySearch(arr, in.nextInt(), n);		//Ѱ�Ҳ�ѯ��Ԫ�������±�ֵ������
		in.close();
		System.out.println("You want to search number on the position is  : " + findOut);
	}

	public static int ToBinarySearch(int[] a, int x, int n) {
		int left = 0, right = n - 1;							
		while (left <= right) {
			int middle = (left + right) / 2;					
			if (x == a[middle])									//��ʾ�ҵ�Ԫ�أ������±�ֵ
				return middle;

			if (x > a[middle])									//��ʾ����Ѱ�ҵ�ֵ���������м��ֵ
				left = middle + 1;								//��ָ�������±��ָ�������ƶ���ָ�������м�ֵ�ұߵ���ֵ
			else
				right = middle - 1;
		}
		return -1;

	}
	
	
	
//��������
	public static int[] insertionSort(int[] array) {      
		if (array.length == 0)
			return array;
		int current;
		for (int i = 0; i < array.length - 1; i++) {
			current = array[i + 1];
			int preIndex = i;
			while (preIndex >= 0 && current < array[preIndex]) {
				array[preIndex + 1] = array[preIndex];
				preIndex--;
			}
			array[preIndex + 1] = current;
		}
		return array;
	}

	
//��������г�ʼ��
	public static int[] initArray(int[] arr) {			
		Scanner inElements = new Scanner(System.in); 
		System.out.println("Please define the array elements at first: ");
		for (int i = 0; i < arr.length; i++) {
			arr[i]=inElements.nextInt();
		}
		System.out.println("Have been defined,and your array is:");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i]+" ");
		}
		insertionSort(arr);											//������������ź���
		System.out.println("\n"+"Then your array was been sorted,the array is:");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i]+" ");
		}
		return arr;
		
	}

}
