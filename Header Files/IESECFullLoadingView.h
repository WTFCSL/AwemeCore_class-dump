//
//     Generated by private class-dump
//

@class LOTAnimationView, NSString;

@interface IESECFullLoadingView : UIView <IESECUILoadingViewProtocol> {
    LOTAnimationView *_animationView;
}

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end