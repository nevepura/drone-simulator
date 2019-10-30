class DroneEx extends Drone{
	private static int batteryUsage = 5;

    public DroneEx(boolean s, int b, int x, int y){
    	super(s,b,x,y);
    }
    public DroneEx(){
		this(false, 100, 0, 0);
	}


    public String getName(){
    	return "Drone Ex";
    }

    public Coord move(int x, int y) throws Eccezione {
    	if(Math.abs(x)==1 && Math.abs(y)==1 ){
	        return super.move(x,y);
	    }
	    else{
	        throw new Eccezione('m');
	    }
    }

    public Coord move() throws Eccezione {
    	return this.move(1,1);
    }
}