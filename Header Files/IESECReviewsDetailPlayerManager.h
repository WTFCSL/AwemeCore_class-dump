//
//     Generated by private class-dump
//

@class NSString, NSMapTable, IESECVideoPlayerView;

@interface IESECReviewsDetailPlayerManager : NSObject <IESECVideoPlayerViewDelegate> {
    NSMapTable *_delegateMap;
    id /* block */ _playerGrabbedBlock;
    IESECVideoPlayerView *_player;
    BOOL _playerIsPlayingWhenApplicationResignActive;
    long long _activatedSectionIndex;
    long long _activatedRowIndex;
}

@property (nonatomic) long long activatedSectionIndex;
@property (nonatomic) long long activatedRowIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)playerDidReadyForDisplay;
- (void)playerDidChangePlaybackStateWithAction:(unsigned long long)arg0;
- (void)setActivatedRowIndex:(long long)arg0;
- (long long)activatedSectionIndex;
- (long long)activatedRowIndex;
- (BOOL)playerIsPlaying;
- (id)playerWithTarget:(id)arg0 playerWillBeGrabbedByTarget:(id /* block */)arg1;
- (void)addDelegateTarget:(id)arg0;
- (void)seekPlayerToTime:(double)arg0;
- (void)setActivatedSectionIndex:(long long)arg0;
- (void)applicationWillResignActive:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)stopPlaying;
- (void)applicationDidBecomeActive:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;

@end
