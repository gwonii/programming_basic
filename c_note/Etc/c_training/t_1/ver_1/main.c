// first tranining


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 매크로 부분 


//

// 구조체 선언 부분
struct Car {

		char *strarr[14];
		char kind[10];
		

};
struct Car car[398];
// 구조체를 포인터 배열로 선언하였다. 

//

// 전역 변수 선언 부분

//


//함수 선언 부분

void Read_file();

void Insert_kind ();
//




int main() {

	

		Read_file(&car);

		//Insert_kind (&car);



		return 0;

}


void Read_file (struct Car *car[]) {


		char buf[1000];
		char *str;

		int i,j;

		FILE *fp = fopen("./car_data.csv","r");

		if (fp != NULL) {

			while(!feof(fp)){	
			//파일이 끝까지 읽혀졌는지 확인하는 while문
				for(j=0; j<398; j++){

				str = fgets(buf,sizeof(buf),fp);
				//버퍼의 크기로 한 줄 정보 입력받기 fp 파일에 있는
				//그러면 현재 str에 파일의 한 줄이 들어가 있음.
				//그러면 한 줄에 있는 정보를 ","를 기준으로 나눠서 저장하기 

				str = strtok(buf,",");
				// 나누어진 문자열들은 어디에 저장시킬 것인가? 
				// 먼저 포인터 배열에 각각의 문구를 저장시키자
		
				
			

						for(i = 0; i<14; i++) {

								//car[j] = malloc(sizeof(char)*1000);
								car[j] = malloc(sizeof(struct Car));
								car[j]->strarr[i] = (char*)malloc(sizeof(char)*1000);
								//처음에 car[j]에 할당을 해주지 않을 때는 
								//segemantation 오류가 났었는데 구조체 자체도 
								//동적할당을 해주니까 원할하게 작동된다. 

								strcpy(car[j]->strarr[i], str);
								// strarr[i]는 strtok에 의해 잘린 문자열이 담길 변수 주소
								// str은 strtok에 의해 잘려진 문자열 첫 주소 
							//	printf("%s", car[j]->strarr[i]);

								str = strtok(NULL,",");
								//다음 ,(구분자)를 찾으러 간다. 

						}	
					
					
						


			
				}
			}	

		}
}
/*
void Insert_kind (struct Car *car[]) {


		int i,j;
		int *k;


		for(i=1; i<398; i++){

			

				
				car[i] = malloc(sizeof(struct Car));
				car[i]->celldx =(char *)malloc(sizeof(char)*1000);	
				strcpy( car[i]->celldx , car[i]->strarr[1]);
				//celldx = int *name 이고      strarr은 = char *name2[]이다. 
				car[i]->sports_Car = car[i]->strarr[2];
				car[i]->suv = car[i]->strarr[3];
				car[i]->wagon = car[i]->strarr[4];
				car[i]->minivan = car[i]->strarr[5];
				car[i]->pickup = car[i]->strarr[6];
				car[i]->retail_price = car[i]->strarr[7];
				car[i]->dearler_cost = car[i]->strarr[8];
				car[i]->engine_size = car[i]->strarr[9];
				car[i]->weight = car[i]->strarr[10];
				car[i]->width = car[i]->strarr[11];
		
		}


		printf("%s", car[1]->celldx);
}

*/
