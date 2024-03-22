//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableArray;
@protocol BDASplashComplianceBaseDelegate;

@interface BDASplashCreativeEffectView : UIView {
    NSDictionary *_config;
    id<BDASplashComplianceBaseDelegate> _delegate;
    NSMutableArray *_imageArray;
}

@property (copy, nonatomic) NSDictionary *config;
@property (weak, nonatomic) id<BDASplashComplianceBaseDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *imageArray;

- (void)setImageArray:(id)arg0;
- (id)imageArray;
- (void)onClickGesture:(id)arg0;
- (void)splashClickWithPoint:(struct CGPoint { double x0; double x1; })arg0 isValid:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 config:(id)arg1 delegate:(id)arg2;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupView;

@end
