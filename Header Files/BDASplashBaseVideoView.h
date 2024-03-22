//
//     Generated by private class-dump
//

@class NSString, TTVideoEngine;
@protocol BDASplashVideoViewDelegate;

@interface BDASplashBaseVideoView : UIView <TTVideoEngineDelegate, BDASplashVideoProtocol> {
    BOOL _isPrepared;
    id<BDASplashVideoViewDelegate> _delegate;
    TTVideoEngine *_engine;
}

@property (retain, nonatomic) TTVideoEngine *engine;
@property (nonatomic) BOOL isPrepared;
@property (weak, nonatomic) id<BDASplashVideoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (void)videoEngine:(id)arg0 loadStateDidChanged:(unsigned long long)arg1;
- (void)setupBaseVideoEngine;
- (void)videoEngineUserStopped:(id)arg0;
- (void)videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg0;
- (void)videoEngineReadyToDisPlay:(id)arg0;
- (void)setupVideoEngineWithVideoRemoteURLs:(id)arg0 secretKey:(id)arg1;
- (void)setupVideoEngineWithVideoLocalURL:(id)arg0 secretKey:(id)arg1;
- (void)applyGreyThemeWithImage:(id)arg0;
- (void)willResignActive;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)stop;
- (id)engine;
- (double)duration;
- (id)delegate;
- (double)currentTime;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (BOOL)isPrepared;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setEngine:(id)arg0;
- (void)setIsPrepared:(BOOL)arg0;

@end