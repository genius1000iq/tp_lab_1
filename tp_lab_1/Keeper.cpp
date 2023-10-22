#include "Keeper.h"



void Keeper::OutputFile()
{
    if (head == nullptr) {
        std::cout << "Список пуст!" << std::endl;
        return;
    }

    Node* temp = head;
    int index = 1;
    while (temp != nullptr) {
        std::cout << index << ". ";
        index++;
        temp->data->OutputFile();
        temp = temp->next;
    }
    std::cout << std::endl;
}

void Keeper::add(int type_of_data)
{
    Node* newNode = new Node(type_of_data);

    if (head == nullptr) {
        head = newNode;
    }

    else
    {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void Keeper::InputFile()
{
    std::fstream in;                     // создаем поток
    in.open(path_input, std::ios::in);   // открываем файл для чтения
    if (in)                              // если файл открылся
    {
        while (1)
        {
            std::string buf;                // создаем буфер, куда будет считываться информация
            getline(in, buf);
            if (buf.empty() || buf=="\n")
                return;
            int type_of_data = stoi(buf);
            Node* newNode = new Node(type_of_data, 2);

            if (type_of_data == 1)
            {
                //You are adding Car
                //newNode->data = new Car;

                getline(in, buf);
                newNode->data->SetBrand(buf);

                getline(in, buf);
                newNode->data->SetYearOfIssue(stoi(buf));

                getline(in, buf);
                newNode->data->SetModel(buf);

                getline(in, buf);
                newNode->data->SetCountOfCars(buf);

                getline(in, buf);
                newNode->data->SetCountOfCities(stoi(buf));

                int tmp = stoi(buf);
                if (tmp > 0)
                {
                    for (int i = 0; i < tmp; i++)
                    {
                        std::string name;
                        std::string tmphours;
                        std::string volume;
                        int hours;
                        getline(in, name);
                        getline(in, tmphours);
                        hours = stoi(tmphours);
                        getline(in, volume);
                        newNode->data->SetCitiesAndExtra(name, volume, hours,i);
                       
                    }

                }
            }
            else if (type_of_data == 2)
            {
                std::cout << "You are adding Train" << std::endl;
                //  newNode->data = new Train;

                getline(in, buf);
                newNode->data->SetName(buf);

                getline(in, buf);
                newNode->data->SetYearOfIssue(stoi(buf));

                getline(in, buf);
                newNode->data->SetRoute(buf);

                getline(in, buf);
                newNode->data->SetCountOfCars(buf);

                getline(in, buf);
                newNode->data->SetVolume(buf);

            }

            else if (type_of_data == 3)
            {
                std::cout << "You are adding Plane" << std::endl;
                //  Cargo* data = new Plane;

                getline(in, buf);
                newNode->data->SetType(buf);

                getline(in, buf);
                newNode->data->SetName(buf);

                getline(in, buf);
                newNode->data->SetSize(buf);

                getline(in, buf);
                newNode->data->SetCities(buf);

                getline(in, buf);
                newNode->data->SetVolume(buf);
            }
            else
            {
                std::cout << "error";
                return;
            }

            newNode->next = nullptr;


            if (head == nullptr)
            {
                head = newNode;
            }
            else
            {
                Node* temp = head;
                while (temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

    }
    else return;
   
    in.close();
}

void Keeper::display() 
{
    if (head == nullptr) {
        std::cout << "Список пуст!" << std::endl;
        return;
    }

    Node* temp = head;
    int index = 1;
    while (temp != nullptr) {
        std::cout << index<<". ";
        index++;
        temp->data->Print();
        temp = temp->next;
    }
    std::cout << std::endl;
}

void Keeper::remove(int index) {
    if (head == nullptr) {
        std::cout << "Список пуст!" << std::endl;
        return;
    }

    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;
    int currentPosition = 0;

    while (temp != nullptr) {
        if (currentPosition == index) {
            prev->next = temp->next;
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
        currentPosition++;
    }

    std::cout << "Некорректный индекс!" << std::endl;
}