//
//     Generated by private class-dump
//

@class UILabel, UIStackView, AWETaskLiteModel, UIScrollView, UIView, AWEAdTaskLitePanelTopBar;
@protocol AWEChallengeDetailHorizontalVideoView;

@interface AWEAdTaskLitePanelViewController : UIViewController {
    AWETaskLiteModel *_taskLiteModel;
    AWEAdTaskLitePanelTopBar *_topBar;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_contentTitleLabel;
    UIStackView *_descriptionItemsStackView;
    UIView<AWEChallengeDetailHorizontalVideoView> *_missionExampleView;
    UIView<AWEChallengeDetailHorizontalVideoView> *_videoListView;
    id /* block */ _didClickMissionExampleCell;
}

@property (retain, nonatomic) AWEAdTaskLitePanelTopBar *topBar;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentTitleLabel;
@property (retain, nonatomic) UIStackView *descriptionItemsStackView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *missionExampleView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *videoListView;
@property (copy, nonatomic) id /* block */ didClickMissionExampleCell;
@property (readonly, nonatomic) AWETaskLiteModel *taskLiteModel;

- (id)createVideoView;
- (void)presentOnViewController:(id)arg0;
- (void)pageSheetPresentationWillBegin:(id)arg0;
- (void)closeButtonAction:(id)arg0;
- (id)initWithTaskLiteDetail:(id)arg0;
- (id)taskLiteModel;
- (void)setDidClickMissionExampleCell:(id /* block */)arg0;
- (void)setContentTitleLabel:(id)arg0;
- (id)contentTitleLabel;
- (void)setDescriptionItemsStackView:(id)arg0;
- (id)descriptionItemsStackView;
- (void)setMissionExampleView:(id)arg0;
- (id /* block */)didClickMissionExampleCell;
- (id)missionExampleView;
- (void)startShoot:(id)arg0;
- (id)videoListView;
- (void)setVideoListView:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)topBar;
- (id)contentView;
- (void)viewDidLoad;
- (id)scrollView;
- (void)setTopBar:(id)arg0;
- (void)setContentView:(id)arg0;

@end
