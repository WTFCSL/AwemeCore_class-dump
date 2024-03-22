//
//     Generated by private class-dump
//

@class NSPointerArray, NSLock;

@interface AWEAudioFocusManager : NSObject {
    NSPointerArray *_listeners;
    NSLock *_lock;
}

@property (retain, nonatomic) NSPointerArray *listeners;
@property (retain, nonatomic) NSLock *lock;

+ (void)startPlay:(id)arg0;
+ (void)stopPlay:(id)arg0;
+ (void)pauseAllAndRemoveRemoteControl;
+ (void)removePlayer:(id)arg0;
+ (id)sharedManager;
+ (BOOL)isPlaying;
+ (void)addPlayer:(id)arg0;
+ (void)pauseAll;

- (void)removeRemoteControlCommand;
- (id)convertType:(id)arg0;
- (void)startPlay:(id)arg0;
- (void)stopPlay:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)listeners;
- (void)setup;
- (void)removePlayer:(id)arg0;
- (id)lock;
- (void)setListeners:(id)arg0;
- (BOOL)isPlaying;
- (void)setLock:(id)arg0;
- (void)addPlayer:(id)arg0;

@end
