package project.ahsan.language.com.secondsampleb.model;

public class Plane extends Vehicle {

    public Plane(){

    }

    @Override
    int setNumOfWheels() {
        return 0;
    }

    @Override
    int setNumOfPassengers() {
        return 0;
    }

    @Override
    boolean hasGas() {
        return false;
    }
}
