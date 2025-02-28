#include "Tiger.h"
using namespace animal_world;

Tiger::Tiger(Sex sex){
    animal_sex = sex;
    cell_speed = 2;
    life_points = 4;
    food_points = 4;
    animal_cannot_move = false;
}

Tiger::Tiger(Sex sex,int id_number,bool animal_cannot_move){
    animal_sex = sex;
    animal_id = id_number;
    cell_speed = 2;
    life_points = 5;
    food_points = 5;
    this->animal_cannot_move = animal_cannot_move;
}

std::string Tiger::get_object_info(){
    std::string result_string = "T-" + std::to_string(animal_id) + "(";
    this->get_animal_sex() == female ? result_string.append("fem,") : result_string.append("mal,");
    result_string.append(std::to_string(this->food_points) + "," + std::to_string(this->life_points) + ") ");
    return result_string;
}

std::string Tiger::get_class_name(){
    return "T-";
}

int Tiger::get_max_food_points(){
    return max_food_points;
}