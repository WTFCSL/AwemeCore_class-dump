//
//     Generated by private class-dump
//

@class AWEECOMIMTextComponent;

@interface AWEECOMIMCardComponentLabelView : UIView {
    AWEECOMIMTextComponent *_textComponentView;
}

@property (retain, nonatomic) AWEECOMIMTextComponent *textComponentView;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textContentInsets;
+ (double)bottomPadding;
+ (id)textFont;

- (id)textComponentView;
- (void)updateWithTextComponentModel:(id)arg0 height:(double)arg1;
- (void)setTextComponentView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
