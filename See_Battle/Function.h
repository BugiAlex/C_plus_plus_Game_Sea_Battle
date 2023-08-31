
//������� ���������� ����
void StartWindow();

//������� ������� �� ����� 2 ������� ����
void PrintField(char aP[][11], char aC[][11], HANDLE hStdOut);

//������� ������������� ��������� ������� ���� ���������
void shipAlignmentAutomatically(char arrrayy[][11]);

//������� ��� ���������� ������� ����� ��������� �������
void manualShipPlacement(char arr[][11]);

//������� ������� �� ����� ���� ������� ���� (������������ ��� ���������� ������� �������)
void printAligment(char aP[][11]);

//������� ��������� ������ �������� � ��������������� ��� � int �������� ���������
void readEnterSring(int *i, int *j);

//������� ��������� ������� ������
void inicializationArray(char arr[][11]);

//������� ����� ��������
void HumanMove(char humanField[][11], char computerField[][11],char humanMove[][11], HANDLE hStdOut);

//������� ��������� ������������ ������ ������������� ������� "���������"
void FreeSpace(char humanField[][11], char humanMove[][11], int &i, int &j);

//������� ��������� ����� ��������� � ������� ������ �� ��� ��������� 
bool ShipDestructionCheck(char computerField[][11], int i, int j);

//������� ����� ����������
void ComputerMove(char humanField[][11], bool* state, int* i, int* j);

//������� ��������� ���������� �� ��� �������
bool CheckVictoty(char arr[][11]);