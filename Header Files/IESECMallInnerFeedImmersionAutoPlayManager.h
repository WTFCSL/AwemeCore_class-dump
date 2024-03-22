//
//     Generated by private class-dump
//

@class NSString, IESECTracker;

@interface IESECMallInnerFeedImmersionAutoPlayManager : UIView <IESECMallInnerFeedImmersionAutoPlayManagerDelegate> {
    BOOL _mute;
    BOOL _isInnerTheme;
    BOOL _isPeriodicTime;
    IESECTracker *_tracker;
}

@property (nonatomic) BOOL isPeriodicTime;
@property (nonatomic) BOOL mute;
@property (weak, nonatomic) IESECTracker *tracker;
@property (nonatomic) BOOL isInnerTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsInnerTheme:(BOOL)arg0;
- (BOOL)isInnerTheme;
- (void)startPlayVideoWithCell:(id)arg0;
- (void)startImageAutoSlideWithCell:(id)arg0;
- (void)stopPlayVideoWithCell:(id)arg0;
- (void)stopImageAutoSlideWithCell:(id)arg0;
- (void)reportLivePlaybackWithCell:(id)arg0 playSuccess:(BOOL)arg1;
- (void)setIsPeriodicTime:(BOOL)arg0;
- (void)addPeriodicTimeObserverWithCell:(id)arg0;
- (BOOL)isPeriodicTime;
- (void)muteTagViewDidTap:(BOOL)arg0;
- (long long)startAutoPlayWithCell:(id)arg0;
- (long long)stopAutoPlayWithCell:(id)arg0;
- (void)willBeginDraggingWithCell:(id)arg0;
- (long long)didScrollToIndex:(long long)arg0 withCell:(id)arg1;
- (void)didChangePlayState:(unsigned long long)arg0 withCell:(id)arg1;
- (long long)playbackFailedWithCell:(id)arg0;
- (BOOL)mute;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setMute:(BOOL)arg0;

@end