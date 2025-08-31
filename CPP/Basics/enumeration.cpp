//
// Created by Lenovo on 24-07-2025.
//
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

// enum Direction {
//     left = "left" , right= "right", up = "up", down = "down" // the code is invalid because we cannot assign a string to enumeration
// };

enum Direction {
    left, right , up, down
};
std::string to_string(Direction dir) {
    switch (dir) {
            case left:
            return "left";
            case right:
            return "right";
            case up:
            return "up";
            case down:
            return "down";
    }
}

int main() {
    Direction mortar = right;
    Direction dir = left;
    std::cout<<  to_string(mortar) ;

}
