//
//     Generated by private class-dump
//

@class UIView, IESLiveAudioBackgroundVideoPlayerView, IESLiveFeedAudioStageViewExtraModel, NSString, TTHttpTask, CAGradientLayer, HTSLiveUser, IESLiveImageView, HTSLiveRoom, IESLiveLinkmicRoomEnterTracker;
@protocol IESLiveInteractionAsyncResourceLoader;

@interface IESLiveFeedAudioNormalStageView : UIView <IESLiveFeedAudioStageViewProtocol, IESLiveInteractionAsyncResourceLoading> {
    BOOL smallMode;
    int _ui_layout;
    HTSLiveRoom *roomModel;
    HTSLiveUser *roomOwner;
    IESLiveFeedAudioStageViewExtraModel *extraModel;
    id<IESLiveInteractionAsyncResourceLoader> asyncResourceLoader;
    IESLiveImageView *_audioBackgroundImageView;
    UIView *_audioWebpBackgroundAnimator;
    IESLiveAudioBackgroundVideoPlayerView *_videoPlayerView;
    IESLiveLinkmicRoomEnterTracker *_roomEnterTracker;
    id /* block */ _firstBgRenderBlock;
    IESLiveImageView *_avatarImageView;
    UIView *_webpAnimator;
    UIView *_backgroundMaskView;
    TTHttpTask *_downloadTask;
    CAGradientLayer *_maskViewLayer;
}

@property (retain, nonatomic) IESLiveImageView *avatarImageView;
@property (retain, nonatomic) UIView *webpAnimator;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) TTHttpTask *downloadTask;
@property (retain, nonatomic) CAGradientLayer *maskViewLayer;
@property (retain, nonatomic) IESLiveImageView *audioBackgroundImageView;
@property (retain, nonatomic) UIView *audioWebpBackgroundAnimator;
@property (retain, nonatomic) IESLiveAudioBackgroundVideoPlayerView *videoPlayerView;
@property (weak, nonatomic) IESLiveLinkmicRoomEnterTracker *roomEnterTracker;
@property (copy, nonatomic) id /* block */ firstBgRenderBlock;
@property (nonatomic) int ui_layout;
@property (retain, nonatomic) HTSLiveUser *roomOwner;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) IESLiveFeedAudioStageViewExtraModel *extraModel;
@property (nonatomic) BOOL smallMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveInteractionAsyncResourceLoader> asyncResourceLoader;

- (id)extraModel;
- (void)setExtraModel:(id)arg0;
- (id)roomModel;
- (id)webpViewWithName:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (void)updateAnchorUser:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListViewFrame;
- (id)allSeatProviderViews;
- (void)configWithListModel:(id)arg0;
- (void)setSmallMode:(BOOL)arg0;
- (id)roomEnterTracker;
- (void)setRoomEnterTracker:(id)arg0;
- (void)setAsyncResourceLoader:(id)arg0;
- (id)asyncResourceLoader;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stageInsetsForAdapterSize:(struct CGSize { double x0; double x1; })arg0;
- (id)audioWebpBackgroundAnimator;
- (void)setAudioWebpBackgroundAnimator:(id)arg0;
- (void)downloadVideoWithUrls:(id)arg0 roomID:(id)arg1 anchorID:(id)arg2 retryCount:(long long)arg3 completion:(id /* block */)arg4;
- (void)setupBackgroundMaskViewLayer;
- (id)maskViewLayer;
- (void)setMaskViewLayer:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 roomOwner:(id)arg1 roomModel:(id)arg2 extra:(id)arg3;
- (void)loadStageView;
- (void)handleSEIParseResult:(id)arg0;
- (BOOL)smallMode;
- (void)loadAudioBackgroundView;
- (void)loadAudioBackgroundWebpAnimator;
- (int)ui_layout;
- (id)audioBackgroundImageView;
- (void)loadNormalAudioAvatarViewIfNeeded;
- (void)setAudioBackgroundImageView:(id)arg0;
- (id /* block */)firstBgRenderBlock;
- (void)loadVideoPlayerIfNeeded;
- (id)webpAnimator;
- (void)setWebpAnimator:(id)arg0;
- (void)setFirstBgRenderBlock:(id /* block */)arg0;
- (void)setUi_layout:(int)arg0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg0;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg0;
- (id)videoPlayerView;
- (void)setVideoPlayerView:(id)arg0;
- (id)roomOwner;
- (void)setRoomOwner:(id)arg0;

@end
