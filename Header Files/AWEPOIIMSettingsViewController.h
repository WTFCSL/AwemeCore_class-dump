//
//     Generated by private class-dump
//

@class UIScrollView, UIView, AWEPOIIMVerticalButton, NSString, AWEPOIIMPigeonConversation, UIImageView, AWEPOICommonModalViewController, UIButton, UILabel, AWEPOIIMMemberSearchViewController;

@interface AWEPOIIMSettingsViewController : UIViewController <AWEPOICommonModalViewControllerDelegate, AWEPOIIMMemberSearchViewControllerDelegate, AWEPOIIMPigeonConversationChangeObserver, UIScrollViewDelegate> {
    BOOL _isSettingMute;
    AWEPOIIMPigeonConversation *_conversation;
    UIScrollView *_scrollView;
    UIView *_infoHeaderView;
    UIImageView *_headerAvatarImageView;
    UILabel *_headerNameLabel;
    UILabel *_headerCountLabel;
    UIView *_settingsView;
    AWEPOIIMVerticalButton *_notifyButton;
    AWEPOIIMVerticalButton *_moreButton;
    UIView *_noticeView;
    UILabel *_noticeTitleLabel;
    UIImageView *_noticeArrowImageView;
    UILabel *_noticeContentLabel;
    AWEPOIIMMemberSearchViewController *_searchVC;
    AWEPOICommonModalViewController *_modalVC;
    UIButton *_backButton;
    double _limitShowNaviOffsetY;
}

@property (retain, nonatomic) AWEPOIIMPigeonConversation *conversation;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *infoHeaderView;
@property (retain, nonatomic) UIImageView *headerAvatarImageView;
@property (retain, nonatomic) UILabel *headerNameLabel;
@property (retain, nonatomic) UILabel *headerCountLabel;
@property (retain, nonatomic) UIView *settingsView;
@property (retain, nonatomic) AWEPOIIMVerticalButton *notifyButton;
@property (retain, nonatomic) AWEPOIIMVerticalButton *moreButton;
@property (retain, nonatomic) UIView *noticeView;
@property (retain, nonatomic) UILabel *noticeTitleLabel;
@property (retain, nonatomic) UIImageView *noticeArrowImageView;
@property (retain, nonatomic) UILabel *noticeContentLabel;
@property (retain, nonatomic) AWEPOIIMMemberSearchViewController *searchVC;
@property (retain, nonatomic) AWEPOICommonModalViewController *modalVC;
@property (retain, nonatomic) UIButton *backButton;
@property (nonatomic) BOOL isSettingMute;
@property (nonatomic) double limitShowNaviOffsetY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)headerCountLabel;
- (void)setHeaderCountLabel:(id)arg0;
- (id)noticeModel;
- (id)noticeView;
- (void)setNoticeView:(id)arg0;
- (void)p_setupView;
- (void)p_setupNaviBar;
- (id)searchVC;
- (void)setSearchVC:(id)arg0;
- (void)setModalVC:(id)arg0;
- (void)commonModalViewDidClosed:(id)arg0;
- (id)initWithGroupConversation:(id)arg0;
- (void)showModalVC:(id)arg0;
- (id)modalVC;
- (void)participantsDidChangedInConversation:(id)arg0;
- (void)conversationDidChanged:(id)arg0;
- (void)groupNoticeDidChangedInConversation:(id)arg0;
- (void)converstionDissolved:(id)arg0;
- (void)checkConvresationIsDissolved;
- (void)checkCurrentUserInConversation;
- (id)infoHeaderView;
- (void)p_setupInfoHeaderView;
- (id)settingsView;
- (void)p_setupSettingsView;
- (void)p_setupNoticeView;
- (id)headerAvatarImageView;
- (id)headerNameLabel;
- (void)setLimitShowNaviOffsetY:(double)arg0;
- (id)noticeContentLabel;
- (id)noticeTitleLabel;
- (id)noticeArrowImageView;
- (void)showQuitConversationAlertDialog;
- (void)quitGroupConversation;
- (void)popToConversationPage;
- (void)leaveSettingsPage;
- (void)leaveConversationFromSettings;
- (void)p_trackerNoticeClickShow;
- (BOOL)isSettingMute;
- (void)setIsSettingMute:(BOOL)arg0;
- (void)notifyButtonTapped;
- (void)showMoreModalView;
- (void)noticeViewDidTapped;
- (double)limitShowNaviOffsetY;
- (void)setInfoHeaderView:(id)arg0;
- (void)setHeaderAvatarImageView:(id)arg0;
- (void)setHeaderNameLabel:(id)arg0;
- (void)setSettingsView:(id)arg0;
- (void)setNotifyButton:(id)arg0;
- (void)setNoticeTitleLabel:(id)arg0;
- (void)setNoticeArrowImageView:(id)arg0;
- (void)setNoticeContentLabel:(id)arg0;
- (id)members;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)moreButton;
- (void)setMoreButton:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)groupName;
- (void)viewDidLoad;
- (id)backButton;
- (id)scrollView;
- (void)setBackButton:(id)arg0;
- (id)conversation;
- (void)setConversation:(id)arg0;
- (void)backButtonTapped:(id)arg0;
- (id)notifyButton;

@end