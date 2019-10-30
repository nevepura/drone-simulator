/*
- marcare const, come? final
- vedere metodi virtuali
- vedere eccezioni

*/
public abstract class Drone{
	private boolean on;
	private int battery;
	private static int batteryUsage = 1;
	private Coord position;

	// metodo addizionale, stampa i campi dati
	public void print(){
		System.out.println("Drone status:");
		System.out.println("name: "+ getName());
		System.out.println("on: " + on);
		System.out.println("battery: " + battery);
		System.out.println("x coordinate : "+ position.coordX);
		System.out.println("y coordinate : "+ position.coordY);	
	}

	// metodo addizionale, stampa coordinate
	public void printPos(){
		System.out.println( getName() + ": x= "+ position.coordX + ", y= "+position.coordY);
	}
	
	public Drone(boolean s, int b, int x, int y){
		on= s;
		battery= b;
		position= new Coord(x,y);
	}
	public Drone(){
		this(false, 100, 0, 0);
	}


	public boolean isOn(){
		return on;
	}

	public void turnOn() throws Eccezione {
		if(!on){
			useBattery(batteryUsage);
			on= true;
		}
		else
			throw new Eccezione('s');
	}

	public void turnOff() throws Eccezione {
		if(on){
			on= false;
		}
		else
			throw new Eccezione('s');
	}

	public int getBattery(){
		return battery;
	}

	
	// utilità
	public int useBattery(int t) throws Eccezione {
		if(battery>=t){
			battery-=t;
		}
		
		else{
			throw new Eccezione('b');
		}
		
		return t;
	}

	public Coord getPosition(){
		return position;
	}

	// utilità
	public Coord shiftPosition(int x, int y) throws Eccezione {
		
		if(Math.abs(position.coordX + x)>=100 || Math.abs(position.coordY + y)>=100){
       		throw new Eccezione('m');
		}
	    
	    else{
	    	position.coordX+= x;
			position.coordY+=y;
			return position;
		}
	}

	// puro
	public abstract String getName();

	// puro
	public Coord move(int x,int y) throws Eccezione{
		useBattery(batteryUsage);
		return shiftPosition(x,y);
	}

	public abstract Coord move() throws Eccezione;

}
