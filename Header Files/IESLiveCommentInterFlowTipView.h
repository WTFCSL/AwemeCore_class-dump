//
//     Generated by private class-dump
//

@class UIImageView, UILabel, HTSLiveButton;

@interface IESLiveCommentInterFlowTipView : UIView {
    id /* block */ _onCloseButtonTapped;
    UIImageView *_tipsWarmImageView;
    UILabel *_tipsLabel;
    HTSLiveButton *_closeButton;
}

@property (retain, nonatomic) UIImageView *tipsWarmImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) HTSLiveButton *closeButton;
@property (copy, nonatomic) id /* block */ onCloseButtonTapped;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id /* block */)onCloseButtonTapped;
- (id)tipsWarmImageView;
- (void)setOnCloseButtonTapped:(id /* block */)arg0;
- (void)setTipsWarmImageView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)closeButtonTapped;
- (void)setUpUI;

@end