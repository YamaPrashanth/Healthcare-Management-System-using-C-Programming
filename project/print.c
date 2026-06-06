void print_details(patient **head);
void print_all_details(patient **head);
void print_details_doc(patient **head);
void print_details_dis(patient **head);
void print_details_patient(patient **head);

void print_menu()
{
        printf("\n====== HOSPITAL MANAGEMENT SYSTEM =====\n"
                "A - Book an appointment\n"
                "P - Print patient details\n"
                "F - Find/Search a patient\n"
                "S - Save the data\n"
                "M - Modify patient details\n"
                "D - Delete the patient records\n"
                "E - Exit\n"
                "==========================================\n");
}

void print_details(patient **head)
{
        char ch;

        while(1)
        {
                printf("\n======== PRINT DETAILS ==========\n"
                        "A - Print all patient details\n"
                        "D - Print patient details by doctor\n"
                        "P - Print details by Patient\n"
                        "O - Print details by disease\n"
                        "E - Exit\n"
                        "==================================\n"
                        "Enter choice: ");
                scanf(" %c",&ch);

                switch(ch)
                {
                        case 'A':
                        case 'a': print_all_details(head);
                                  break;
                        case 'D':
                        case 'd': print_details_doc(head);
                                  break;
                        case 'P':
                        case 'p': print_details_patient(head);
                                  break;
                        case 'O':
                        case 'o': print_details_dis(head);
                                  break;
                        case 'E':
                        case 'e': return;
                        default:
                                printf("Invalid choice !\n");
                }
        }
}
void print_all_details(patient **head)
{
        if(*head == NULL)
        {
                printf("\nPatient details is empty !\n");
                return;

        }
        patient *p=*head;

        printf("\n===== All Patient Details =====\n");

        while(p != NULL)
        {
                printf("\n-------------------------\n");
                printf("Name         : %s\n",p->name);
                printf("Appoint No   : %d\n",p->accno);
                printf("Contact      : %s\n",p->phno);
                printf("Room No      : %d\n",p->roomno);
                printf("Admitted     : %s\n",p->admit ? "Yes" : "No");
                printf("Doctor       : %s\n",p->docname);
                printf("Disease      : %s\n",p->disease);
                printf("Join Date    : %s\n",p->appdate);
                printf("Discharge    : %s\n",p->discharge);
                printf("------------------------\n");

                p=p->next;
        }
}

void print_details_doc(patient **head)
{
        patient *p=*head;
        char name[50];
        int flag=0;

        printf("Enter doctor name: ");
        getchar();
        fgets(name,50,stdin);
        name[strcspn(name,"\n")]='\0';

        if(p==NULL)
        {
                printf("Patient details is empty !\n");
                return;
        }
        else
        {
                printf("Patients details according to Doctor '%s' \n",name);

                while(p != NULL)
                {
                        if(strcmp(p->docname,name)==0)
                        {
                                flag=1;
                                printf("\n-------------------------------\n");
                                printf("Name       : %s\n",p->name);
                                printf("Appoint no : %d\n",p->accno);
                                printf("Disease    : %s\n",p->disease);
                                printf("join date  : %s\n",p->appdate);
                                printf("Contact    : %s\n",p->phno);
                                printf("-------------------------------\n");
                        }
                        p=p->next;
                }
                if(flag==0)
                        printf("Doctor name not found !\n");
        }
}
void print_details_dis(patient **head)
{
        patient *p=*head;
        char name[50];
        int flag=0;

        printf("Enter disease name: ");
        getchar();
        fgets(name,50,stdin);
        name[strcspn(name,"\n")]='\0';

        if(p==NULL)
        {
                printf("Patient details is empty !\n");
                return;
        }
        else
        {
                printf("Patients details according to Disease '%s' \n",name);

                while(p != NULL)
                {
                        if(strcmp(p->disease,name)==0)
                        {
                                flag=1;
                                printf("\n-------------------------------\n");
                                printf("Name       : %s\n",p->name);
                                printf("Appoint no : %d\n",p->accno);
                                printf("Doctor     : %s\n",p->docname);
                                printf("join date  : %s\n",p->appdate);
                                printf("Contact    : %s\n",p->phno);
                                printf("-------------------------------\n");
                        }
                        p=p->next;
                }
                if(flag==0)
                        printf("Disease name not found !\n");
        }
}
void print_details_patient(patient **head)
{
        patient *p=*head;
        char name[50];
        int flag=0;

        printf("Enter Patient name: ");
        getchar();
        fgets(name,50,stdin);
        name[strcspn(name,"\n")]='\0';

        if(p==NULL)
        {
                printf("Patient details is empty !\n");
                return;
        }
        else
        {
                printf("Patients details according to Patient '%s' \n",name);

                while(p != NULL)
                {
                        if(strcmp(p->name,name)==0)
                        {
                                flag=1;
                                printf("\n-------------------------------\n");
                                printf("Name       : %s\n",p->name);
                                printf("Room No    : %d\n",p->roomno);
                                printf("Doctor     : %s\n",p->docname);
                                printf("Disease    : %s\n",p->disease);
                                printf("Join date  : %s\n",p->appdate);
                                printf("Discharge  : %s\n",p->discharge);
                                printf("Contact    : %s\n",p->phno);
                                printf("-------------------------------\n");
                        }
                        p=p->next;
                }
                if(flag==0)
                        printf("Patient name not found !\n");
        }
}


