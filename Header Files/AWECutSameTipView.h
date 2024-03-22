//
//     Generated by private class-dump
//

@class UILabel, ACCButton;

@interface AWECutSameTipView : UIView {
    UILabel *_tipLabel;
    ACCButton *_clickButton;
    ACCButton *_closeButton;
    id /* block */ _tapBlock;
}

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) ACCButton *clickButton;
@property (retain, nonatomic) ACCButton *closeButton;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)setClickButton:(id)arg0;
- (id)clickButton;
- (void)updateCutSameTitlte:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupViews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)didTap;

@end