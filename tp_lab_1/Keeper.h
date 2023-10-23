#pragma once
#include "Cargo.h"
#include "Car.h"
#include "Train.h"
#include "Plane.h"
#include <exception>
// ��������� ���� ������


#include <exception>
#include <string>

class FileInputException : public std::exception {
private:
    std::string errorMessage;

public:
    FileInputException(const std::string& message) : errorMessage(message) {}

    virtual const char* what() const noexcept override {
        return errorMessage.c_str();
    }
};

struct Node {
    Cargo* data;       // �������� ����
    Node* next;     // ��������� �� ��������� ����

    
    Node(int type_of_data, int a)
    {
        if (type_of_data == 1) {
            std::cout << "You are adding Car" << std::endl;
            data = new Car;
            
        }
        else if (type_of_data == 2) {
            std::cout << "You are adding Train" << std::endl;
            data = new Train;
            
        }
        else if (type_of_data == 3) {
            std::cout << "You are adding Plane" << std::endl;
            data = new Plane;
        }
        else
        {
            std::cout << "error";
            return;
        }

        next = nullptr;

    }

    Node(int type_of_data) 
    {        
        if (type_of_data==1) {
            std::cout << "You are adding Car" << std::endl;
            data = new Car;
            data->Set();
        }
        else if (type_of_data==2) {
            std::cout << "You are adding Train" << std::endl;
            data = new Train;
            data->Set();
        }
        else if (type_of_data==3) {
            std::cout << "You are adding Plane" << std::endl;
            data = new Plane;
            data->Set();
        }
        else 
        {
            std::cout << "error";
            return; 
        }

        next = nullptr;
        
    }
};

// ����� ������������ ������
class Keeper {
public:
   Keeper() 
   {
        head = nullptr;     
   }

  

    // ����� ��� ���������� �������� � ������
   void add(int type_of_data); // type_of_data: 1 - Car; 2 - Train; 3 - Plain 
   

    // ����� ��� �������� �������� �� ������
   void remove(int index);

    // ����� ��� ������ ������ �� �����
   void display();

    // ����� ��� ���������� �� ����
   void OutputFile();

    // ����� ��� �������� �� �����
   void InputFile();

private:
    // ��������� �� ������ ���� ������
    Node* head;
};