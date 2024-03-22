//
//     Generated by private class-dump
//

@class NSString, BDPAlertView;

@interface BDPAlertTextView : UITextView {
    BDPAlertView *_alertView;
    NSString *_placeholder;
}

@property (weak, nonatomic) BDPAlertView *alertView;
@property (copy, nonatomic) NSString *placeholder;

- (void)numberFieldCancle;
- (void)setDefaultInputAccessoryViewWithTarget:(id)arg0 action:(SEL)arg1;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAlertView:(id)arg0;
- (void)setPlaceholder:(id)arg0;
- (id)placeholder;
- (id)alertView;

@end
