//
//     Generated by private class-dump
//

@class UIView, AWEMultiAvatarView, AWEFeedViewedViewBarController, NSString, UIImageView, UIButton, AFDVideoPrivacyButtonController, MASConstraint, UILabel, AFDFeedBottomBarVideoAnalysisEntranceView;
@protocol AWEProfilePostMilestoneAnimationProtocol;

@interface AFDViewedOldStyleBottomView : UIView <AFDViewedBottomInnerViewProtocol> {
    AWEFeedViewedViewBarController *_barController;
    UIImageView *_playImageView;
    AWEMultiAvatarView *_multiAvatarView;
    UILabel *_titleLabel;
    MASConstraint *_playImageViewRightConstraint;
    MASConstraint *_multiAvatarViewRightConstraint;
    AFDVideoPrivacyButtonController *_privacyButtonController;
    id<AWEProfilePostMilestoneAnimationProtocol> _milestoneAnimationController;
    UIView *_dataAnalyticsDivider;
    UIButton *_dataAnalyticsButton;
    AFDFeedBottomBarVideoAnalysisEntranceView *_videoAnalysisEntrance;
}

@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) AWEMultiAvatarView *multiAvatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MASConstraint *playImageViewRightConstraint;
@property (retain, nonatomic) MASConstraint *multiAvatarViewRightConstraint;
@property (retain, nonatomic) AFDVideoPrivacyButtonController *privacyButtonController;
@property (retain, nonatomic) id<AWEProfilePostMilestoneAnimationProtocol> milestoneAnimationController;
@property (retain, nonatomic) UIView *dataAnalyticsDivider;
@property (retain, nonatomic) UIButton *dataAnalyticsButton;
@property (retain, nonatomic) AFDFeedBottomBarVideoAnalysisEntranceView *videoAnalysisEntrance;
@property (weak, nonatomic) AWEFeedViewedViewBarController *barController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContentAlpha:(double)arg0;
- (id)multiAvatarView;
- (void)setMultiAvatarViewRightConstraint:(id)arg0;
- (id)multiAvatarViewRightConstraint;
- (void)setMultiAvatarView:(id)arg0;
- (id)barController;
- (void)setBarController:(id)arg0;
- (id)privacyButtonController;
- (void)setPrivacyButtonController:(id)arg0;
- (void)setupUIOnInit;
- (void)setPlayImageViewRightConstraint:(id)arg0;
- (id)playImageViewRightConstraint;
- (id)dataAnalyticsDivider;
- (id)dataAnalyticsButton;
- (void)setupPrivacyButton;
- (void)setupVideoAnalysisEntrance;
- (id)videoAnalysisEntrance;
- (void)handleViewerListUpdated;
- (void)handleAwemeModelUpdated;
- (void)updatePrivacyButtonWithAwemeModel:(id)arg0;
- (void)updatePrivacySettingButtonLayoutIfNeeded;
- (BOOL)canHiddenZeroViewerList;
- (void)updateVideoAnalysisEntranceLayoutWithPlayCount:(id)arg0;
- (id)milestoneAnimationController;
- (void)bindBarController;
- (void)updatePrivacyButtonData:(id)arg0;
- (id /* block */)tapPlayCountAction;
- (void)dataAnalyticsButtonClicked:(id)arg0;
- (void)videoAnalysisEntranceClicked;
- (void)setMilestoneAnimationController:(id)arg0;
- (void)setDataAnalyticsDivider:(id)arg0;
- (void)setDataAnalyticsButton:(id)arg0;
- (void)setVideoAnalysisEntrance:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)playImageView;
- (void)setPlayImageView:(id)arg0;

@end
