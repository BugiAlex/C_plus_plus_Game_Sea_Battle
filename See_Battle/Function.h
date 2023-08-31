
//Функция стартового окна
void StartWindow();

//Функция выводит на экран 2 игровых поля
void PrintField(char aP[][11], char aC[][11], HANDLE hStdOut);

//Функция автоматически заполняет игровые поля кораблями
void shipAlignmentAutomatically(char arrrayy[][11]);

//Функция для заполнения игровых полей кораблями вручную
void manualShipPlacement(char arr[][11]);

//Функция выводит на экран одно игровое поле (используется при заполнении массива вручную)
void printAligment(char aP[][11]);

//Функция считывает строку символов и преобразовавает его в int значения координат
void readEnterSring(int *i, int *j);

//Функция заполниет массивы нулями
void inicializationArray(char arr[][11]);

//Функция ходов человека
void HumanMove(char humanField[][11], char computerField[][11],char humanMove[][11], HANDLE hStdOut);

//Функция заполняет пространство вокруг уничтоженного корабля "промахами"
void FreeSpace(char humanField[][11], char humanMove[][11], int &i, int &j);

//Функция проверяет после попадания в корабль подбит он или уничтожен 
bool ShipDestructionCheck(char computerField[][11], int i, int j);

//Функция ходов компьютера
void ComputerMove(char humanField[][11], bool* state, int* i, int* j);

//Функция проверяет уничтожены ли все корабли
bool CheckVictoty(char arr[][11]);