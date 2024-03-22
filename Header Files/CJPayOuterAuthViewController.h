//
//     Generated by private class-dump
//

@class NSDictionary, NSString, UIImageView, CJPayHomePageViewController, UILabel, UIView, CJPayCreateOrderResponse;
@protocol CJPayAPIDelegate;

@interface CJPayOuterAuthViewController : CJPayFullPageBaseViewController <CJPayAPIDelegate> {
    BOOL _isFromApp;
    BOOL _isColdLaunch;
    NSDictionary *_schemaParams;
    id<CJPayAPIDelegate> _apiDelegate;
    UILabel *_tipLabel;
    UILabel *_userNicknameLabel;
    UIImageView *_userAvatarImageView;
    NSString *_returnURL;
    UIView *_userInfoView;
    CJPayHomePageViewController *_homePageVC;
    CJPayCreateOrderResponse *_orderResponse;
    double _lastTimestamp;
}

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *userNicknameLabel;
@property (retain, nonatomic) UIImageView *userAvatarImageView;
@property (copy, nonatomic) NSString *returnURL;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) CJPayHomePageViewController *homePageVC;
@property (retain, nonatomic) CJPayCreateOrderResponse *orderResponse;
@property (nonatomic) BOOL isFromApp;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) double lastTimestamp;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (weak, nonatomic) id<CJPayAPIDelegate> apiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isColdLaunch;
- (void)setSchemaParams:(id)arg0;
- (id)schemaParams;
- (void)setIsColdLaunch:(BOOL)arg0;
- (void)p_setupUI;
- (void)setUserInfoView:(id)arg0;
- (id)userAvatarImageView;
- (void)setUserAvatarImageView:(id)arg0;
- (void)callState:(BOOL)arg0 fromScene:(long long)arg1;
- (void)onResponse:(id)arg0;
- (id)apiDelegate;
- (void)setApiDelegate:(id)arg0;
- (id)homePageVC;
- (id)orderResponse;
- (void)setOrderResponse:(id)arg0;
- (void)setHomePageVC:(id)arg0;
- (void)p_openBindVC;
- (id)userNicknameLabel;
- (void)setIsFromApp:(BOOL)arg0;
- (double)halfVCContainerHeight;
- (void)p_alertUpgradeVersion;
- (void)p_closeCashierDeskAndJumpBackWithResult:(unsigned long long)arg0;
- (void)p_alertRequestErrorWithMsg:(id)arg0 clickAction:(id /* block */)arg1;
- (void)p_startBackgroundAnimation;
- (BOOL)isFromApp;
- (id)p_getJumpBackUrlStr;
- (id)returnURL;
- (id)p_mergeCommonParamsWith:(id)arg0 response:(id)arg1;
- (void)setUserNicknameLabel:(id)arg0;
- (void)setReturnURL:(id)arg0;
- (void).cxx_destruct;
- (void)setLastTimestamp:(double)arg0;
- (double)lastTimestamp;
- (void)viewDidLoad;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)userInfoView;

@end