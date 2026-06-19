interface Playable {
    void play();
}

class Veena implements Playable {

    @Override
    public void play() {
        System.out.println("Playing Veena");
    }
}

class Saxophone implements Playable {

    @Override
    public void play() {
        System.out.println("Playing Saxophone");
    }
}

public class Test {
    public static void main(String[] args) {

        // a. Create an instance of Veena and call play()
        Veena v = new Veena();
        v.play();

        // b. Create an instance of Saxophone and call play()
        Saxophone s = new Saxophone();
        s.play();

        // c. Place the instances in a Playable reference
        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}
