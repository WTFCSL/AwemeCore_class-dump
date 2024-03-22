//
//     Generated by private class-dump
//

@protocol AWETeenGeneralCardDelegate;

@protocol AWETeenGeneralCardProtocol <NSObject>

@property (weak, nonatomic) id<AWETeenGeneralCardDelegate> cardDelegate;

- (id)cardDelegate;
- (void)setCardDelegate:(id)arg0;
- (BOOL)playEnable;

@optional

- (double)currPlaybackTime;
- (long long)currPlayIndex;
- (void)seekToPlayIndex:(long long)arg0;
- (id)visibleVideoControllers;
- (id)visibleSlidesViews;
- (void)cardShow;
- (void)cellShow:(id)arg0 atIndex:(long long)arg1;
- (BOOL)canPlay;
- (void)play;
- (void)pause;
- (void)reset;
- (void)seekToTime:(double)arg0;

@end
