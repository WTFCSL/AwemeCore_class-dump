//
//     Generated by private class-dump
//

@class UIScrollView, UIView, AWEECOMIMDynamicCardCommonDiffBorderRadiusView;

@interface AWEECOMIMDynamicCardLayoutView : AWEECOMIMDynamicCardBaseElementView {
    long long _layoutStyle;
    long long _scrollType;
    long long _weight;
    AWEECOMIMDynamicCardCommonDiffBorderRadiusView *_bkgView;
    UIScrollView *_scrollView;
    UIView *_layerView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _paddingInserts;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _marginInsets;
}

@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *layerView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long scrollType;
@property (nonatomic) long long weight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingInserts;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;

- (id)bkgView;
- (void)setBkgView:(id)arg0;
- (void)setScrollType:(long long)arg0;
- (id)layerView;
- (void)setLayerView:(id)arg0;
- (double)widthWithElementModel:(id)arg0;
- (double)heightWithElementModel:(id)arg0;
- (void)updateWithElememtModel:(id)arg0;
- (void)addChildElementView:(id)arg0 model:(id)arg1 top:(double)arg2 height:(double)arg3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingInserts;
- (void)addChildElementView:(id)arg0 model:(id)arg1 left:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)addChildElementView:(id)arg0 model:(id)arg1 top:(double)arg2 height:(double)arg3 width:(double)arg4;
- (void)setPaddingInserts:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (BOOL)checkIfNeedPreCalculateWidth:(id)arg0;
- (double)preCalculateWidth:(id)arg0;
- (long long)weight;
- (void)setScrollView:(id)arg0;
- (long long)layoutStyle;
- (void)setWeight:(long long)arg0;
- (void)setLayoutStyle:(long long)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)scrollView;
- (long long)scrollType;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })marginInsets;
- (void)setMarginInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;

@end
