//
//     Generated by private class-dump
//

@class AWEVideoCoverFakeProfileView, AWECoverChooseBottomViewModel, AWECoverTextModel, AWEVideoPublishViewModel, NSString, UIImageView, UIButton, NSDictionary, AWECoverChooseBottomView, AWECoverPreviewController, NSNumber, UIViewController;
@protocol ACCEditServiceProtocol;

@interface AWEVideoCoverChooseViewController : UIViewController <AWECoverChooseBottomViewDelegate, AWECoverPreviewDelegate> {
    BOOL _ifChooseNewImage;
    BOOL _isImageAlbum;
    id /* block */ _didDismissBlock;
    id /* block */ _willDismissBlock;
    UIViewController *_savePresentationOwner;
    NSDictionary *_chooseCoverExtraAttributes;
    UIImageView *_interactionImageView;
    AWEVideoPublishViewModel *_publishViewModel;
    UIButton *_cancelBtn;
    UIButton *_saveBtn;
    id<ACCEditServiceProtocol> _editService;
    double _finalChoosePercent;
    NSNumber *_totalVideoDuration;
    AWECoverPreviewController *_previewController;
    AWECoverChooseBottomView *_bottomViewV2;
    AWEVideoCoverFakeProfileView *_fakeProfileView;
    AWECoverChooseBottomViewModel *_bottomViewModel;
    AWECoverTextModel *_originCoverTextModel;
    struct CGSize { double width; double height; } _backupCanvasSize;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *saveBtn;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) double finalChoosePercent;
@property (retain, nonatomic) NSNumber *totalVideoDuration;
@property (retain, nonatomic) AWECoverPreviewController *previewController;
@property (retain, nonatomic) AWECoverChooseBottomView *bottomViewV2;
@property (retain, nonatomic) AWEVideoCoverFakeProfileView *fakeProfileView;
@property (retain, nonatomic) AWECoverChooseBottomViewModel *bottomViewModel;
@property (nonatomic) struct CGSize { double width; double height; } backupCanvasSize;
@property (nonatomic) BOOL ifChooseNewImage;
@property (nonatomic) BOOL isImageAlbum;
@property (retain, nonatomic) AWECoverTextModel *originCoverTextModel;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (weak, nonatomic) UIViewController *savePresentationOwner;
@property (retain, nonatomic) NSDictionary *chooseCoverExtraAttributes;
@property (retain, nonatomic) UIImageView *interactionImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)didDismissBlock;
- (void)setDidDismissBlock:(id /* block */)arg0;
- (void)setWillDismissBlock:(id /* block */)arg0;
- (id /* block */)willDismissBlock;
- (id)publishViewModel;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg0;
- (id)totalVideoDuration;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)bottomViewModel;
- (void)setBottomViewModel:(id)arg0;
- (BOOL)isImageAlbum;
- (void)setPublishViewModel:(id)arg0;
- (id)saveBtn;
- (void)setSaveBtn:(id)arg0;
- (id)p_commonTrackParams;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallMediaContainerFrame;
- (void)didClickCancelBtn:(id)arg0;
- (void)didClickSaveBtn:(id)arg0;
- (id)initWithModel:(id)arg0 editService:(id)arg1;
- (void)setFinalChoosePercent:(double)arg0;
- (double)finalChoosePercent;
- (void)didSelectCoverTimeInPercent:(double)arg0;
- (void)sliderViewTouchBegin;
- (void)sliderViewTouchMoved;
- (void)bottomViewDidTapReset:(id)arg0;
- (void)bottomViewShouldStartEditing:(id)arg0;
- (id)bottomViewTrackerParams;
- (void)setTotalVideoDuration:(id)arg0;
- (id)fakeProfileView;
- (double)viewHeightForCoverPreviewController:(id)arg0;
- (id)interactionImageView;
- (long long)currentAlbumIndexForPreviewController:(id)arg0;
- (struct CGSize { double x0; double x1; })p_perferredCoverSize;
- (struct CGSize { double x0; double x1; })videoSizeForCoverPreviewController:(id)arg0;
- (id)previewController:(id)arg0 titleModelWithTitle:(id)arg1;
- (id)generateCoverTextImage;
- (void)setInteractionImageView:(id)arg0;
- (void)setFakeProfileView:(id)arg0;
- (BOOL)p_hadApplyCanvas;
- (void)setBackupCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })backupCanvasSize;
- (void)configurePlayer;
- (struct CGSize { double x0; double x1; })p_videoSize;
- (void)p_trackCancelCoverEditWithAlertShow:(id)arg0;
- (double)p_previewControllerViewHeight;
- (id)chooseCoverExtraAttributes;
- (void)setChooseCoverExtraAttributes:(id)arg0;
- (void)setOriginCoverTextModel:(id)arg0;
- (id)bottomViewV2;
- (double)p_currentSelectedCoverTime;
- (void)p_dismissForSave:(BOOL)arg0;
- (void)p_trackSaveCoverEdit;
- (id)originCoverTextModel;
- (long long)chooseImageWithPercent:(double)arg0;
- (id)savePresentationOwner;
- (long long)p_currentAlbumIndex;
- (double)uploadImageWidth;
- (void)p_resetTitleImpl;
- (void)p_trackCoverTextReset;
- (void)setSavePresentationOwner:(id)arg0;
- (void)setBottomViewV2:(id)arg0;
- (BOOL)ifChooseNewImage;
- (void)setIfChooseNewImage:(BOOL)arg0;
- (void)setIsImageAlbum:(BOOL)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)configureViews;
- (id)previewController;
- (void)setPreviewController:(id)arg0;
- (double)fontScale;

@end
