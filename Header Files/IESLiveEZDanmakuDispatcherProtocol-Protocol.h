//
//     Generated by private class-dump
//

@protocol IESLiveEZDanmakuDispatcherDelegate;

@protocol IESLiveEZDanmakuDispatcherProtocol <NSObject>

@property (weak, nonatomic) id<IESLiveEZDanmakuDispatcherDelegate> delegate;

- (void)fragmentOrientationChanged:(long long)arg0;
- (void)updateWithEZDanamkuSettings:(id)arg0;
- (void)deactivateAllSpirits;
- (id)activatedSpirits;
- (void)addEZDanmakuSiprit:(id)arg0;
- (void)dispatchSpirits;
- (void)assembleReuseViewPool:(id)arg0;
- (void)clearQueuedSpirits;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
