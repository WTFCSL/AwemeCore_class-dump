//
//     Generated by private class-dump
//

@class AWEECOMIMTextComponent;

@interface AWEECOMIMComponentLabelView : UIView {
    AWEECOMIMTextComponent *_textComponentView;
}

@property (retain, nonatomic) AWEECOMIMTextComponent *textComponentView;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentTextInsets;
+ (double)bottomPadding;
+ (double)topPadding;

- (id)textComponentView;
- (void)setTextComponentView:(id)arg0;
- (void)updateWithTextComponnetModel:(id)arg0 textSize:(struct CGSize { double x0; double x1; })arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end