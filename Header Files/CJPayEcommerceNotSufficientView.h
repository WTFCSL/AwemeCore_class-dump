//
//     Generated by private class-dump
//

@class UIImageView, UILabel, CJPayStyleButton;

@interface CJPayEcommerceNotSufficientView : UIView {
    UIImageView *_iconView;
    UILabel *_titleLable;
    CJPayStyleButton *_changePayMethodBtn;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) CJPayStyleButton *changePayMethodBtn;

- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (id)changePayMethodBtn;
- (void)setChangePayMethodBtn:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (void)updateContent:(id)arg0;

@end