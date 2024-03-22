//
//     Generated by private class-dump
//

@class UIView;

@interface CJPayKeyboardManager : NSObject {
    BOOL _keyboardShowIsAllowed;
    UIView *_currentResponderView;
}

@property (nonatomic) BOOL keyboardShowIsAllowed;
@property (weak, nonatomic) UIView *currentResponderView;

+ (id)sharedInstance;

- (void)prohibitKeyboardShow;
- (void)permitKeyboardShow;
- (BOOL)becomeFirstResponder:(id)arg0;
- (BOOL)recoverFirstResponder;
- (BOOL)resignFirstResponder:(id)arg0;
- (void)setKeyboardShowIsAllowed:(BOOL)arg0;
- (BOOL)keyboardShowIsAllowed;
- (BOOL)keyboardShowIsPermited;
- (void)setCurrentResponderView:(id)arg0;
- (void)p_delayPermitKeyboardShow:(double)arg0;
- (void)delayPermitKeyboardShow:(double)arg0;
- (void).cxx_destruct;
- (id)currentResponderView;

@end
