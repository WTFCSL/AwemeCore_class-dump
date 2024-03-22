//
//     Generated by private class-dump
//

@class NSMutableDictionary, UIView;

@interface AWEECOMIMDynamicCardButtonGroupView : AWEECOMIMDynamicCardBaseElementView {
    UIView *_bkgView;
    NSMutableDictionary *_customActionModeldict;
}

@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) NSMutableDictionary *customActionModeldict;

+ (BOOL)checkSupportSubElementViewWithElementModel:(id)arg0;
+ (double)autoSizeBtnTopSpacing;
+ (double)vSpaceingBetweenBtns;
+ (double)autoSizeBtnHeight;
+ (double)autoSizeBtnBottomSpacing;
+ (double)autoSizeBtnLeftSpacing;

- (void)onButtonClick:(id)arg0;
- (id)bkgView;
- (void)setBkgView:(id)arg0;
- (double)heightWithElementModel:(id)arg0;
- (void)updateWithElememtModel:(id)arg0;
- (void)setCustomActionModeldict:(id)arg0;
- (BOOL)buttonShouldShow:(id)arg0;
- (id)customActionModeldict;
- (id)autoSizeButtonWithType:(long long)arg0 buttonText:(id)arg1 disabled:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autoSizeButtonFrameWithCurrentIdx:(unsigned long long)arg0 buttonModelArr:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end