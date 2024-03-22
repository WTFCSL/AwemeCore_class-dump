//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface IESLiveTextCorrectionBubbleView : UIView {
    BOOL _atTop;
    NSString *_hintWord;
    id /* block */ _confirm;
    id /* block */ _cancel;
    id /* block */ _dismiss;
    UIView *_content;
    struct CGPoint { double x; double y; } _arrowPoint;
}

@property (retain, nonatomic) NSString *hintWord;
@property (nonatomic) struct CGPoint { double x; double y; } arrowPoint;
@property (nonatomic) BOOL atTop;
@property (copy, nonatomic) id /* block */ confirm;
@property (copy, nonatomic) id /* block */ cancel;
@property (copy, nonatomic) id /* block */ dismiss;
@property (retain, nonatomic) UIView *content;

- (void)showOnView:(id)arg0;
- (struct CGPoint { double x0; double x1; })arrowPoint;
- (void)setArrowPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)executeConfirm;
- (id)hintWord;
- (void)setHintWord:(id)arg0;
- (void)executeDismiss;
- (BOOL)atTop;
- (void)executeCancel;
- (id)initWithHintWord:(id)arg0 arrowPoint:(struct CGPoint { double x0; double x1; })arg1 atTop:(BOOL)arg2 confirm:(id /* block */)arg3 cancel:(id /* block */)arg4 dismiss:(id /* block */)arg5;
- (void)setAtTop:(BOOL)arg0;
- (id /* block */)dismiss;
- (void).cxx_destruct;
- (id)content;
- (void)setCancel:(id /* block */)arg0;
- (void)setContent:(id)arg0;
- (id /* block */)cancel;
- (id /* block */)confirm;
- (void)setConfirm:(id /* block */)arg0;
- (void)setDismiss:(id /* block */)arg0;

@end
