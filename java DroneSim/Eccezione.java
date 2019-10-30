public class Eccezione extends Exception{

    private char quale;

    public Eccezione(char c){
    	quale = c;
    }

    public void stampa(){
    	switch(quale){
    		case('b'):
		        System.out.println("Batteria esaurita");
		        break;
		    
		    case('m'):
		        System.out.println("Mossa non valida");
		        break;
		    case ('s'):
		    	System.out.println("Accensione/spegnimento già eseguito");
		    	break;
		    case('v'):
		        System.out.println("Valori non validi");
		        break;
		    default:
		        System.out.println("Eccezione generica");
		        break;
	    }
    }

}