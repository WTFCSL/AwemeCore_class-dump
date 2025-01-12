//
//     Generated by private class-dump
//

@class NSArray, MMKV, AWEPictureInPictureController, AWEFeedPiPPlayerContainer, NSString;
@protocol AWEFeedPipOriginPlayerContext, AWEFeedPiPDelegate;

@interface AWEFeedPiPServiceImpl : NSObject <AWEPictureInPictureControllerDelegate, AWEFeedPiPServiceProtocol> {
    BOOL _pictureInPictureEnable;
    BOOL _canAutoStartPictureInPictureEnterBackground;
    BOOL _isStartPiPbyHand;
    BOOL _isClosePiPbyHand;
    BOOL _isFeedAppearing;
    id<AWEFeedPiPDelegate> _delegate;
    MMKV *_mmkv;
    NSArray *_pipVideoWhiteList;
    AWEPictureInPictureController *_awePipController;
    AWEFeedPiPPlayerContainer *_pipContainer;
    id<AWEFeedPipOriginPlayerContext> _currentPlayerContext;
}

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSArray *pipVideoWhiteList;
@property (retain, nonatomic) AWEPictureInPictureController *awePipController;
@property (retain, nonatomic) AWEFeedPiPPlayerContainer *pipContainer;
@property (retain, nonatomic) id<AWEFeedPipOriginPlayerContext> currentPlayerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEFeedPiPDelegate> delegate;
@property (nonatomic) BOOL pictureInPictureEnable;
@property (nonatomic) BOOL canAutoStartPictureInPictureEnterBackground;
@property (nonatomic) BOOL isStartPiPbyHand;
@property (nonatomic) BOOL isClosePiPbyHand;
@property (nonatomic) BOOL isFeedAppearing;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)sharedInstance;

- (id)aAWEPadModuleAdapter;
- (void)playLoadingAnimation;
- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (void)disablePictureInPicture;
- (void)setCanAutoStartPictureInPictureEnterBackground:(BOOL)arg0;
- (id)currentPlayerContext;
- (void)updatePlayState:(long long)arg0;
- (BOOL)isSupportPictureInPictureWithAweme:(id)arg0 referString:(id)arg1;
- (BOOL)isInPictureInPicture;
- (void)preparePictureInPicture;
- (void)updatePlayProgress:(double)arg0;
- (void)setIsFeedAppearing:(BOOL)arg0;
- (BOOL)pictureInPictureEnable;
- (void)setPictureInPictureEnable:(BOOL)arg0;
- (void)setIsStartPiPbyHand:(BOOL)arg0;
- (void)p_applicationDidEnterBackground;
- (void)p_applicationWillEnterForeground;
- (id)awePipController;
- (id)pipContainer;
- (id)pipVideoWhiteList;
- (void)corePreparePictureInPicture;
- (void)setAwePipController:(id)arg0;
- (void)setCurrentPlayerContext:(id)arg0;
- (void)setIsClosePiPbyHand:(BOOL)arg0;
- (void)setupRemoteControl;
- (void)resetRemoteControl;
- (id)pictureInPictureControllerRealPlayerView:(id)arg0;
- (void)pictureInPictureControllerWillStart:(id)arg0;
- (void)pictureInPictureControllerDidStart:(id)arg0;
- (void)pictureInPictureController:(id)arg0 failedToStartWithError:(id)arg1;
- (void)pictureInPictureController:(id)arg0 willStopForRestore:(BOOL)arg1;
- (void)pictureInPictureController:(id)arg0 didStopForRestore:(BOOL)arg1;
- (void)pictureInPictureController:(id)arg0 restoreFromForeground:(BOOL)arg1;
- (void)pictureInPictureController:(id)arg0 playbackStatusDidChanged:(unsigned long long)arg1;
- (void)pictureInPictureController:(id)arg0 seekToTime:(double)arg1 completion:(id /* block */)arg2;
- (double)currentPlaybackTimeOfPictureInPictureController:(id)arg0;
- (void)pictureInPictureController:(id)arg0 didTransToNewSize:(struct { int x0; int x1; })arg1;
- (void)triggerInternalPiP;
- (void)triggerInternalPiPToScene:(id)arg0;
- (BOOL)canAutoStartPictureInPictureEnterBackground;
- (BOOL)isStartPiPbyHand;
- (BOOL)isClosePiPbyHand;
- (BOOL)isFeedAppearing;
- (void)setPipVideoWhiteList:(id)arg0;
- (void)setPipContainer:(id)arg0;
- (void)startPictureInPicture;
- (id)init;
- (void).cxx_destruct;
- (void)stopPictureInPicture;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)syncProgress;
- (void)stopLoadingAnimation;

@end
