void load_data(patient **head)
{
        FILE *fp;
        patient *p, *temp;
        char admit[10];
        char line[100];

        fp = fopen("hospital.txt", "r");

        if(fp == NULL)
                return;

        while(fgets(line, sizeof(line), fp) != NULL)
        {
                if(strncmp(line,"===== All Patient Details =====",31) == 0)
                        continue;
                if(strncmp(line,"-----------------------------------",35)==0)
                {
                        p = (patient *)malloc(sizeof(patient));

                        fscanf(fp,"Name         : %s\n",p->name);
                        fscanf(fp,"Appoint No   : %d\n",&p->accno);
                        fscanf(fp,"Contact      : %s\n",p->phno);
                        fscanf(fp,"Room No      : %d\n",&p->roomno);
                        fscanf(fp,"Admitted     : %s\n",admit);
                        fscanf(fp,"Doctor       : %s\n",p->docname);
                        fscanf(fp,"Disease      : %s\n",p->disease);
                        fscanf(fp,"Join Date    : %s\n",p->appdate);
                        fscanf(fp,"Discharge    : %s\n",p->discharge);

                        if(strcmp(admit,"Yes") == 0)
                                p->admit=1;
                        else
                                p->admit=0;

                        p->next=NULL;

                        if(*head == NULL)
                        {
                                *head = p;
                        }
                        else
                        {
                                temp = *head;

                                while(temp->next != NULL)
                                {
                                        temp = temp->next;
                                }
                                temp->next = p;
                        }
                }
        }
        fclose(fp);
}
