//
//     Generated by private class-dump
//

@class NSArray, UIImageView, UILabel, NSNumber;

@interface IESLiveSkyEyeAnchorView : UIView {
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    UILabel *_topTipLabel;
    UILabel *_bottomTipLabel;
    id /* block */ _cancelAction;
    id /* block */ _confirmAction;
    NSNumber *_chat_switch;
    NSArray *_btns;
}

@property (retain, nonatomic) NSNumber *chat_switch;
@property (retain, nonatomic) NSArray *btns;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *topTipLabel;
@property (retain, nonatomic) UILabel *bottomTipLabel;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ confirmAction;

- (id)bottomTipLabel;
- (void)setBottomTipLabel:(id)arg0;
- (id)btns;
- (void)setBtns:(id)arg0;
- (id)topTipLabel;
- (void)setTopTipLabel:(id)arg0;
- (void)doCancel;
- (void)doConfirm;
- (void)setChat_switch:(id)arg0;
- (void)updateSelectWithBtn:(id)arg0;
- (id)chat_switch;
- (void)setCancelAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)titleImageView;
- (id /* block */)cancelAction;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg0;
- (void)setTitleImageView:(id)arg0;

@end