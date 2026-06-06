void save_data(patient **head)
{
        FILE *fp;
        patient *p=*head;

        fp=fopen("hospital.txt","w");

        if(fp == NULL)
        {
                printf("Unable to open the file !\n");
                return;
        }
        else
        {
                fprintf(fp, "\n===== All Patient Details =====\n");
                while(p != NULL)
                {
                        fprintf(fp, "-----------------------------------\n");
                        fprintf(fp, "Name         : %s\n", p->name);
                        fprintf(fp, "Appoint No   : %d\n", p->accno);
                        fprintf(fp, "Contact      : %s\n", p->phno);
                        fprintf(fp, "Room No      : %d\n", p->roomno);
                        fprintf(fp, "Admitted     : %s\n", p->admit ? "Yes" : "No");
                        fprintf(fp, "Doctor       : %s\n", p->docname);
                        fprintf(fp, "Disease      : %s\n", p->disease);
                        fprintf(fp, "Join Date    : %s\n", p->appdate);
                        fprintf(fp, "Discharge    : %s\n", p->discharge);

                        p = p->next;
                }
        }
        fclose(fp);

        printf("Data saved Successfully !\n");
}
