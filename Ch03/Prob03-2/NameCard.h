#ifndef __NAME_CARD_H__
#define __NAME_CARD_H__

#define NAME_LEN		30
#define PHONE_LEN		30

typedef struct __namecard
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
} NameCard;


// NameCard struct values generating(malloc & initialization)
NameCard * MakeNameCard(char * name, char * phone);
   
// Values info printing
void ShowNameCardInfo(NameCard * pcard);
   
// Name value comparing
int NameCompare(NameCard * pcard, char * name);
   
// Change Phone number value
void ChangePhoneNum(NameCard * pcard, char * phone);


#endif