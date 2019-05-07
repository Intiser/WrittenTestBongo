package project.ahsan.language.com.secondsampleb.model;

public class Car extends Vehicle {

    public Car(){

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
