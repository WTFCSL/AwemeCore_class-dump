//
//     Generated by private class-dump
//

@class NSString, AWEGradientView, CAGradientLayer;

@interface LSIMGradientViewImpl : UIView <LSIMGradientViewProtocol> {
    AWEGradientView *_gradientView;
}

@property (retain, nonatomic) AWEGradientView *gradientView;
@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradientView;

@end