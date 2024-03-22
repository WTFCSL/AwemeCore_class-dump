//
//     Generated by private class-dump
//

@protocol IESLiveAlphaVideoPlayerActionDelegate, IESLiveAlphaVideoPlayerCallbackDelegate;

@protocol IESLiveAlphaVideoPlayerDelegate <NSObject>

@property (weak, nonatomic) id<IESLiveAlphaVideoPlayerCallbackDelegate> playerCallbackDelegate;
@property (weak, nonatomic) id<IESLiveAlphaVideoPlayerActionDelegate> playerActionDelegate;

- (void)startPlayWithConfiguration:(id)arg0;
- (void)setPlayerCallbackDelegate:(id)arg0;
- (id)playerCallbackDelegate;
- (id)playerActionDelegate;
- (void)setPlayerActionDelegate:(id)arg0;

@optional

- (void)stopPlaying;
- (BOOL)isPlaying;

@end