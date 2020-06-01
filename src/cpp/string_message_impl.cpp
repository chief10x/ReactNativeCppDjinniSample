#include "string_message_impl.hpp"
#include <string>
 
namespace stringmessage {
    
    std::shared_ptr<StringMessage> StringMessage::create() {
        return std::make_shared<StringMessageImpl>();
    }
    
    StringMessageImpl::StringMessageImpl() {
 
    }
    
    std::string StringMessageImpl::get_string_message() {
        std::string myString = "C++ says Hello World! HolyShit btw";
        return myString;
    }   
}