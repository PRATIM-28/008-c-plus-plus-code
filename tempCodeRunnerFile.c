/*Insert at the beginning
Allocate memory for new node
Store data
Change next of new node to point to head
Change head to point to recently created node*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
structnode{
intdata;
intkey;
structnode*next;
};
structnode*head=NULL;
structnode*current=NULL;
//displaythelist
voidprintList(){
structnode*ptr=head;
printf("\n[");
//startfromthebeginning
while(ptr!=NULL){
printf("(%d,%d)"
,ptr->key,ptr->data);
ptr= ptr->next;
}
printf("]");
}
//insertlinkatthefirstlocation
voidinsertFirst(intkey,intdata){
//createalink
structnode*link =(structnode*)malloc(sizeof(structnode));
link->key=key;
link->data=data;
//pointittooldfirstnode
link->next=head;
//pointfirsttonewfirst node
head=link;
}
//deletefirstitem
structnode*deleteFirst(){
//savereferencetofirstlink
structnode*tempLink=head;
//marknexttofirstlinkasfirst
head=head->next;
//return thedeletedlink
returntempLink;
}
//islistempty
boolisEmpty(){
returnhead==NULL;
}
intlength(){
intlength=0;
structnode*current;
for(current=head;current!= NULL; current=current->next){
length++;
}
returnlength;
}
//findalinkwithgivenkey
structnode*find(intkey){
//startfromthefirstlink
structnode* current= head;
//iflistis empty
if(head==NULL){
returnNULL;
}
//navigatethroughlist
while(current->key!=key){
//ifitislast node
if(current->next ==NULL){
returnNULL;
}else{
//gotonextlink
current=current->next;
}
}
//ifdatafound,returnthecurrentLink
returncurrent;
}
//deletealinkwithgivenkey
structnode*delete(intkey){
//startfromthefirstlink
structnode* current= head;
structnode*previous=NULL;
//iflistis empty
if(head==NULL){
returnNULL;
}
//navigatethroughlist
while(current->key!=key){
//ifitislast node
if(current->next ==NULL){
returnNULL;
}else{
//storereferencetocurrentlink
previous=current;
//movetonextlink
current=current->next;
}
}
//foundamatch,updatethelink
if(current==head){
//changefirsttopointtonextlink
head=head->next;
}else{
//bypassthecurrentlink
previous->next=current->next;
}
returncurrent;
}
voidsort(){
inti,j,k,tempKey,tempData;
structnode*current;
structnode*next;
intsize= length();
k=size;
for(i=0;i <size-1;i++,k--){
current=head;
next=head->next;
for(j= 1; j< k;j++){
if(current->data>next->data){
tempData=current->data;
current->data=next->data;
next->data=tempData;
tempKey=current->key;
current->key=next->key;
next->key=tempKey;
}
current=current->next;
next=next->next;
}
}
}
voidreverse(structnode**head_ref){
structnode*prev =NULL;
structnode* current= *head_ref;
structnode*next;
while(current!=NULL){
next =current->next;
current->next= prev;
prev=current;
current=next;
}
*head_ref=prev;
}
voidmain(){
insertFirst(1,10);
insertFirst(2,20);
insertFirst(3,30);
insertFirst(4,1);
insertFirst(5,40);
insertFirst(6,56);
printf("OriginalList:");
//printlist
printList();
while(!isEmpty()){
structnode*temp=deleteFirst();
printf("\nDeletedvalue:");
printf("(%d,%d)"
,temp->key,temp->data);
}
printf("\nListafterdeletingallitems:");
printList();
insertFirst(1,10);
insertFirst(2,20);
insertFirst(3,30);
insertFirst(4,1);
insertFirst(5,40);
insertFirst(6,56);
printf("\nRestoredList:");
printList();
printf("\n");
structnode*foundLink= find(4);
if(foundLink!=NULL){
printf("Elementfound:");
printf("(%d,%d)"
,foundLink->key,foundLink->data);
printf("\n");
}else{
printf("Elementnotfound.");
}
delete(4);
printf("Listafterdeletinganitem:");
printList();
printf("\n");
foundLink=find(4);
if(foundLink!=NULL){
printf("Elementfound:");
printf("(%d,%d)"
,foundLink->key,foundLink->data);
printf("\n");
}else{
printf("Elementnotfound.");
}
printf("\n");
sort();
printf("Listaftersortingthedata:");
printList();
reverse(&head);
printf("\nListafterreversingthedata:");
printList();
}
If we compile and run the above program, it will produce the following result −
Output
OriginalList:
[(6,56)(5,40)(4,1)(3,30)(2,20)(1,10)]
Deletedvalue:(6,56)
Deletedvalue:(5,40)
Deletedvalue:(4,1)
Deletedvalue:(3,30)
Deletedvalue:(2,20)
Deletedvalue:(1,10)
Listafterdeletingallitems:
[]
RestoredList:
[(6,56)(5,40)(4,1)(3,30)(2,20)(1,10)]
Elementfound:(4,1)
Listafterdeletingan item:
[(6,56)(5,40)(3,30)(2,20)(1,10)]
Elementnotfound.
Listaftersortingthedata:
[(1,10)(2,20)(3,30)(5,40)(6,56)]
Listafterreversingthedata:
[(6,56)(5,40)(3,30)(2,20)(1,10)]
/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end */
void append(struct Node** head_ref, int new_data)
{
/* 1. allocate node */
struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
struct Node *last = *head_ref; /* used in step 5*/
/* 2. put in the data */
new_node->data = new_data;
/* 3. This new node is going to be the last node, so make next
of it as NULL*/
new_node->next = NULL;
/* 4. If the Linked List is empty, then make the new node as head */
if (*head_ref == NULL)
{
*head_ref = new_node;
return;
}
/* 5. Else traverse till the last node */
while (last->next != NULL)
last = last->next;
/* 6. Change the next of last node */
last->next = new_node;
return;
}