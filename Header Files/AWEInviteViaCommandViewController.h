//
//     Generated by private class-dump
//

@class AWETokenShareView, NSString, UIView, UIImageView, AWEInviteViaCommandStatusView, UIButton, AWEAnimatedButton, NSDictionary, AWEInviteViaCommandViewControllerConfiguration, UILabel;

@interface AWEInviteViaCommandViewController : UIViewController <UIGestureRecognizerDelegate, AWEInviteViaCommandViewControllerProtocol> {
    BOOL _saveImageFailed;
    BOOL _isNotDetermined;
    BOOL _useNewTokenGenterateAPI;
    id /* block */ tokenFetchedBlock;
    id /* block */ clickShareTypeBlock;
    NSString *_token;
    long long _shareType;
    UIView *_contentView;
    UIButton *_closeButton;
    UIImageView *_avatarImageView;
    UILabel *_tipLabel;
    AWETokenShareView *_tokenView;
    AWEInviteViaCommandStatusView *_statusView;
    AWEAnimatedButton *_wechatButton;
    AWEAnimatedButton *_qqButton;
    AWEInviteViaCommandViewControllerConfiguration *_configuration;
    NSString *_customTipText;
    NSString *_customWebURL;
    NSString *_customCopyContent;
    unsigned long long _customChannelType;
    NSString *_enterFrom;
    NSString *_enterMethod;
    unsigned long long _customShareTargetType;
    NSDictionary *_extraLogDict;
}

@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL saveImageFailed;
@property (nonatomic) BOOL isNotDetermined;
@property (nonatomic) long long shareType;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) AWETokenShareView *tokenView;
@property (retain, nonatomic) AWEInviteViaCommandStatusView *statusView;
@property (retain, nonatomic) AWEAnimatedButton *wechatButton;
@property (retain, nonatomic) AWEAnimatedButton *qqButton;
@property (retain, nonatomic) AWEInviteViaCommandViewControllerConfiguration *configuration;
@property (copy, nonatomic) NSString *customTipText;
@property (copy, nonatomic) NSString *customWebURL;
@property (copy, nonatomic) NSString *customCopyContent;
@property (nonatomic) unsigned long long customChannelType;
@property (nonatomic) BOOL useNewTokenGenterateAPI;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long customShareTargetType;
@property (copy, nonatomic) NSDictionary *extraLogDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ tokenFetchedBlock;
@property (copy, nonatomic) id /* block */ clickShareTypeBlock;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)p_setupUI;
- (void)setCustomShareTargetType:(unsigned long long)arg0;
- (void)setExtraLogDict:(id)arg0;
- (id)wechatButton;
- (id)qqButton;
- (void)wechatButtonTapped:(id)arg0;
- (void)qqButtonTapped:(id)arg0;
- (void)setWechatButton:(id)arg0;
- (void)setQqButton:(id)arg0;
- (id)extraLogDict;
- (void)setCustomTipText:(id)arg0;
- (void)setCustomWebURL:(id)arg0;
- (void)setCustomCopyContent:(id)arg0;
- (void)setCustomChannelType:(unsigned long long)arg0;
- (BOOL)useNewTokenGenterateAPI;
- (void)setUseNewTokenGenterateAPI:(BOOL)arg0;
- (unsigned long long)customShareTargetType;
- (id)customTipText;
- (void)p_fetchToken;
- (id)tokenView;
- (void)p_updateUIWithStatusType:(unsigned long long)arg0;
- (void)statusViewTapped;
- (void)p_trackShareToken;
- (unsigned long long)customChannelType;
- (void)p_updateButtonsTitle;
- (void)p_updateToken:(id)arg0;
- (id)customWebURL;
- (id /* block */)clickShareTypeBlock;
- (void)p_clickShareType:(long long)arg0;
- (void)p_openTencentApp;
- (void)setClickShareTypeBlock:(id /* block */)arg0;
- (BOOL)saveImageFailed;
- (void)setSaveImageFailed:(BOOL)arg0;
- (BOOL)isNotDetermined;
- (void)setIsNotDetermined:(BOOL)arg0;
- (void)setTokenView:(id)arg0;
- (id)customCopyContent;
- (id)init;
- (void).cxx_destruct;
- (void)show;
- (void)setToken:(id)arg0;
- (id)initWithConfiguration:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (id)token;
- (id)configuration;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setConfiguration:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)closeButtonTapped:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setShareType:(long long)arg0;
- (long long)shareType;
- (id)shareButton;
- (id /* block */)tokenFetchedBlock;
- (void)setTokenFetchedBlock:(id /* block */)arg0;
- (id)statusView;
- (void)setStatusView:(id)arg0;

@end
