//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWETimorTrustWarningViewController : UIViewController {
    id /* block */ _completion;
    UILabel *_title1;
    UILabel *_title2;
    NSString *_title1Detail;
    NSString *_title2Detail;
    NSString *_contentDetail;
    UILabel *_content;
    UIView *_warningView;
    UIImageView *_warningImage;
    UIView *_bgView;
    UIButton *_continueBtn;
    UIButton *_closeBtn;
    NSString *_appName;
    long long _trustLevel;
}

@property (retain, nonatomic) UILabel *title1;
@property (retain, nonatomic) UILabel *title2;
@property (retain, nonatomic) NSString *title1Detail;
@property (retain, nonatomic) NSString *title2Detail;
@property (retain, nonatomic) NSString *contentDetail;
@property (retain, nonatomic) UILabel *content;
@property (retain, nonatomic) UIView *warningView;
@property (retain, nonatomic) UIImageView *warningImage;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIButton *continueBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) long long trustLevel;
@property (copy, nonatomic) id /* block */ completion;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (id)continueBtn;
- (void)setContinueBtn:(id)arg0;
- (void)setTitle1:(id)arg0;
- (void)setTitle2:(id)arg0;
- (id)title1;
- (id)title2;
- (id)initWithAppName:(id)arg0 trustLevel:(long long)arg1 title1:(id)arg2 title2:(id)arg3 content:(id)arg4;
- (id)title1Detail;
- (id)title2Detail;
- (id)contentDetail;
- (id)warningImage;
- (void)continueBtnOnClicked;
- (void)closeBtnOnClicked;
- (void)setTitle1Detail:(id)arg0;
- (void)setTitle2Detail:(id)arg0;
- (void)setContentDetail:(id)arg0;
- (void)setWarningImage:(id)arg0;
- (void)setTrustLevel:(long long)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (id)warningView;
- (void)setWarningView:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)content;
- (void)setContent:(id)arg0;
- (void)viewDidLoad;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (long long)trustLevel;
- (void)createUI;

@end
