void modify_details(patient **head)
{
        patient *p=*head;
        char name[20],ch;

        printf("\nEnter Patient name: ");
        getchar();
        fgets(name,20,stdin);
        name[strcspn(name,"\n")]='\0';

        while(p != NULL)
        {
                if(strcmp(p->name,name)==0)
                        break;
                p-p->next;
        }
        if(p == NULL)
        {
                printf("Patient details not found !\n");
                return;
        }
        else
        {
                while(1)
                {
                        printf("\n-------------------------\n");
                        printf("N - Name         : %s\n",p->name);
                        printf("A - Appoint No   : %d\n",p->accno);
                        printf("C - Contact      : %s\n",p->phno);
                        printf("R - Room No      : %d\n",p->roomno);
                        printf("M - Admitted     : %s\n",p->admit ? "Yes" : "No");
                        printf("D - Doctor       : %s\n",p->docname);
                        printf("P - Disease      : %s\n",p->disease);
                        printf("J - Join Date    : %s\n",p->appdate);
                        printf("E - Discharge    : %s\n",p->discharge);
                        printf("S - Save\n");
                        printf("------------------------\n");

                        printf("Enter choice: ");
                        scanf(" %c",&ch);

                        switch(ch)
                        {

                                case 'N':
                                case 'n': printf("Name : ");
                                          scanf("%s",p->name);
                                          break;
                                case 'A':
                                case 'a': printf("Appoint No : ");
                                          scanf("%d",&p->accno);
                                          break;
                                case 'C':
                                case 'c': printf("Contact :");
                                          scanf("%s",p->phno);
                                          break;
                                case 'R':
                                case 'r': printf("Room No : ");
                                          scanf("%d",&p->roomno);
                                          break;
                                case 'M':
                                case 'm': printf("Admitted : ");
                                          scanf("%d",&p->admit);
                                          break;
                                case 'D':
                                case 'd': printf("Doctor : ");
                                          scanf("%s",p->docname);
                                          break;
                                case 'P':
                                case 'p': printf("Disease : ");
                                          scanf("%s",p->disease);
                                          break;
                                case 'J':
                                case 'j': printf("Join Date: ");
                                          scanf("%s",p->appdate);
                                          break;
                                case 'E':
                                case 'e': printf("Discharge : ");
                                          scanf("%s",p->discharge);
                                          break;
                                case 'S':
                                case 's': return;
                                default:
                                        printf("Invalid Choice !\n");
                        }
                }
        }

}

