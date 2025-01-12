//
//     Generated by private class-dump
//

@protocol AWEFeedPiPDelegate, AWEFeedPipOriginPlayerContext;

@protocol AWEFeedPiPServiceProtocol <NSObject>

@property (weak, nonatomic) id<AWEFeedPiPDelegate> delegate;
@property (nonatomic) BOOL pictureInPictureEnable;
@property (readonly, nonatomic) id<AWEFeedPipOriginPlayerContext> currentPlayerContext;
@property (nonatomic) BOOL canAutoStartPictureInPictureEnterBackground;
@property (nonatomic) BOOL isStartPiPbyHand;
@property (nonatomic) BOOL isClosePiPbyHand;
@property (nonatomic) BOOL isFeedAppearing;

- (void)playLoadingAnimation;
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
- (void)setIsClosePiPbyHand:(BOOL)arg0;
- (void)triggerInternalPiP;
- (void)triggerInternalPiPToScene:(id)arg0;
- (BOOL)canAutoStartPictureInPictureEnterBackground;
- (BOOL)isStartPiPbyHand;
- (BOOL)isClosePiPbyHand;
- (BOOL)isFeedAppearing;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)syncProgress;
- (void)stopLoadingAnimation;

@end
