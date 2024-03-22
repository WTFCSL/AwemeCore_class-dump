//
//     Generated by private class-dump
//

@class UIStackView, NSString, UIView, AWEBaseApiModel, AWEChallengePanelTopBar, AWEChallengeModel, AWEMissionParticipationInfoView, UILabel, UIScrollView;
@protocol AWERequestChallengeResponseModuleInterface, AWEChallengeDetailHorizontalVideoView;

@interface AWEChallengePanelViewController : UIViewController <AWEPageSheetPresentationObserving, AWEPageSheetTransitionDelegate, AWEChallengeDescriptionItemViewDelegate, AWEChallengePanelViewController> {
    AWEChallengeModel *_challenge;
    AWEBaseApiModel<AWERequestChallengeResponseModuleInterface> *_challengeResponse;
    id /* block */ _didClickMissionExampleCell;
    id /* block */ _didClickVideoCell;
    AWEChallengePanelTopBar *_topBar;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_contentTitleLabel;
    AWEMissionParticipationInfoView *_missionParticipationInfoView;
    UIStackView *_descriptionItemsStackView;
    UIView<AWEChallengeDetailHorizontalVideoView> *_missionExampleView;
    UIView<AWEChallengeDetailHorizontalVideoView> *_videoListView;
}

@property (retain, nonatomic) AWEChallengePanelTopBar *topBar;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentTitleLabel;
@property (retain, nonatomic) AWEMissionParticipationInfoView *missionParticipationInfoView;
@property (retain, nonatomic) UIStackView *descriptionItemsStackView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *missionExampleView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *videoListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) AWEBaseApiModel<AWERequestChallengeResponseModuleInterface> *challengeResponse;
@property (copy, nonatomic) id /* block */ didClickMissionExampleCell;
@property (copy, nonatomic) id /* block */ didClickVideoCell;

- (id)createVideoView;
- (void)pageSheetPresentationWillBegin:(id)arg0;
- (id)animationControllerForPresentedController;
- (id)animationControllerForDismissedController;
- (void)setDidClickMissionExampleCell:(id /* block */)arg0;
- (void)setContentTitleLabel:(id)arg0;
- (id)contentTitleLabel;
- (void)setDescriptionItemsStackView:(id)arg0;
- (id)descriptionItemsStackView;
- (void)setMissionExampleView:(id)arg0;
- (id /* block */)didClickMissionExampleCell;
- (id)missionExampleView;
- (id)videoListView;
- (void)setVideoListView:(id)arg0;
- (void)downloadClick:(id)arg0;
- (void)setMissionParticipationInfoView:(id)arg0;
- (id)missionParticipationInfoView;
- (id /* block */)didClickVideoCell;
- (void)setDidClickVideoCell:(id /* block */)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)challenge;
- (id)challengeResponse;
- (void)setChallengeResponse:(id)arg0;
- (id)topBar;
- (id)contentView;
- (void)viewDidLoad;
- (id)scrollView;
- (void)setTopBar:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)initWithChallenge:(id)arg0;

@end
