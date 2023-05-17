#ifndef __DYNAMICINTARRAY_H__
#define __DYNAMICINTARRAY_H__

#include <iostream>
using namespace std;

class DynamicIntegerArray {
    private:
        int *data;
        int size;
    public:
        DynamicIntegerArray(){
            this ->size = 0;
            data = new int[0];
        }
        DynamicIntegerArray(int arr[], int size){
            this ->size = size;
            data = new int[size];
            for (int i=0; i<size; i++){
                data[i] = arr[i];
            }
        }
        DynamicIntegerArray(const DynamicIntegerArray &o){
            this ->size = size;
            data = new int[size];
            for (int i=0; i<size; i++){
                data[i] = o.data[i];
            }
        }

        void print() const {
            cout << "[ ";
            for (int i=0; i<size; i++){
                cout << data[i] << " ";
            }
            cout << " ]" << endl;
        }
        
        void pushback(DynamicIntegerArray &p, int value){
            this->size = p.size + 1;
            delete[] data;
            this->data = new int[size];
            for (int i = 0; i < size; i++)
            {
                if (i < size - 1)
                {
                    data[i] = p.data[i];
                }
                else
                    data[i] = value;
            }
            for (int i = 0; i < size; i++)
            {
                std::cout << data[i] << " ";
            }
            std::cout << std::endl;
        }

        void insert(DynamicIntegerArray &n,int value, int pos){
            this->size = n.size + 1;
            delete[] data;
            this->data = new int[size];
        
            for (int i = 0; i < size; i++){
                if (i < pos - 1)
                    data[i] = n.data[i];
                else if (i > pos - 1)
                    data[i] = n.data[i - 1];
                else
                    data[i] = value;
            }
            for (int i = 0; i < size; i++){
                std::cout << data[i] << " ";
            }
            std::cout << std::endl;
        }
        void eliminar(DynamicIntegerArray &e, int pos){
            this->size = e.size - 1;
            delete[] data;
            this->data = new int[size];
            for (int i = 0; i < size; i++)
            {
                
                if (i < pos - 1)
                {
                    data[i] = e.data[i];
                }
                else if (i >= pos - 1)
                {
                    data[i] = e.data[i + 1];
                }
            }
            for (int i = 0; i < size; i++)
            {
                std::cout << data[i] << " ";
            }
            std::cout << std::endl;
        }
        int getSize() const
        {
            return size;
        }   
        ~DynamicIntegerArray(){
            delete[] data;
            std::cout << "Eliminado correctamente.\n";
        }
};

#endif 