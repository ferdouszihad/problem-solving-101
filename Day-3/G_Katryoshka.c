// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.
#include <stdio.h>
int main(){
    long long int eye, mouth,body,count=0;
    int minimum = 0;

    scanf("%lld%lld%lld",&eye,&mouth,&body);

     if(eye>0 && mouth >0 && body >0){

        if(eye<=mouth && eye<=body ){
            count+=eye;
            mouth-=eye;
            body-=eye;
            eye-=eye;
            
        }else if(mouth<=eye && mouth<=body){
            count+=mouth;
            eye-=mouth;
            body-=mouth;
            mouth-=mouth;
            

        }else{
            count+=body;
            eye-=body;
            mouth-=body;
            body-=body;
            
        }


     }


     if(eye>=2 && body >1){

        if(eye/2 <= body){
            count += eye/2;
        }else{
            count+=body;

        }


     }

    // while(1){

    //     if(eye>0 && mouth >0 && body >0){
    //         count++;
    //         eye--;
    //         mouth--;
    //         body--;
    //     }else if(eye>1 && body>0){
    //         eye-=2;
    //         body--;
    //         count++;

    //     }else if(eye>1 && body>0 && mouth >1){
    //         eye-=2;
    //         body--;
    //         mouth--;
    //         count++;

    //     }else{
    //         break;
    //     }

    // }

    printf("%lld\n",count);



   

   
    return 0;
}