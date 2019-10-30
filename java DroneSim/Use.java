
public class Use{
	public static void main(String args[]) throws Eccezione {
		try{
			
			System.out.println("Inizializzatione...");
			
			// Coord()
			Coord c0 = new Coord();
			System.out.println("c0: "+c0.coordX + ','+ c0.coordY);

			Coord c1 = new Coord(24,30);
			System.out.println("c1: "+c1.coordX + ','+ c1.coordY);

			// modelo: DRONE EX

			//DroneEx(booean,int,int,int)
			Drone ex = new DroneEx(true,20,3,6);
			//print()[usa getName(), polimorfico], printPos()
			ex.print();
			ex.printPos();
			// isOn()
			if(ex.isOn())
				System.out.println("is on");
			else
				System.out.println("is off");
			
			//getBattery()
			System.out.println("battery: "+ex.getBattery());

			//turnOn() [usa useBattery()] , turnOff()
			ex.turnOff();
			ex.turnOn(); // -1 batteria

			System.out.println("battery: "+ex.getBattery() );

			// move(), polimorfico [usa useBattery(), shiftPos()]
			ex.move();
			

			ex.printPos(); // +1,+1 coordinate, -5 batteria

			System.out.println("battery: "+ex.getBattery());



			System.out.print("~~~~~~~~~~~~~~~~\n\n");

			// modello: DRONE PLUS

			//DronePlus(booean,int,int,int)
			Drone pl = new DronePlus(true,40,80,70);
			//print()[usa getName(), polimorfico], printPos()
			pl.print();
			pl.printPos();
			// isOn()
			if(pl.isOn())
				System.out.println("is on");
			else
				System.out.println("is off");
			
			//getBattery()
			System.out.println("battery: "+pl.getBattery());

			//turnOn() [usa useBattery()] , turnOff()
			pl.turnOff();
			pl.turnOn(); // -1 batteria

			System.out.println("battery: "+pl.getBattery() );

			// move(), polimorfico [usa useBattery(), shiftPos()]
			pl.move();
			

			pl.printPos(); // +0,+1 coordinate, -3 batteria

			System.out.println("battery: "+pl.getBattery());

			

		}
		catch(Eccezione e){
			System.out.println("Eccezione catturata");
			e.stampa();
		}
	}//END MAIN
}//END USE