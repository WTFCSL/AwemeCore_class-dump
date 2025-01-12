//
//     Generated by private class-dump
//

@class UITextView, NSString, BDARKeyboardListener, UIView, UILabel, UIButton;

@interface BDARKeyboardController : UIViewController <UITextViewDelegate> {
    id /* block */ _inputFinished;
    BDARKeyboardListener *_keyboardListener;
    double _keyboardHeight;
    UIView *_backgroundView;
    UIButton *_finishedButton;
    UITextView *_inputTextView;
    UILabel *_placeholder;
    NSString *_initialText;
}

@property (copy, nonatomic) id /* block */ inputFinished;
@property (retain, nonatomic) BDARKeyboardListener *keyboardListener;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *finishedButton;
@property (retain, nonatomic) UITextView *inputTextView;
@property (retain, nonatomic) UILabel *placeholder;
@property (copy, nonatomic) NSString *initialText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)triggerTextReportProcessWithText:(id)arg0 completed:(id /* block */)arg1;

- (void)setInputFinished:(id /* block */)arg0;
- (void)onMaskingTapped:(id)arg0;
- (void)dismissWithMessage:(id)arg0 isTapMask:(BOOL)arg1;
- (void)onFinishButtonTapped:(id)arg0;
- (void)setFinishedButton:(id)arg0;
- (id)finishedButton;
- (void)setInputTextView:(id)arg0;
- (id /* block */)inputFinished;
- (id)keyboardListener;
- (void)setKeyboardListener:(id)arg0;
- (void)keyboardDidHide:(id)arg0;
- (double)keyboardHeight;
- (id)backgroundView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setKeyboardHeight:(double)arg0;
- (void)keyboardWillShow:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setPlaceholder:(id)arg0;
- (id)placeholder;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setBackgroundView:(id)arg0;
- (BOOL)textViewShouldBeginEditing:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (void)setupUI;
- (void)setInitialText:(id)arg0;
- (id)initialText;
- (id)inputTextView;
- (void)layoutUI;

@end
