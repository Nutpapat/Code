package demo;

public abstract class Song {
	protected String title;
	protected String artist;

	public String getTitle() {
		// Instance Method: Get Title
		return title;
	}
	
	public void setTitle(String title) {
		// Instance Method: Set Title
		this.title = title;
	}
	
	public String getArtist() {
		// Instance Method: Get Artist
		return artist;
	}
	
	public void setArtist(String artist) {
		// Instance Method: Set Artist
		this.artist = artist;
	}
	
	public abstract boolean isPopular();
}
