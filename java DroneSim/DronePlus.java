class DronePlus extends Drone{
	private static int batteryUsage = 3;

    public DronePlus(boolean s, int b, int x, int y){
    	super(s,b,x,y);
    }
    public DronePlus(){
		this(false, 100, 0, 0);
	}


    public String getName(){
    	return "Drone Plus";
    }

    public Coord move(int x, int y) throws Eccezione {
    	if( (x==0 && Math.abs(y)==1) || (y==0 && Math.abs(x)==1) ){
	        return super.move(x,y);
	    }
	    else{
	        throw new Eccezione('m');
	    }
    }

    public Coord move() throws Eccezione {
    	return this.move(0,1);
    }
}