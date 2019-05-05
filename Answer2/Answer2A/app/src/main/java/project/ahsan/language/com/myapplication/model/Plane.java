package project.ahsan.language.com.myapplication.model;

import project.ahsan.language.com.myapplication.model.Vehicle;

public class Plane implements Vehicle {

    public Plane() {

    }

    @Override
    public int set_num_of_wheels() {
        return 0;
    }

    @Override
    public int set_num_of_passengers() {
        return 0;
    }

    @Override
    public boolean has_gas() {
        return false;
    }
}
