//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface AWECommentPinchGuideAnimationViewConfig : NSObject {
    UIColor *_backgroundColor;
    double _lottieViewSize;
    double _lottieToHintInset;
    NSString *_hintLabelText;
    double _hintLabelFontSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _layoutInset;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutInset;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double lottieViewSize;
@property (nonatomic) double lottieToHintInset;
@property (copy, nonatomic) NSString *hintLabelText;
@property (nonatomic) double hintLabelFontSize;

- (void)setLayoutInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)hintLabelText;
- (double)hintLabelFontSize;
- (double)lottieToHintInset;
- (double)lottieViewSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutInset;
- (void)setLottieViewSize:(double)arg0;
- (void)setLottieToHintInset:(double)arg0;
- (void)setHintLabelFontSize:(double)arg0;
- (void)setHintLabelText:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;

@end
