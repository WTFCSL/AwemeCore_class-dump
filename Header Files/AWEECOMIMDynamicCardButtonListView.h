//
//     Generated by private class-dump
//

@class NSMutableDictionary, UIView;

@interface AWEECOMIMDynamicCardButtonListView : AWEECOMIMDynamicCardButtonGroupView {
    UIView *_bkgView;
    NSMutableDictionary *_customActionModelDict;
}

@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) NSMutableDictionary *customActionModelDict;

- (void)onButtonClick:(id)arg0;
- (id)bkgView;
- (void)setBkgView:(id)arg0;
- (double)heightWithElementModel:(id)arg0;
- (void)updateWithElememtModel:(id)arg0;
- (void)setCustomActionModelDict:(id)arg0;
- (id)customActionModelDict;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end