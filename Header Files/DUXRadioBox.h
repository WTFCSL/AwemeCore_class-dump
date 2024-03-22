//
//     Generated by private class-dump
//

@class UIButton, NSString;

@interface DUXRadioBox : UIControl {
    BOOL _checked;
    unsigned long long _style;
    NSString *_disableText;
    UIButton *_button;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _interactionZoneEnlargeInsets;
}

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL checked;
@property (copy, nonatomic) NSString *disableText;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;

+ (id)radioboxWithStyle:(unsigned long long)arg0;

- (void)awe_themeReload;
- (void)setInteractionZoneEnlargeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)_buttonBorderColor;
- (void)setDisableText:(id)arg0;
- (double)_buttonBorderWidth;
- (id)disableText;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })interactionZoneEnlargeInsets;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })arg0;
- (double)_buttonAlhpa;
- (void)onValueChange;
- (void)onCheckboxClick;
- (void)disableButtonHighlightWhenTouched;
- (unsigned long long)style;
- (id)init;
- (BOOL)checked;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg0;
- (id)button;
- (void)setButton:(id)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)setEnabled:(BOOL)arg0;
- (void)layoutSubviews;
- (void)reset;
- (void)setStyle:(unsigned long long)arg0;
- (void)setChecked:(BOOL)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (double)_buttonCornerRadius;
- (id)_buttonBackgroundColor;
- (id)_buttonImage;

@end