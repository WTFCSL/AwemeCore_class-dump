//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;

@interface AWENearbyC2LoginRemindView : UIView {
    id /* block */ _clickHandler;
    UIView *_contentView;
    UILabel *_titleLable;
    UILabel *_tipsLable;
    UIButton *_loginBtn;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UILabel *tipsLable;
@property (retain, nonatomic) UIButton *loginBtn;
@property (copy, nonatomic) id /* block */ clickHandler;

- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (id /* block */)clickHandler;
- (void)setClickHandler:(id /* block */)arg0;
- (id)tipsLable;
- (id)loginBtn;
- (void)onLoginBtnClicked;
- (void)setTipsLable:(id)arg0;
- (void)setLoginBtn:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)setupUI;

@end
