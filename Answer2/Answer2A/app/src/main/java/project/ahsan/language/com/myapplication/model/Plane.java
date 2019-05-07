package project.ahsan.language.com.myapplication.model;

import project.ahsan.language.com.myapplication.model.Vehicle;

public class Plane implements Vehicle {

    public Plane() {

    }


    @Override
    public int setNumOfWheels() {
        return 0;
    }

    @Override
    public int setNumOfPassengers() {
        return 0;
    }

    @Override
    public boolean hasGas() {
        return false;
    }
}
