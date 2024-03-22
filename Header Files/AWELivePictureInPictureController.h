//
//     Generated by private class-dump
//

@class UIView, NSNumber, NSURL, AVPlayerItem, NSString, UIViewController, AVPictureInPictureController, AVPlayerLayer, AVPlayer;
@protocol AWELivePictureInPictureControllerDelegate;

@interface AWELivePictureInPictureController : NSObject <AVPictureInPictureControllerDelegate> {
    BOOL _shouldPauseInBackground;
    BOOL _restored;
    BOOL _stopByHand;
    BOOL _isBackground;
    BOOL _pipPausedInBackground;
    BOOL _enableUseNewStartPictureInPicture;
    UIView *_realPlayerView;
    UIViewController *_returnToVC;
    NSURL *_avPlayerPath;
    NSNumber *_currentRoomId;
    id /* block */ _stopCompletionBlock;
    id<AWELivePictureInPictureControllerDelegate> _pipDelegate;
    long long _stopPipType;
    AVPlayer *_avPlayer;
    AVPictureInPictureController *_pipController;
    AVPlayerItem *_avPlayerItem;
    AVPlayerLayer *_avPlayerLayer;
    UIView *_avLayerContainer;
}

@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPictureInPictureController *pipController;
@property (retain, nonatomic) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic) AVPlayerLayer *avPlayerLayer;
@property (retain, nonatomic) UIView *avLayerContainer;
@property (nonatomic) BOOL restored;
@property (nonatomic) BOOL stopByHand;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL pipPausedInBackground;
@property (nonatomic) BOOL enableUseNewStartPictureInPicture;
@property (retain, nonatomic) UIView *realPlayerView;
@property (retain, nonatomic) UIViewController *returnToVC;
@property (retain, nonatomic) NSURL *avPlayerPath;
@property (retain, nonatomic) NSNumber *currentRoomId;
@property (nonatomic) BOOL shouldPauseInBackground;
@property (copy, nonatomic) id /* block */ stopCompletionBlock;
@property (weak, nonatomic) id<AWELivePictureInPictureControllerDelegate> pipDelegate;
@property (nonatomic) long long stopPipType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)p_enableUnifyClear;
- (void)setStopByHand:(BOOL)arg0;
- (void)setPipPausedInBackground:(BOOL)arg0;
- (void)setStopPipType:(long long)arg0;
- (void)setRealPlayerView:(id)arg0;
- (void)setReturnToVC:(id)arg0;
- (void)setAvPlayerPath:(id)arg0;
- (BOOL)enableUseNewStartPictureInPicture;
- (id)pipDelegate;
- (void)setAvLayerContainer:(id)arg0;
- (id)avLayerContainer;
- (void)appWillEnterFreground;
- (void)p_stopPictureInPictureInBackGround;
- (void)setCurrentRoomId:(id)arg0;
- (BOOL)stopByHand;
- (id)realPlayerView;
- (BOOL)pipPausedInBackground;
- (long long)stopPipType;
- (id /* block */)stopCompletionBlock;
- (void)setStopCompletionBlock:(id /* block */)arg0;
- (void)resumePictureInPictureForeground;
- (void)pausePictureInPictureBackground;
- (BOOL)shouldPauseInBackground;
- (void)initialPipControllerWithRealPlayerView:(id)arg0 returnToVC:(id)arg1 avPlayerPath:(id)arg2;
- (void)setAvPlayerPlay:(BOOL)arg0;
- (void)setEnableUseNewStartPictureInPicture:(BOOL)arg0;
- (id)returnToVC;
- (id)avPlayerPath;
- (id)currentRoomId;
- (void)setShouldPauseInBackground:(BOOL)arg0;
- (void)setPipDelegate:(id)arg0;
- (id)pipController;
- (void)startPictureInPicture;
- (void)setIsBackground:(BOOL)arg0;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg0;
- (void).cxx_destruct;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg0;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg0;
- (void)pictureInPictureController:(id)arg0 failedToStartPictureInPictureWithError:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg0;
- (void)stopPictureInPicture;
- (void)pictureInPictureController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg1;
- (void)setPipController:(id)arg0;
- (void)clearWithReason:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (BOOL)isBackground;
- (id)avPlayerItem;
- (id)avPlayer;
- (id)avPlayerLayer;
- (void)setAvPlayer:(id)arg0;
- (void)setAvPlayerItem:(id)arg0;
- (void)setAvPlayerLayer:(id)arg0;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)setRestored:(BOOL)arg0;
- (BOOL)restored;

@end
