public class r {
	public static  void main(String[] args) {
		int[] arr = {1,3,5,7,9,11};
		int key = 4;
		
		int position = commonBinarySearch(arr, key);
        if(position == -1){
			System.out.println("���ҵ���"+key+",������û�и�����");
		}
        else
        {
        	System.out.println("���ҵ���"+key+",�ҵ�λ��Ϊ��"+position);
        }
        System.out.println("û���ҵ�");//�����Ȼû���ҵ����򷵻�-1

	}
public static int commonBinarySearch(int[] arr,int key){
	int low = 0;
	int high = arr.length - 1;
	int middle = 0;			//����middle
		
	if(key < arr[low] || key > arr[high] || low > high){
		return -1;				
	}
		
	while(low <= high){
		middle = (low + high) / 2;
		if(arr[middle] > key){
				//�ȹؼ��ִ���ؼ�����������
			high = middle - 1;
		}else if(arr[middle] < key){
				//�ȹؼ���С��ؼ�����������
			low = middle + 1;
		}else{
			return middle;
		}
	}
		
	return -1;		//�����Ȼû���ҵ����򷵻�-1
	}
}
