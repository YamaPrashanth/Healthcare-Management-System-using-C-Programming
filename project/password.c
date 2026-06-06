void password()
{
        FILE *fp;
        pass p;
        char ch;
        int found;
        char uname[50], pwd[20];
        char file_user[50], file_pass[20];

pa:     printf("\nL - Login\n");
        printf("S - Signup\n");
        printf("Enter choice: ");
        scanf(" %c",&ch);
        getchar();

        switch(ch)
        {
                case 'S':
                case 's': printf("\nCreate Username: ");
                          fgets(p.name,50,stdin);
                          p.name[strcspn(p.name,"\n")] = '\0';

                          printf("Create Password: ");
                          fgets(p.passw,20,stdin);
                          p.passw[strcspn(p.passw,"\n")] = '\0';

                          fp = fopen("password.txt","a");
                          fprintf(fp,"Name: %s\n",p.name);
                          fprintf(fp,"Pass: %s\n",p.passw);

                          fclose(fp);
                          printf("Signup Successful!\n");
                          goto pa;
                          break;

                case 'L':
                case 'l': found=0;
                          printf("\nEnter Username: ");
                          fgets(uname,50,stdin);
                          uname[strcspn(uname,"\n")] = '\0';

                          printf("Enter Password: ");
                          fgets(pwd,20,stdin);
                          pwd[strcspn(pwd,"\n")] = '\0';

                          fp = fopen("password.txt","r");

                          if(fp == NULL)
                          {
                                printf("No account found!\n");
                                goto pa;
                          }

                          while(fscanf(fp, "Name: %s\nPass: %s\n",file_user, file_pass) == 2)
                          {
                                  if(strcmp(uname, file_user) == 0 && strcmp(pwd, file_pass) == 0)
                                  {
                                          found = 1;
                                          break;
                                  }
                          }

                          fclose(fp);

                          if(found)
                          {
                                  printf("Login Successful!\n");
                          }
                          else
                          {
                                  printf("Invalid Username or Password!\n");
                                  goto pa;
                          }
                          break;
                default:  printf("Invalid Choice!\n");
                          goto pa;
        }
}
