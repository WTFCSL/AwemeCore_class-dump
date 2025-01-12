//
//     Generated by private class-dump
//

@class NSString, AWETeenExtraParamModel, UIView, AWEAwemeModel, NSNumber;
@protocol IESVideoPlayerProtocol, AWETeenDisplayViewControllerDelegate;

@protocol AWETeenDisplayViewControllerProtocol <NSObject>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWETeenDisplayViewControllerDelegate> interactionDelegate;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (nonatomic) BOOL pauseBySingleClick;
@property (nonatomic) long long vcType;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (nonatomic) long long playState;
@property (readonly, nonatomic) UIView *loadingView;
@property (retain, nonatomic) NSNumber *slideType;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long playType;
@property (readonly, nonatomic) BOOL isShowLoading;
@property (copy, nonatomic) id /* block */ didChangePlayBackAction;
@property (copy, nonatomic) id /* block */ initSeekEnd;
@property (copy, nonatomic) id /* block */ playComingToEnd;
@property (copy, nonatomic) id /* block */ willLoopPlaying;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic) BOOL isReady;
@property (nonatomic) BOOL isSeeking;

- (id)referString;
- (void)setReferString:(id)arg0;
- (BOOL)shouldPrepareForDisplay;
- (void)setShouldPrepareForDisplay:(BOOL)arg0;
- (void)setPauseHidden:(BOOL)arg0;
- (void)updatePlayerIfNeeded;
- (void)updatePlayerController:(id)arg0 withPlayVideoVC:(id)arg1;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:(BOOL)arg0;
- (id)slideType;
- (void)setSlideType:(id)arg0;
- (long long)playType;
- (void)setPlayType:(long long)arg0;
- (id /* block */)willLoopPlaying;
- (void)setWillLoopPlaying:(id /* block */)arg0;
- (void)setVcType:(long long)arg0;
- (id)extraParam;
- (void)setExtraParam:(id)arg0;
- (id /* block */)didChangePlayBackAction;
- (void)setDidChangePlayBackAction:(id /* block */)arg0;
- (long long)vcType;
- (id /* block */)initSeekEnd;
- (id /* block */)playComingToEnd;
- (BOOL)isShowLoading;
- (void)setInitSeekEnd:(id /* block */)arg0;
- (void)setPlayComingToEnd:(id /* block */)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (id)model;
- (void)setInteractionDelegate:(id)arg0;
- (BOOL)stop;
- (id)interactionDelegate;
- (BOOL)play:(BOOL)arg0;
- (BOOL)isActive;
- (BOOL)isPlaying;
- (BOOL)pause;
- (void)reset;
- (BOOL)pause:(BOOL)arg0;
- (id)loadingView;
- (long long)playState;
- (void)setPlayState:(long long)arg0;

@optional

- (void)updateCoverImage;
- (void)setIsSeeking:(BOOL)arg0;
- (void)willDisplayWithFromSlideUp:(id)arg0 usingPreloaded:(BOOL)arg1;
- (id)currentPlayerView;
- (id)playerController;
- (BOOL)isReady;
- (void)setPlayerController:(id)arg0;
- (BOOL)isSeeking;
- (void)seekToTime:(double)arg0;
- (void)setIsReady:(BOOL)arg0;

@end
