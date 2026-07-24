#include<stdio.h>

struct Baksho {
    int taka;              // এটা হলো টাকা (Value)
    struct Baksho *link;   // এটা হলো চিরকুট (পরের বাক্সের ঠিকানা রাখার Link/Pointer)
};
int main(int argc, char const *argv[])
{
    int age = 67; 



    //address print 
    printf(" address: %p  \n", age); 


    // Pointer 

    int *diary = &age;
    printf("Diary te lekha address (Pointer): %p\n", diary);


    printf("Diary bebohar kore takar value dekhlam: %d\n", *diary);





    //link
    // ২. দুটো আলাদা বাক্স বানালাম
    struct Baksho baksho1;
    struct Baksho baksho2;

    // ৩. বাক্সের ভেতরে টাকা (ভ্যালু) রাখলাম
    baksho1.taka = 100;
    baksho2.taka = 500;

    // ৪. লিংকের কাজ (চিরকুট লিখে দেওয়া)
    // প্রথম বাক্সের চিরকুটে (link) দ্বিতীয় বাক্সের ঠিকানা (&baksho2) লিখে দিলাম
    baksho1.link = &baksho2;

    // দ্বিতীয় বাক্সের পর আর কোনো বাক্স নেই, তাই চিরকুট ফাঁকা (NULL) রাখলাম
    baksho2.link = NULL;

    printf("Prothom baksho theke link dhore ditiyo bakshor taka pelam: %d\n", baksho1.link->taka);
    return 0;
}
