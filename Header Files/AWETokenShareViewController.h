//
//     Generated by private class-dump
//

@class AWETokenShareView, NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWETokenShareViewController : UIViewController <AWERouterViewControllerProtocol> {
    BOOL _isForMainConcern;
    UIView *_topView;
    UIView *_animatiedView;
    UIView *_contentView;
    UIImageView *_avatarView;
    UIView *_avatarMaskView;
    long long _shareType;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_shareBtn;
    UIButton *_shareFrontBtn;
    AWETokenShareView *_tokenView;
    UIImageView *_closeView;
    NSString *_token;
    NSString *_enterFrom;
    NSString *_enterMethod;
}

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *animatiedView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *avatarMaskView;
@property (nonatomic) long long shareType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *shareBtn;
@property (retain, nonatomic) UIButton *shareFrontBtn;
@property (retain, nonatomic) AWETokenShareView *tokenView;
@property (retain, nonatomic) UIImageView *closeView;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isForMainConcern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (id)shareBtn;
- (void)setShareBtn:(id)arg0;
- (void)p_setUpUI;
- (id)p_titleForType:(long long)arg0;
- (id)avatarMaskView;
- (void)setAvatarMaskView:(id)arg0;
- (id)p_maskLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)p_fetchToken;
- (id)tokenView;
- (void)p_trackShareToken;
- (void)setTokenView:(id)arg0;
- (void)setIsForMainConcern:(BOOL)arg0;
- (void)showStartUpAnimation;
- (id)animatiedView;
- (id)shareFrontBtn;
- (BOOL)isForMainConcern;
- (id)p_btnTitleForType:(long long)arg0;
- (void)shareBtnPressed;
- (void)fadeDismiss;
- (id)initWithShareType:(long long)arg0;
- (void)setAnimatiedView:(id)arg0;
- (void)setShareFrontBtn:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (void)close;
- (id)titleLabel;
- (void)setToken:(id)arg0;
- (id)contentView;
- (id)token;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)topView;
- (void)setTopView:(id)arg0;
- (void)setShareType:(long long)arg0;
- (long long)shareType;

@end