package MiCodigo;

public class ManejaHospital {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Hospital paciente1;
		paciente1=new Hospital("f","Paula",23);
		System.out.println(" y se llama" +paciente1.getNombre());
		System.out.println(""+paciente1.getEnfermedad());
		System.out.println(paciente1.getEdad());

	}
}
