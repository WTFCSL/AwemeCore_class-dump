//
//     Generated by private class-dump
//

@interface AWEClassroomImpl.ClassroomPlayingCenterPart : NSObject <AWENowPlayingInfoPlayerProtocol> {
    void /* unknown type, empty encoding */ courseInfo;
    void /* unknown type, empty encoding */ lessonInfo;
    void /* unknown type, empty encoding */ playingInfo;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ playBackRate;
}

- (void)playForRemoteControl;
- (void)pauseForRemoteControl;
- (void)seekToTimeForRemoteControl:(double)arg0;
- (void)playPrevForRemoteControl;
- (void)playNextForRemoteControl;
- (BOOL)canPlayForRemoteControl;
- (BOOL)canPauseForRemoteControl;
- (BOOL)canPlayPrevForRemoteControl;
- (BOOL)canPlayNextForRemoteControl;
- (BOOL)canSeekForRemoteControl;
- (id)nowPlayingInfo;
- (void)didBecomeActive;
- (id)init;
- (void)didEnterBackground;
- (void).cxx_destruct;

@end
