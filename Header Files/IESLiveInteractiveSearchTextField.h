//
//     Generated by private class-dump
//

@class UIImage;

@interface IESLiveInteractiveSearchTextField : UITextField {
    UIImage *_leftImage;
    UIImage *_rightImage;
    double _leftSpacer;
    double _rightSpacer;
    double _textleftSpacer;
    id /* block */ _textFieldDidChangeBlock;
    id /* block */ _didClickedClearButtonBlock;
}

@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) UIImage *rightImage;
@property (nonatomic) double leftSpacer;
@property (nonatomic) double rightSpacer;
@property (nonatomic) double textleftSpacer;
@property (copy, nonatomic) id /* block */ textFieldDidChangeBlock;
@property (copy, nonatomic) id /* block */ didClickedClearButtonBlock;

- (void)didClickedClearButton:(id)arg0;
- (void)setClearHidden:(BOOL)arg0;
- (void)setLeftSpacer:(double)arg0;
- (void)setRightSpacer:(double)arg0;
- (void)setDidClickedClearButtonBlock:(id /* block */)arg0;
- (double)leftSpacer;
- (double)rightSpacer;
- (id /* block */)textFieldDidChangeBlock;
- (id /* block */)didClickedClearButtonBlock;
- (void)setTextFieldDidChangeBlock:(id /* block */)arg0;
- (double)textleftSpacer;
- (void)setTextleftSpacer:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (id)leftImage;
- (void)setLeftImage:(id)arg0;
- (void)textFieldTextDidChange:(id)arg0;
- (id)rightImage;
- (void)setRightImage:(id)arg0;

@end
