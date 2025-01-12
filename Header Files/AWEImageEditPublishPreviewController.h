//
//     Generated by private class-dump
//

@class UIView, NSString, ACCImageAlbumEditTagsUploadImageHelper, AWEVideoPublishViewModel, UIImage, UIImageView, UIButton, UIViewController, AWEStickerContainerFakeProfileView;
@protocol UIViewControllerTransitioningDelegate, ACCEditServiceProtocol, AWEImageEditPublishPreviewControllerDelegate;

@interface AWEImageEditPublishPreviewController : UIViewController <AWEZoomTransitionInnerContextProvider, UIGestureRecognizerDelegate, ACCEditImageAlbumMixedMessageProtocolD, AWEStudioTransitionPreviewerToPublisherContextProvider> {
    BOOL _didViewAppearOnce;
    BOOL _didViewAppear;
    BOOL _didTrackQuit;
    BOOL _useNewStyle_22_4_0;
    BOOL _firstImgAsCoverExpt;
    id /* block */ _didDismissBlock;
    id /* block */ _didDismissNewCoverEditPageBlock;
    id<AWEImageEditPublishPreviewControllerDelegate> _delegate;
    UIViewController *_viewController;
    AWEVideoPublishViewModel *_publishViewModel;
    id<ACCEditServiceProtocol> _editService;
    long long _anchorIndex;
    NSString *_originalCoverID;
    id /* block */ _publishDidClickBlock;
    ACCImageAlbumEditTagsUploadImageHelper *_uploadImageHelper;
    UIImage *_previewImage;
    UIImageView *_previewImageView;
    UIView *_playerContainerView;
    UIButton *_coverActionBtn;
    UIImageView *_pauseIconView;
    id<UIViewControllerTransitioningDelegate> _nextTranslationTransitionDelegate;
    AWEStickerContainerFakeProfileView *_fakeFeedInfoView;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) long long anchorIndex;
@property (copy, nonatomic) NSString *originalCoverID;
@property (copy, nonatomic) id /* block */ publishDidClickBlock;
@property (retain, nonatomic) ACCImageAlbumEditTagsUploadImageHelper *uploadImageHelper;
@property (retain, nonatomic) UIImage *previewImage;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIButton *coverActionBtn;
@property (retain, nonatomic) UIImageView *pauseIconView;
@property (nonatomic) BOOL didViewAppearOnce;
@property (nonatomic) BOOL didViewAppear;
@property (nonatomic) BOOL didTrackQuit;
@property (nonatomic) BOOL useNewStyle_22_4_0;
@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (nonatomic) BOOL firstImgAsCoverExpt;
@property (retain, nonatomic) AWEStickerContainerFakeProfileView *fakeFeedInfoView;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ didDismissNewCoverEditPageBlock;
@property (weak, nonatomic) id<AWEImageEditPublishPreviewControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)didDismissBlock;
- (void)setDidDismissBlock:(id /* block */)arg0;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (id)zoomTransitionEndView;
- (long long)zoomTransitionItemOffset;
- (id)pauseIconView;
- (id)publishViewModel;
- (id)trackCommonParams;
- (void)setupNewStyleUI;
- (void)addObserve;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)setPublishViewModel:(id)arg0;
- (id)nextTranslationTransitionDelegate;
- (void)setNextTranslationTransitionDelegate:(id)arg0;
- (long long)currentImagePlayerIdx;
- (void)uploadImageToCloudWithIndex:(long long)arg0;
- (id)uploadImageHelper;
- (void)setUploadImageHelper:(id)arg0;
- (id)coverImageID;
- (void)previewTapAction:(id)arg0;
- (BOOL)didViewAppearOnce;
- (void)setDidViewAppearOnce:(BOOL)arg0;
- (void)setDidViewAppear:(BOOL)arg0;
- (void)updatePauseIconWithPaused:(BOOL)arg0 animated:(BOOL)arg1;
- (void)trackQuitPhotoPreviewPageWithQuitMethod:(id)arg0;
- (id /* block */)publishDidClickBlock;
- (BOOL)didViewAppear;
- (BOOL)isOnCoverIdx;
- (id)coverActionBtnText;
- (void)refreshCoverActionBtn;
- (id /* block */)didDismissNewCoverEditPageBlock;
- (void)trackClickOverEntracnceWithButtonType:(id)arg0;
- (void)trackSaveCoverEditWithIndex:(long long)arg0;
- (void)setPublishDidClickBlock:(id /* block */)arg0;
- (void)backBtnAction:(id)arg0;
- (void)setPauseIconView:(id)arg0;
- (void)setCoverActionBtn:(id)arg0;
- (void)coverBtnAction:(id)arg0;
- (void)publishBtnAction:(id)arg0;
- (id)fakeFeedInfoView;
- (void)onCurrentImageEditorChanged:(long long)arg0 isByAutoTimer:(BOOL)arg1;
- (id)initWithPublishViewModel:(id)arg0 editService:(id)arg1 previewImage:(id)arg2 atIndex:(long long)arg3;
- (void)setDidDismissNewCoverEditPageBlock:(id /* block */)arg0;
- (long long)anchorIndex;
- (void)setAnchorIndex:(long long)arg0;
- (id)originalCoverID;
- (void)setOriginalCoverID:(id)arg0;
- (id)coverActionBtn;
- (BOOL)didTrackQuit;
- (void)setDidTrackQuit:(BOOL)arg0;
- (BOOL)useNewStyle_22_4_0;
- (void)setUseNewStyle_22_4_0:(BOOL)arg0;
- (BOOL)firstImgAsCoverExpt;
- (void)setFirstImgAsCoverExpt:(BOOL)arg0;
- (void)setFakeFeedInfoView:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)delegate;
- (BOOL)prefersStatusBarHidden;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg0;
- (void)setPreviewImage:(id)arg0;
- (id)previewImage;
- (id)playerContainerView;
- (void)setPlayerContainerView:(id)arg0;

@end
