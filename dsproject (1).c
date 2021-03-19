#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
int id;
char fname[10],amount[10],quanity[11];
struct node* next;
}*head=NULL,*p,*q,*t;
int sr;
void main()
{
 int ch,a;
void insert_begin();
void delete_pos();
void update();
void display();
void search();
printf("\n========================================================================================================================\n\n");
printf("---------------------------------------------------FRUIT BASKET SYSTEAM-------------------------------------------------\n");
printf("\n========================================================================================================================\n\n\n\n");

   while(1)
        {   printf("OPERATIONS..... \n");
            printf("\t1.ADD THE FRUIT\n\t2.REMOVE THE FRUIT\n\t3.UPDATE THE FRUIT LIST\n\t4.DISPLAY THE FRUIT LIST\n\t5.SEARCH THE FRUIT\n\t6.EXIT \n");
            printf("\n\nEnter your choice : ");
            scanf("%d",&ch);
   switch(ch)
        {
           case 1:insert_begin();
           printf("\n========================================================================================================================\n\n");
printf("---------------------------------------------------GOING BACK MAIN MENU-------------------------------------------------\n");
printf("\n========================================================================================================================\n\n\n\n");
                 break;
           case 2:delete_pos();
           printf("\n========================================================================================================================\n\n");
printf("---------------------------------------------------GOING BACK MAIN MENU-------------------------------------------------\n");
printf("\n========================================================================================================================\n\n\n\n");
                break;
           case 3:update();
           printf("\n========================================================================================================================\n\n");
printf("---------------------------------------------------GOING BACK MAIN MENU-------------------------------------------------\n");
printf("\n========================================================================================================================\n\n\n\n");
                 break;
           case 4:display();
           printf("\n========================================================================================================================\n\n");
printf("---------------------------------------------------GOING BACK MAIN MENU-------------------------------------------------\n");
printf("\n========================================================================================================================\n\n\n\n");
                 break;
           case 5:search();
                      printf("\n========================================================================================================================\n\n");
printf("---------------------------------------------------GOING BACK MAIN MENU-------------------------------------------------\n");
printf("\n========================================================================================================================\n\n\n\n");
                  break;
           case 6:exit(0);
           break;

           default:printf("OOPS ! Your entered wrong choice... :-)\n\n");



          }

         }
}

void insert_begin()
{
  p=(struct node*)malloc(sizeof(struct node));
  p->next=NULL;
printf("\tid.: ");
  scanf("%d",&p->id);
  printf("\tFRUIT NAME : ");
  scanf("%s",p->fname);
  printf("\tAMOUNT :RS.");
  scanf("%s",p->amount);
   printf("\tQUANITY:PER/KG. ");
  scanf("%s",p->quanity);
  if(head==NULL)
     {
      head=p;
      p->next=NULL;
     }
  else
{
  p->next=head;
  head=p;
}
}
void delete_pos()
{
    int i, pos;
    if(head==NULL)
    {
        printf("\nthe list is empty....\n");
        return;
    }

    else
    {
            printf("\nenter the id after which you want to delete\n");
            scanf("%d",&pos);
            q=head;
        for(i=1;i<pos;i++)
        {
            if(q->next==NULL)
            {
                printf("\nthe list has less elements\n");
                return;
            }
            else
            {
                q=q->next;
            }
       }
        p=q->next;
        q->next=p->next;
printf("YOU HAVE DELETED : \n\n\tID. :%d \n\tFRUIT NAME :%s \n\tAMOUNT :RS.%s\n\tQUANITY :PER/KG.%s\n \t",q->id,q->fname,q->amount,q->quanity);      free(p);
        }
}



void display()
{
    if(head==NULL)
    {

        printf("\nthe list is empty\n");
        return;
    }
    else
    {
        q=head;
        printf("the data is...........\n");
        printf("id \tFRUIT NAME \t AMOUNT\t QUANITY \t\n");
        while(q->next!=NULL)
        {
            printf("\n%d\t%s\t\t%s\t\t%s\t\t\n",q->id,q->fname,q->amount,q->quanity);
            q=q->next;
        }
          printf("\n%d\t%s\t\t%s\t\t%s\n",q->id,q->fname,q->amount,q->quanity);
    }
}


void update()
{
    int r1,r2;
    char n1[10],n2[10],a1[10],a2[10],m1[11],m2[11];
    printf("\n ....enter the old data.....\n\n");
    printf("enter the old fruit name :");
    scanf("%s",n1);

    printf("\n ....enter the updated data.....\n\n");
    printf("enter the updated fruit name : ");
    scanf("%s",n2);

    if(head==NULL)
    {
        printf("the list is empty\n\n");
        return;
    }
    else
    {
	q=head;
        while(strcmp(q->fname,n1))
        {
            q=q->next;
        }
        strcpy(q->fname,n2);
            }
}

void search()
{
     printf("Enter your searching fruit id: ");
     scanf("%d",&sr);
 if(head==NULL)
 {
   printf("\nthe list is empty!!!!!\n");
   return;
 }
 else
{
  p=head;
  while(p->id!=sr)
   {
     p=p->next;
   }

  printf("the data found\n");
 printf("%d-%s-%s-%s \n",p->id,p->fname,p->amount,p->quanity);
}

}

