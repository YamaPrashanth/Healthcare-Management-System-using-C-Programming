void book_an_app(patient **head)
{
        patient *p,*temp;
        int d,m,y;
        p=(patient *)malloc(sizeof(patient));

        printf("\nEnter acc no          : ");
        scanf("%d",&p->accno);
        getchar();
        printf("Enter name            : ");
        fgets(p->name,50,stdin);
        p->name[strcspn(p->name,"\n")]='\0';
ph:     printf("Enter Phone number    : ");
        fgets(p->phno,10,stdin);
        p->phno[strcspn(p->phno,"\n")]='\0';

        for(int i=0; p->phno[i] != '\0'; i++)
        {
                if( !isdigit(p->phno[i]))
                {
                        printf("Invalid: Enter only digits !\n");
                        goto ph;
                }
        }
        printf("Room no               : ");
        scanf("%d",&p->roomno);
        getchar();
ad:     printf("Admitted! (1-yes/0-no): ");
        scanf("%d",&p->admit);
        if((p->admit != 1) && (p->admit != 0))
        {
                printf("Invalid data !\n");
                goto ad;
        }
        getchar();
        printf("Enter doctor name     : ");
        fgets(p->docname,50,stdin);
        p->docname[strcspn(p->docname,"\n")]='\0';
        printf("Enter disease name    : ");
        fgets(p->disease,50,stdin);
        p->disease[strcspn(p->disease,"\n")]='\0';
da:     printf("Enter Appointment date: ");
        fgets(p->appdate,50,stdin);
        p->appdate[strcspn(p->appdate,"\n")]='\0';

        if(sscanf(p->appdate,"%d-%d-%d",&d,&m,&y) != 3 ||(d<1||d>31)||(m<1||m>12)||y<1900)
        {
                printf("Invalid date : Enter date in format dd-mm-yyyy \n");
                goto da;
        }

di:     if(p->admit == 1)
        {
                printf("Enter Discharge date  : ");
                fgets(p->discharge,50,stdin);
                p->discharge[strcspn(p->discharge,"\n")]='\0';

                if(sscanf(p->discharge,"%d-%d-%d",&d,&m,&y) != 3 ||(d<1||d>31)||(m<1||m>12)||y<1900)
                {
                        printf("Invalid date : Enter date in format dd-mm-yyyy \n");
                        goto di;
                }
        }
        else
        {
                strcpy(p->discharge,"N/A");
        }

        p->next = NULL;

        if(*head == NULL)
        {
                *head=p;
        }
        else
        {
                temp=*head;
                while(temp->next != NULL)
                {
                        temp=temp->next;
                }
                temp->next=p;
        }
        printf("Patient appointment booked sucessfully !\n");
}
