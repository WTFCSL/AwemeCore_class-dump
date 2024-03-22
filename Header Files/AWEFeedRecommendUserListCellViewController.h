//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AWEFeedUserRecommendListViewControllerProtocol;

@interface AWEFeedRecommendUserListCellViewController : AWEFeedCellViewController {
    UIViewController<AWEFeedUserRecommendListViewControllerProtocol> *_recommendViewController;
}

@property (retain, nonatomic) UIViewController<AWEFeedUserRecommendListViewControllerProtocol> *recommendViewController;

- (void)excuteCustomDisplay;
- (BOOL)rootViewTapGestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)handleEnterPrivacySetting;
- (void)handleExitPrivacySetting;
- (id)recommendViewController;
- (BOOL)p_isVCVisibleAndHasMusic;
- (void)setRecommendViewController:(id)arg0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;
- (void)configureWithModel:(id)arg0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
