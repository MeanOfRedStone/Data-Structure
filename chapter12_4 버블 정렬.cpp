//프로그램 12.4 버블 정렬 프로그램
#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t))
void bubble_sort(int list[], int n)
{
	int i, j ,temp;
	for(i = n-1; i > 0; i--){
		for(j = 0; j < i; j++){
			//앞 뒤의 레코드를 비교한 후 교체
			if(list[j] > list[j+1]){
				SWAP(list[j], list[j+1], temp);
			} 
		}
	}
} 
