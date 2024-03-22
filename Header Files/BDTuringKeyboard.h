//
//     Generated by private class-dump
//

@protocol BDTuringKeyboardDelegate;

@interface BDTuringKeyboard : NSObject {
    BOOL _keyboardIsShow;
    double _keyboardTop;
    id<BDTuringKeyboardDelegate> _delegate;
}

@property (nonatomic) double keyboardTop;
@property (nonatomic) BOOL keyboardIsShow;
@property (weak, nonatomic) id<BDTuringKeyboardDelegate> delegate;

+ (id)sharedKeyboard;

- (void)setKeyboardTop:(double)arg0;
- (void)setKeyboardIsShow:(BOOL)arg0;
- (double)keyboardTop;
- (void)onKeyboardWillShow:(id)arg0;
- (BOOL)keyboardIsShow;
- (void)onKeyboardWillHide:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end