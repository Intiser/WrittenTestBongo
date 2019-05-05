package project.ahsan.language.com.secondsampleb.model;

public class Plane extends Vehicle {

    public Plane(){

    }

    @Override
    int set_num_of_wheels() {
        return 0;
    }

    @Override
    int set_num_of_passengers() {
        return 0;
    }

    @Override
    boolean has_gas() {
        return false;
    }
}
