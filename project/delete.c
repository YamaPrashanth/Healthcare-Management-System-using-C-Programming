void delete_record(patient **head)
{
        printf("\n");
        patient *p=*head,*q=NULL;
        char name[50];

        printf("Enter Patient name: ");
        getchar();
        fgets(name,50,stdin);
        name[strcspn(name,"\n")]='\0';

        while(p != NULL)
        {
                if(strcmp(p->name,name)==0)
                        break;
                q=p;
                p=p->next;
        }

        if(p == NULL)
        {
                printf("Patient not found !\n");
                return;
        }
        if(q==NULL)
                *head=p->next;
        else
                q->next=p->next;
        free(p);
        printf("Data deleted Successfully !\n");
}
