//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface AFDMomentCameraLayoutManager : NSObject <CKMCameraViewLayoutProtocol> {
    BOOL _isLargerCaptureRatio;
    BOOL _shouldShowNewJourneyTips;
    UIView *_containerView;
    UIView *_interactionView;
    UIView *_preview;
    UIView *_titleLabel;
    UIView *_titleButton;
    UIView *_captureButton;
    UIView *_videoCaptureView;
    UIView *_durationView;
    UIView *_cameraLeftButton;
    UIView *_cameraRightButton;
    UIView *_scaleButton;
    UIView *_deleteButton;
    UIView *_downloadButton;
    UIView *_publishButton;
    UIView *_filterScrollView;
    UIView *_focusView;
    UIView *_privacyInfoView;
    UIView *_shareListView;
    UIView *_tipLabel;
    UIView *_captureRatioButton;
    UIView *_bubbleAnchor;
    UIView *_holderView;
    UIView *_slidingTabbarView;
    UIView *_slidingVCView;
    UIView *_textStickerContainerView;
    UIView *_textTrashButton;
    UIView *_textContainerView;
}

@property (class, readonly, nonatomic) double contentTopMargin;

@property (retain, nonatomic) UIView *preview;
@property (retain, nonatomic) UIView *titleLabel;
@property (retain, nonatomic) UIView *titleButton;
@property (retain, nonatomic) UIView *captureButton;
@property (retain, nonatomic) UIView *videoCaptureView;
@property (retain, nonatomic) UIView *durationView;
@property (retain, nonatomic) UIView *cameraLeftButton;
@property (retain, nonatomic) UIView *cameraRightButton;
@property (retain, nonatomic) UIView *scaleButton;
@property (retain, nonatomic) UIView *deleteButton;
@property (retain, nonatomic) UIView *downloadButton;
@property (retain, nonatomic) UIView *publishButton;
@property (retain, nonatomic) UIView *filterScrollView;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIView *privacyInfoView;
@property (retain, nonatomic) UIView *shareListView;
@property (retain, nonatomic) UIView *tipLabel;
@property (retain, nonatomic) UIView *captureRatioButton;
@property (retain, nonatomic) UIView *interactionView;
@property (retain, nonatomic) UIView *bubbleAnchor;
@property (retain, nonatomic) UIView *holderView;
@property (retain, nonatomic) UIView *slidingTabbarView;
@property (retain, nonatomic) UIView *slidingVCView;
@property (retain, nonatomic) UIView *textStickerContainerView;
@property (retain, nonatomic) UIView *textTrashButton;
@property (retain, nonatomic) UIView *textContainerView;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isLargerCaptureRatio;
@property (nonatomic) BOOL shouldShowNewJourneyTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)contentTopMargin;
+ (double)getContentHeight;
+ (double)previewToNavigationBarMargin;
+ (long long)captureButtonBottomMargin;
+ (double)getRatio;
+ (double)getRatioJudge;
+ (BOOL)bottomOverlapHidden;
+ (double)statusBarHeight;
+ (double)navigationBarHeight;
+ (double)previewWidth;
+ (double)previewCornerRadius;

- (BOOL)shouldShowNewJourneyTips;
- (id)holderView;
- (void)setHolderView:(id)arg0;
- (void)setIsLargerCaptureRatio:(BOOL)arg0;
- (BOOL)isLargerCaptureRatio;
- (id)publishButton;
- (void)setPublishButton:(id)arg0;
- (id)captureRatioButton;
- (void)setPrivacyInfoView:(id)arg0;
- (id)privacyInfoView;
- (void)setSlidingTabbarView:(id)arg0;
- (id)slidingTabbarView;
- (void)setCameraRightButton:(id)arg0;
- (void)setCameraLeftButton:(id)arg0;
- (id)scaleButton;
- (void)setScaleButton:(id)arg0;
- (id)textStickerContainerView;
- (id)bubbleAnchor;
- (id)durationView;
- (id)cameraLeftButton;
- (id)cameraRightButton;
- (id)videoCaptureView;
- (id)shareListView;
- (id)slidingVCView;
- (id)textTrashButton;
- (void)setVideoCaptureView:(id)arg0;
- (void)setDurationView:(id)arg0;
- (void)setBubbleAnchor:(id)arg0;
- (void)setSlidingVCView:(id)arg0;
- (void)setTextStickerContainerView:(id)arg0;
- (void)setTextTrashButton:(id)arg0;
- (void)setShouldShowNewJourneyTips:(BOOL)arg0;
- (void)setShareListView:(id)arg0;
- (void)updateCaptureRatioView;
- (void)setCaptureRatioButton:(id)arg0;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (void)setInteractionView:(id)arg0;
- (id)preview;
- (id)titleLabel;
- (id)initWithContainerView:(id)arg0;
- (void)setPreview:(id)arg0;
- (id)deleteButton;
- (id)containerView;
- (void)layoutSubviews;
- (id)interactionView;
- (void)setTitleLabel:(id)arg0;
- (void)setupConstraints;
- (id)focusView;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)downloadButton;
- (id)titleButton;
- (void)setFocusView:(id)arg0;
- (id)textContainerView;
- (void)setTextContainerView:(id)arg0;
- (void)setTitleButton:(id)arg0;
- (void)setDownloadButton:(id)arg0;
- (id)captureButton;
- (void)setCaptureButton:(id)arg0;
- (void)updateAllConstraints;
- (id)filterScrollView;
- (void)setFilterScrollView:(id)arg0;

@end
