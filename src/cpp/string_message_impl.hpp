
#pragma once
 
#include "../../djinni/cpp/string_message.hpp"
 
namespace stringmessage {
    
    class StringMessageImpl : public stringmessage::StringMessage {
        
    public:
        
        // Constructor
        StringMessageImpl();
        
        // Our method that returns a string
        std::string get_string_message();
        
    };
    
}