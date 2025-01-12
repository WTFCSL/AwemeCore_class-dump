//
//     Generated by private class-dump
//

@class AWEMVChannelCardInfoView, UILabel, AWEBaseListSectionViewModel, NSDictionary, UIVisualEffectView, UIButton, UIView, NSString, UILongPressGestureRecognizer, AWEMVChannelPageContext, AWEAwemePlayInteractionInteractor, AWEAwemeModel, UIImageView;

@interface AWEMVChannelBaseCell : UICollectionViewCell <AWEZoomTransitionOuterContextProvider, AWEAwemeDetailTableViewControllerOuterVCDelegate, AWERelatedVideoDetailVideoViewControllerDelegate, AWEUserMessage> {
    BOOL _isJumpingToDetailPage;
    BOOL _disableInfoView;
    AWEMVChannelPageContext *_context;
    AWEAwemeModel *_model;
    AWEAwemePlayInteractionInteractor *_interactor;
    NSDictionary *_logExtra;
    UIImageView *_cellCoverView;
    UILongPressGestureRecognizer *_longPressGR;
    double _cornerRadius;
    AWEMVChannelCardInfoView *_infoView;
    AWEBaseListSectionViewModel *_sectionViewModel;
    id /* block */ _touchUpInsideBlock;
    id /* block */ _longPressedBlock;
    id /* block */ _revokeFeedbackBlock;
    NSDictionary *_feedbackInfo;
    UIVisualEffectView *_maskView;
    UIView *_feedbackContainerView;
    UILabel *_feedbackTitleLabel;
    UILabel *_feedbackLDescLabel;
    UIButton *_revokeButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEMVChannelPageContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemePlayInteractionInteractor *interactor;
@property (retain, nonatomic) UIVisualEffectView *maskView;
@property (retain, nonatomic) UIView *feedbackContainerView;
@property (retain, nonatomic) UILabel *feedbackTitleLabel;
@property (retain, nonatomic) UILabel *feedbackLDescLabel;
@property (retain, nonatomic) UIButton *revokeButton;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGR;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly, nonatomic) UIImageView *cellCoverView;
@property (readonly, nonatomic) double cornerRadius;
@property (nonatomic) BOOL isJumpingToDetailPage;
@property (retain, nonatomic) AWEMVChannelCardInfoView *infoView;
@property (weak, nonatomic) AWEBaseListSectionViewModel *sectionViewModel;
@property (nonatomic) BOOL disableInfoView;
@property (copy, nonatomic) id /* block */ touchUpInsideBlock;
@property (copy, nonatomic) id /* block */ longPressedBlock;
@property (copy, nonatomic) id /* block */ revokeFeedbackBlock;
@property (copy, nonatomic) NSDictionary *feedbackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logScenePrefix;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (BOOL)zoomTransitionWantsTabBarAnimation;
- (BOOL)zoomTransitionWantsTabBarBeStatic;
- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)zoomTransitionShouldScreenSliced;
- (BOOL)zoomTransitionWantsTabBarAlphaAnimation;
- (BOOL)zoomTransitionWantsStaticTabBarAtTopLayer;
- (double)zoomTransitionTopSafeHeight;
- (double)zoomTransitionBottomSafeHeight;
- (void)zoomTransitionMagnifyFinish;
- (void)zoomTransitionShrinkFinish;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (double)currentPlayTime;
- (void)setTouchUpInsideBlock:(id /* block */)arg0;
- (id)feedbackInfo;
- (void)setFeedbackInfo:(id)arg0;
- (void)onAwemeDiggNotification:(id)arg0;
- (id)sectionViewModel;
- (void)setSectionViewModel:(id)arg0;
- (id /* block */)longPressedBlock;
- (void)setLongPressedBlock:(id /* block */)arg0;
- (id /* block */)revokeFeedbackBlock;
- (void)setRevokeFeedbackBlock:(id /* block */)arg0;
- (double)getStartSeekTime:(id)arg0;
- (id)feedbackContainerView;
- (id)feedbackTitleLabel;
- (id)feedbackLDescLabel;
- (id)revokeButton;
- (void)longPressedGestureRecognized:(id)arg0;
- (void)dismissFeedbackMask;
- (void)revokeButtonPressed:(id)arg0;
- (void)showFeedbackMask;
- (void)setFeedbackContainerView:(id)arg0;
- (void)setFeedbackTitleLabel:(id)arg0;
- (void)setFeedbackLDescLabel:(id)arg0;
- (void)setRevokeButton:(id)arg0;
- (void)configWithAwemeModel:(id)arg0 context:(id)arg1;
- (void)refreshLogExtra;
- (void)handleResponseClicked;
- (void)willDisplayWithIndex:(long long)arg0;
- (void)jumpToMixInflow;
- (void)jumpToMVChannelInflow;
- (void)setIsJumpingToDetailPage:(BOOL)arg0;
- (id)transitToInflowProvider;
- (BOOL)isJumpingToDetailPage;
- (void)prepareBackFromDetailPage;
- (void)seekToPlayTimeAfterShrink:(double)arg0;
- (void)handleJumpToInflow;
- (void)handleJumpToDetailPage;
- (void)relatedVCWillQuitCurrentPlaybackTime:(id)arg0 itemID:(id)arg1 playState:(long long)arg2;
- (long long)followTagWithFollowStatus:(long long)arg0;
- (id)appendedLogExtra;
- (BOOL)disableInfoView;
- (void)addFeedbackViews;
- (void)handleResponseClickedWithLogExtra:(id)arg0;
- (void)willShowHalfInVisibleRangeWithIndex:(long long)arg0;
- (void)willShowActiveViewInVisibleRange;
- (id)cellCoverView;
- (void)setDisableInfoView:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (id)interactor;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (double)cornerRadius;
- (id)maskView;
- (void)setInteractor:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)longPressGR;
- (id)context;
- (void)setLongPressGR:(id)arg0;
- (void)dealloc;
- (void)setMaskView:(id)arg0;
- (unsigned long long)cardType;
- (void)updateAction:(id)arg0;
- (id)infoView;
- (void)setInfoView:(id)arg0;
- (id /* block */)touchUpInsideBlock;

@end
