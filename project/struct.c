typedef struct patient
{
        int accno;
        char name[50];
        char phno[10];
        int roomno;
        int admit;
        char docname[50];
        char disease[50];
        char appdate[50];
        char discharge[50];

        struct patient *next;

}patient;

typedef struct pass
{
        char name[50];
        char passw[20];

        struct pass *link;
}pass;
