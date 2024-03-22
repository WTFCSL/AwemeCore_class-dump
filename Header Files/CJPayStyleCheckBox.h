//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface CJPayStyleCheckBox : CJPayButton {
    UIColor *_selectedCheckBoxColor;
    UIColor *_cjStyleSelectedCheckBoxColor;
    NSString *_checkImgName;
    NSString *_noCheckImageName;
}

@property (retain, nonatomic) UIColor *cjStyleSelectedCheckBoxColor;
@property (copy, nonatomic) NSString *checkImgName;
@property (copy, nonatomic) NSString *noCheckImageName;
@property (retain, nonatomic) UIColor *selectedCheckBoxColor;

- (void)_UIAppearance_setSelectedCheckBoxColor:(id)arg0;
- (void)updateWithCheckImgName:(id)arg0 noCheckImgName:(id)arg1;
- (void)p_applyDefaultAppearance;
- (void)p_updateStyle;
- (void)setCjStyleSelectedCheckBoxColor:(id)arg0;
- (id)noCheckImageName;
- (id)checkImgName;
- (id)cjStyleSelectedCheckBoxColor;
- (id)selectedCheckBoxColor;
- (void)setSelectedCheckBoxColor:(id)arg0;
- (void)setCheckImgName:(id)arg0;
- (void)setNoCheckImageName:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
