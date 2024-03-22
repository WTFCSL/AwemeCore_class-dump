//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIButton;

@interface AWEMusicLunaGuideBubble : UIView {
    NSString *_title;
    NSString *_subTitle;
    NSString *_mainBtnName;
    id /* block */ _closeAction;
    id /* block */ _maiBtnTappedAction;
    UIImageView *_lunaImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_mainBtn;
    UIButton *_closeBtn;
}

@property (retain, nonatomic) UIImageView *lunaImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *mainBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *mainBtnName;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ maiBtnTappedAction;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)closeBtnTapped:(id)arg0;
- (id)lunaImageView;
- (id)mainBtn;
- (void)closeBtnTapped_IMP:(id)arg0;
- (void)mainBtnTapped_IMP:(id)arg0;
- (id /* block */)maiBtnTappedAction;
- (void)mainBtnTapped:(id)arg0;
- (void)setMainBtnName:(id)arg0;
- (id)mainBtnName;
- (void)setMaiBtnTappedAction:(id /* block */)arg0;
- (void)setLunaImageView:(id)arg0;
- (void)setMainBtn:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
