//
//     Generated by private class-dump
//

@interface BDLinkProgressInfo : NSObject {
    long long _currentTime;
    long long _duration;
    unsigned long long _playStatus;
}

@property (nonatomic) long long currentTime;
@property (nonatomic) long long duration;
@property (nonatomic) unsigned long long playStatus;

- (unsigned long long)playStatus;
- (void)setPlayStatus:(unsigned long long)arg0;
- (void)setCurrentTime:(long long)arg0;
- (long long)duration;
- (long long)currentTime;
- (void)setDuration:(long long)arg0;

@end
