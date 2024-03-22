//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSDictionary, UILabel, UIView;

@interface CJPayOuterBaseViewController : CJPayFullPageBaseViewController {
    BOOL _isFromApp;
    BOOL _isViewDidAppear;
    UILabel *_tipLabel;
    UILabel *_userNicknameLabel;
    UIImageView *_userAvatarImageView;
    UIView *_userInfoView;
    UILabel *_singleLineUserNicknameLabel;
    UIImageView *_singleLineUserAvatarImageView;
    UIView *_singleLineUserInfoView;
    NSDictionary *_schemaParams;
    NSString *_returnURL;
    NSString *_jumpBackUrlStr;
    NSDictionary *_baseTrackParams;
}

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *userNicknameLabel;
@property (retain, nonatomic) UIImageView *userAvatarImageView;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) UILabel *singleLineUserNicknameLabel;
@property (retain, nonatomic) UIImageView *singleLineUserAvatarImageView;
@property (retain, nonatomic) UIView *singleLineUserInfoView;
@property (nonatomic) BOOL isFromApp;
@property (nonatomic) BOOL isViewDidAppear;
@property (copy, nonatomic) NSString *jumpBackUrlStr;
@property (copy, nonatomic) NSDictionary *baseTrackParams;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (copy, nonatomic) NSString *returnURL;

- (BOOL)isViewDidAppear;
- (void)setSchemaParams:(id)arg0;
- (id)schemaParams;
- (void)p_setupUI;
- (void)setUserInfoView:(id)arg0;
- (void)setIsViewDidAppear:(BOOL)arg0;
- (id)userAvatarImageView;
- (void)setUserAvatarImageView:(id)arg0;
- (void)callState:(BOOL)arg0 fromScene:(long long)arg1;
- (void)onResponse:(id)arg0;
- (id)baseTrackParams;
- (id)userNicknameLabel;
- (void)setIsFromApp:(BOOL)arg0;
- (double)halfVCContainerHeight;
- (void)p_alertUpgradeVersion;
- (BOOL)isFromApp;
- (id)returnURL;
- (void)setUserNicknameLabel:(id)arg0;
- (void)setReturnURL:(id)arg0;
- (void)p_checkValid;
- (void)closeCashierDeskAndJumpBackWithResult:(unsigned long long)arg0;
- (id)jumpBackUrlStr;
- (void)p_createBaseTrackParams:(id)arg0;
- (void)alertRequestErrorWithMsg:(id)arg0 clickAction:(id /* block */)arg1;
- (void)didFinishParamsCheck:(BOOL)arg0;
- (id)singleLineUserInfoView;
- (id)singleLineUserAvatarImageView;
- (id)singleLineUserNicknameLabel;
- (void)setBaseTrackParams:(id)arg0;
- (void)setSingleLineUserNicknameLabel:(id)arg0;
- (void)setSingleLineUserAvatarImageView:(id)arg0;
- (void)setSingleLineUserInfoView:(id)arg0;
- (void)setJumpBackUrlStr:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)userInfoView;
- (void)back;

@end
