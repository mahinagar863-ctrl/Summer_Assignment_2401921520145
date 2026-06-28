// Interface
interface Test {
    int square(int n);
}

// Arithmetic class implementing interface
class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

// Outer class with Inner class
class Outer {
    void display() {
        System.out.println("Display method of Outer class");
    }

    class Inner {
        void display() {
            System.out.println("Display method of Inner class");
        }
    }
}

// Point class
class Point {
    private int x, y;

    // Default constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void setX(int x) {
        this.x = x;
    }

    void setY(int y) {
        this.y = y;
    }

    void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void display() {
        System.out.println("Point = (" + x + ", " + y + ")");
    }
}

// Box class
class Box {
    double length, breadth;

    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    double area() {
        return length * breadth;
    }
}

// Box3D class
class Box3D extends Box {
    double height;

    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    double volume() {
        return length * breadth * height;
    }
}

// Main class
public class Main {
    public static void main(String[] args) {

        // Question 1
        System.out.println("Question 1:");
        Arithmetic a = new Arithmetic();
        System.out.println("Square of 5 = " + a.square(5));

        // Question 2
        System.out.println("\nQuestion 2:");
        Outer obj = new Outer();
        obj.display();

        Outer.Inner in = obj.new Inner();
        in.display();

        // Question 3
        System.out.println("\nQuestion 3:");
        Point p = new Point();
        p.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setX(30);
        p2.setY(40);
        p2.display();

        p2.setXY(100, 200);
        p2.display();

        // Question 4
        System.out.println("\nQuestion 4:");
        Box b = new Box(10, 5);
        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(10, 5, 4);
        System.out.println("Area = " + b3.area());
        System.out.println("Volume = " + b3.volume());
    }
}
