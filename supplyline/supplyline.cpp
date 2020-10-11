#include <iostream>
#include "supplyline.hpp"


SupplyNode::SupplyNode(SupplyNode previous, SupplyNode next, ResourceProducer producer, std::string name){
    previous = previous
    next = next
    producer = producer
    name = name
}
SupplyNode::Unlink(){
    this->previous.next = this->next
    this->next.previous = this->previous
    printf("Unlinking %s from %d and %x", this->name, this->previous.name, this->next.name)
}
SupplyNode::Relink(){
    this->previous.next = this
    this->next.previous = this
    std::cout << "Relinking " << this->name << " to " << this->previous.name << " and " << this->next.name << std::endl; 
}

