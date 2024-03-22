//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWEButton, UIImageView, AFDModalViewHelper, UIButton, UILabel, AWEProfileToggleView;

@interface AFDViewerRecordGuideViewController : UIViewController <AWEPanelTransitionWithBackground, AFDViewerRecordGuideViewControllerProtocol> {
    BOOL _viewerRecordAuthorizationToggleIsOn;
    BOOL _shouldUpdateBarrageAfterDismiss;
    long long _popupID;
    id /* block */ _dismissBlock;
    UIButton *_closeButton;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    AWEButton *_knownButton;
    AWEButton *_actionButton;
    AWEProfileToggleView *_viewerRecordAuthorizationView;
    UIImageView *_lockImageView;
    AFDModalViewHelper *_helper;
    NSString *_userID;
    AWEAwemeModel *_model;
    NSString *_referString;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWEButton *knownButton;
@property (retain, nonatomic) AWEButton *actionButton;
@property (retain, nonatomic) AWEProfileToggleView *viewerRecordAuthorizationView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL viewerRecordAuthorizationToggleIsOn;
@property (nonatomic) BOOL shouldUpdateBarrageAfterDismiss;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long popupID;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)transitionBackgroundViewTapped:(id)arg0;
- (void)presentOnViewController:(id)arg0;
- (long long)popupID;
- (void)setPopupID:(long long)arg0;
- (id)initWithUserID:(id)arg0 referString:(id)arg1;
- (void)initHelper;
- (id)knownButton;
- (void)refreshLockImage:(BOOL)arg0;
- (void)setKnownButton:(id)arg0;
- (id)initWithAweme:(id)arg0 shouldUpdateBarrageAfterDismiss:(BOOL)arg1 referString:(id)arg2;
- (void)setViewerRecordAuthorizationToggleIsOn:(BOOL)arg0;
- (id)viewerRecordAuthorizationView;
- (BOOL)viewerRecordAuthorizationToggleIsOn;
- (double)p_hintLabelHeight;
- (void)setShouldUpdateBarrageAfterDismiss:(BOOL)arg0;
- (void)clickCloseButtonDismiss;
- (id)p_hintLabelText;
- (id)p_hintLabelStyle;
- (id)p_hintLabelFont;
- (void)clickKnownButtonDismiss;
- (void)clickActionButtonDismiss;
- (void)p_switchVideoStoreViewStatus;
- (void)dismissWithMethod:(id)arg0;
- (void)p_trackCardDismissWithMethod:(id)arg0;
- (void)p_trackCardImpression;
- (BOOL)shouldUpdateBarrageAfterDismiss;
- (void)p_trackToggleSwitch:(BOOL)arg0;
- (id)p_getEnterMethod;
- (void)setViewerRecordAuthorizationView:(id)arg0;
- (id)userID;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setHelper:(id)arg0;
- (id)model;
- (id)titleLabel;
- (void)setUserID:(id)arg0;
- (id)helper;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)lockImageView;
- (void)setLockImageView:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end