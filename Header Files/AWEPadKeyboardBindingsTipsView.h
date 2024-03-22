//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWEPadKeyboardBindingsTipsView : UIView {
    id /* block */ _onDidDismissCallback;
    UIView *_contentView;
    UILabel *_tipsTitleLabel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipsTitleLabel;
@property (copy, nonatomic) id /* block */ onDidDismissCallback;

- (id)tipsTitleLabel;
- (void)setTipsTitleLabel:(id)arg0;
- (void)setOnDidDismissCallback:(id /* block */)arg0;
- (id /* block */)onDidDismissCallback;
- (id)createNormalKeyTipsView:(id)arg0 tips:(id)arg1;
- (id)createArrowTipsView;
- (id)arrowIconViewWithImageName:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setContentView:(id)arg0;
- (void)setupView;

@end
