//
//     Generated by private class-dump
//

@interface IESLiveLinkRTCInteractRtcStats : NSObject {
    unsigned long long _duration;
    double _fps;
    double _bitrate;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) double fps;
@property (nonatomic) double bitrate;

- (double)bitrate;
- (unsigned long long)duration;
- (double)fps;
- (void)setDuration:(unsigned long long)arg0;
- (void)setBitrate:(double)arg0;
- (void)setFps:(double)arg0;

@end