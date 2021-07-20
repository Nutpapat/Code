package demo;

public class PopSong extends Song {
	private int sale;
	
	public PopSong(String title, String artist) {
		// Constructor
		this.setTitle(title);
		this.setArtist(artist);
	}

	public int getSale() {
		// Instance Method: Get Sale
		return sale;
	}

	public void setSale(int sale) {
		// Instance Method: Set Sale
		this.sale = sale;
	}

	public boolean isPopular() {
		// Instance Method: Returns popular status
		return (this.sale > 100000);
	}
}
