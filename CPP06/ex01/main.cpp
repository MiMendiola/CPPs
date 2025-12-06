#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    data->data = "Data here";

    uintptr_t ptr = Serializer::serialize(data);

    Data *newData = Serializer::deserialize(ptr);
    
    std::cout << "Original: " << data->data << std::endl;
    std::cout << "UNITPTR serializated: " << ptr << std::endl;
    std::cout << "Newdata deserializated: " << newData->data << std::endl;
    
    newData->data = "I can modify the data";
    std::cout << "Newdata modify: " << newData->data << std::endl;

    delete data;

    return 0;
}