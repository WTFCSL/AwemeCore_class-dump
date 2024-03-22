//
//     Generated by private class-dump
//

@interface VENetworkFileInfo : NSObject {
    BOOL _hasAudio;
    BOOL _hasVideo;
    long long _duration;
    long long _width;
    long long _height;
    long long _fps;
}

@property (nonatomic) long long duration;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long fps;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) BOOL hasVideo;

- (long long)height;
- (long long)duration;
- (BOOL)hasVideo;
- (void)setWidth:(long long)arg0;
- (void)setHasVideo:(BOOL)arg0;
- (BOOL)hasAudio;
- (void)setHeight:(long long)arg0;
- (long long)fps;
- (long long)width;
- (void)setHasAudio:(BOOL)arg0;
- (void)setDuration:(long long)arg0;
- (void)setFps:(long long)arg0;

@end