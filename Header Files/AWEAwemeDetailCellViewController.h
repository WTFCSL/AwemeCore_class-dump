//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEHTSVideoFlameCountView, AWEAdOperationGuideView, AWEAwemeDetailCellViewControllerDelegate;

@interface AWEAwemeDetailCellViewController : AWEAwemeDetailBaseViewController {
    BOOL _hasLoadFirstImage;
    id<AWEAwemeDetailCellViewControllerDelegate> _detailCellViewControllerDelegate;
    UIView<AWEAdOperationGuideView> *_adOperationView;
    UIView<AWEHTSVideoFlameCountView> *_flameCountStackView;
    UIView *_imagePreviewMask;
}

@property (retain, nonatomic) UIView<AWEAdOperationGuideView> *adOperationView;
@property (retain, nonatomic) UIView<AWEHTSVideoFlameCountView> *flameCountStackView;
@property (nonatomic) BOOL hasLoadFirstImage;
@property (retain, nonatomic) UIView *imagePreviewMask;
@property (weak, nonatomic) id<AWEAwemeDetailCellViewControllerDelegate> detailCellViewControllerDelegate;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;

- (void)setReferString:(id)arg0;
- (void)didChangeAlbumIndex:(long long)arg0 animated:(BOOL)arg1;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)playerWillStartNextLoop:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)videoController:(id)arg0 playerPlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)imageConfigMsg:(id)arg0;
- (id)adOperationView;
- (void)setAdOperationView:(id)arg0;
- (BOOL)canHandleGestureInCell:(id)arg0;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (void)setHideMusicInfoViewFlag:(BOOL)arg0;
- (void)showAdOperationView:(id)arg0;
- (void)closeAdOperationViewWhenViewWillDisappear:(id)arg0;
- (void)configAdOperationView:(id)arg0;
- (void)__addFlameCountViewIfNeeded;
- (void)__updateFlameCountViewShowStatus;
- (id)detailCellViewControllerDelegate;
- (void)removeImagePreviewMask;
- (void)trackAdOperationCloseForLiveAppointmentIfNeeded;
- (void)closeAdOperationView:(unsigned long long)arg0;
- (void)adOperationGuideViewTapped;
- (id)flameCountStackView;
- (void)setFlameCountStackView:(id)arg0;
- (BOOL)hasLoadFirstImage;
- (id)imagePreviewMask;
- (void)setImagePreviewMask:(id)arg0;
- (void)setHasLoadFirstImage:(BOOL)arg0;
- (BOOL)shouldRespondSingleClick;
- (void)setShowGoodsElementViewFlag:(BOOL)arg0;
- (void)setShowGoodsCardAnchorElementViewFlag:(BOOL)arg0;
- (void)closeAdOperationViewForCommentInputMaskView;
- (void)setDetailCellViewControllerDelegate:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;

@end