//
//     Generated by private class-dump
//

@class UIImageView;

@interface IESLivePKAnchorRematchGuideView : UIView {
    BOOL _isSigned;
    id /* block */ _guideActionBlock;
    UIImageView *_checkBoxView;
}

@property (nonatomic) BOOL isSigned;
@property (retain, nonatomic) UIImageView *checkBoxView;
@property (copy, nonatomic) id /* block */ guideActionBlock;

- (void)setupGuideView;
- (id)checkBoxView;
- (void)setGuideActionBlock:(id /* block */)arg0;
- (void)guideCancelBtnDidClick:(id)arg0;
- (void)guideAutoMatchDidClick:(id)arg0;
- (void)setCheckBoxView:(id)arg0;
- (void)boxButtonDidClick:(id)arg0;
- (id /* block */)guideActionBlock;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isSigned;
- (void)setIsSigned:(BOOL)arg0;

@end
