void search_details(patient **head)
{
        patient *p=*head;
        int n;

        printf("\nEnter Appointment : ");
        scanf("%d",&n);

        printf("============Patient Details==========\n");

        while(p != NULL)
        {
                if(p->accno == n)
                        break;
                p=p->next;
        }
        if(p == NULL)
        {
                printf("Patient details not found !\n");
                return;
        }
        else
        {
                printf("-------------------------------------\n");
                printf("Name          : %s\n",p->name);
                printf("Room No       : %d\n",p->roomno);
                printf("Contact       : %s\n",p->phno);
                printf("Doctor        : %s\n",p->docname);
                printf("Disease       : %s\n",p->disease);
                printf("Admitted date : %s\n",p->appdate);
                printf("Discharge date: %s\n",p->discharge);
                printf("--------------------------------------\n");
        }
}
