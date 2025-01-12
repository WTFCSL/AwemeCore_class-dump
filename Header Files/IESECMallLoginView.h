//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;

@interface IESECMallLoginView : UIView {
    id /* block */ _loginBtnClickedBlock;
    UIImageView *_imageView;
    UILabel *_tipLabel;
    UILabel *_subTipLabel;
    UIButton *_loginButton;
    unsigned long long _theme;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *subTipLabel;
@property (retain, nonatomic) UIButton *loginButton;
@property (nonatomic) unsigned long long theme;
@property (copy, nonatomic) id /* block */ loginBtnClickedBlock;

- (void)setupSubviewsPosition;
- (void)setLoginBtnClickedBlock:(id /* block */)arg0;
- (id)subTipLabel;
- (void)setSubTipLabel:(id)arg0;
- (void)loginBtnClicked:(id)arg0;
- (id /* block */)loginBtnClickedBlock;
- (void)setTheme:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)theme;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)initWithTheme:(unsigned long long)arg0;
- (id)loginButton;
- (void)setLoginButton:(id)arg0;

@end
