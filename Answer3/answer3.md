# Answer of Question 3

Before going through the psuedocodes let us assume that we have models named Video where : 

```
Class Video{
	  Url videoUrl;
	  int durationInMs;
	  int volume;
	  // … other attributes, constructors and getter and setter methods
}  
```

Also I am assuming that the video is already loaded to the videoPlayer. 

So if someone pressed or touched the play button I will execute the method given below.  

```
void playButtonPressed(){
	  if videoPlayer is not loaded 
		      showVideoCannotPlay() // warning
          return
    videoplayer -> startVideo()
}
```




To go fast forward I will jump ahead of the current time. So for each press I will get the current time and jump much ahead of that. Though there are some issues with default videoview of android so I may need to handle it in different way. But the basic idea of what I want to do is given below. Assumed that it will be execute for each press. For long press the given method will be executed multiple times.  

```
void forwardButtonPressed(){
	  currentTime <- videoPlayer.getCurrentPositon or Time;
	  if  video->duration is greater than (currentTime + jumpTime)
        videoPlayer -> setDuration( currentTime + jumpTime )
    else 
	      videoPlayer -> setDuration( video->duration ) //video ended
}
```

Rewind is just the opposite of the forward function. I have to jump backwards this time. So the method is here:  

```
void rewindButtonPressed(){
    currentTime <- videoPlayer.getCurrentPositon or Time
	  if (currentTime - jumpTime) is greater than zero
        videoPlayer -> setDuration( currentTime + jumpTime )
    else 
	      videoPlayer -> setDuration( 0 )
}
```


For this simple application I want to user Model View Presenter design pattern. From view we will notify the presenter about the events and Presenter will decide what to execute. Presenter will have the models and it will maintain show the data according to that. 
