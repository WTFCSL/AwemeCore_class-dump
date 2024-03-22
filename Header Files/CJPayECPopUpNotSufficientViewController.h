//
//     Generated by private class-dump
//

@class CJPayStyleButton, UIImageView, CJPayButton, UILabel, NSString;

@interface CJPayECPopUpNotSufficientViewController : CJPayPopUpBaseViewController {
    NSString *_showTitle;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    CJPayStyleButton *_changePayMethodBtn;
    CJPayButton *_closeBtn;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayStyleButton *changePayMethodBtn;
@property (retain, nonatomic) CJPayButton *closeBtn;
@property (copy, nonatomic) NSString *showTitle;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)p_close;
- (id)changePayMethodBtn;
- (void)setChangePayMethodBtn:(id)arg0;
- (struct CGSize { double x0; double x1; })p_calSize;
- (id)showTitle;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setShowTitle:(id)arg0;
- (void)setupUI;

@end