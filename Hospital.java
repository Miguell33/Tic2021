package MiCodigo;

public class Hospital {
	private String enfermedad;
	private String nombre;
	private double peso;
	private int edad;
	public Hospital(String enfermedad, String nombre, int edad) {
		this.enfermedad = enfermedad;
		this.nombre = nombre;
		this.edad = edad;
	}
	/**
	 * @return the enfermedad
	 */
	public String getEnfermedad() {
		return enfermedad;
	}
	/**
	 * @param enfermedad the enfermedad to set
	 */
	public void setEnfermedad(String enfermedad) {
		this.enfermedad = enfermedad;
	}
	/**
	 * @return the nombre
	 */
	public String getNombre() {
		return nombre;
	}
	/**
	 * @param nombre the nombre to set
	 */
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	/**
	 * @return the peso
	 */
	public double getPeso() {
		return peso;
	}
	/**
	 * @param peso the peso to set
	 */
	public void setPeso(double peso) {
		this.peso = peso;
	}
	/**
	 * @return the edad
	 */
	public int getEdad() {
		return edad;
	}
	/**
	 * @param edad the edad to set
	 */
	public void setEdad(int edad) {
		this.edad = edad;
	}

}
