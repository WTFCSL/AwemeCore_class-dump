//
//     Generated by private class-dump
//

@class UILabel, IESLiveWebpLoadingView;

@interface IESLivePKSearchLoadingView : UIView {
    IESLiveWebpLoadingView *_animationView;
    UILabel *_textLabel;
}

@property (retain, nonatomic) IESLiveWebpLoadingView *animationView;
@property (retain, nonatomic) UILabel *textLabel;

- (id)textLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextLabel:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (void)layoutUI;

@end
