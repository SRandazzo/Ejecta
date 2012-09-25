#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

#import "EJAudioSource.h"

@interface EJAudioSourceAVAudio : NSObject <EJAudioSource> {
	NSString * path;
	AVAudioPlayer * player;
	NSObject<AVAudioPlayerDelegate> * delegate;
}

@property (nonatomic, assign) NSObject<AVAudioPlayerDelegate> * delegate; 

@end
