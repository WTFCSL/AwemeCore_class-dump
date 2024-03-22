//
//     Generated by private class-dump
//

@class UITextView, IESFormatEmojiTextParser, IESFormatInputBackView, NSString, UIView, UILabel, UIButton;
@protocol IESFormatInputViewDelegate;

@interface IESFormatInputView : UIView <UITextViewDelegate, IESFormatInputBackViewDelegate> {
    id<IESFormatInputViewDelegate> _delegate;
    unsigned long long _characterLimit;
    IESFormatInputBackView *_backgroundView;
    UIView *_textContainer;
    UITextView *_textView;
    UITextView *_calculateView;
    UILabel *_placeHolderLabel;
    UIButton *_voiceModeButton;
    double _textContainerHeight;
    double _textContainerMaxHeight;
    IESFormatEmojiTextParser *_textParser;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textViewInsets;
}

@property (retain, nonatomic) IESFormatInputBackView *backgroundView;
@property (retain, nonatomic) UIView *textContainer;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UITextView *calculateView;
@property (retain, nonatomic) UILabel *placeHolderLabel;
@property (retain, nonatomic) UIButton *voiceModeButton;
@property (nonatomic) double textContainerHeight;
@property (nonatomic) double textContainerMaxHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textViewInsets;
@property (retain, nonatomic) IESFormatEmojiTextParser *textParser;
@property (weak, nonatomic) id<IESFormatInputViewDelegate> delegate;
@property (nonatomic) unsigned long long characterLimit;
@property (retain, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearInputContent;
- (void)setupNotification;
- (void)setTextParser:(id)arg0;
- (id)textParser;
- (void)hideKeyboardIfNeeded;
- (void)tapInputBackView:(id)arg0;
- (id)voiceModeButton;
- (void)hideWithAnimation:(BOOL)arg0;
- (id)initWithPlaceHolderRightMargin:(double)arg0 button:(id)arg1;
- (void)setVoiceModeButton:(id)arg0;
- (void)setupUI:(double)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textViewInsets;
- (id)placeHolderLabel;
- (void)keyboardShow:(id)arg0;
- (void)keyboardHide:(id)arg0;
- (void)setTextContainerHeight:(double)arg0;
- (void)updateInputViewHeightIfNeeded;
- (void)updateUIWhenKeyboardShowing:(BOOL)arg0;
- (BOOL)checkInputTextReachMaxLimit:(id)arg0 length:(long long)arg1;
- (long long)calculateCharacterCountForTextView:(id)arg0;
- (double)textContainerHeight;
- (double)calculateTextHeightWithWidth:(double)arg0;
- (double)textContainerMaxHeight;
- (id)calculateView;
- (void)setTextViewInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)tapPlaceHolderGesture:(id)arg0;
- (void)setCalculateView:(id)arg0;
- (void)setPlaceHolderLabel:(id)arg0;
- (void)setTextContainerMaxHeight:(double)arg0;
- (id)textView;
- (id)textContainer;
- (void)setTextContainer:(id)arg0;
- (void)showKeyboardIfNeeded;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)show;
- (id)content;
- (void)hideKeyboard;
- (id)delegate;
- (void)setContent:(id)arg0;
- (void)setTextView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (unsigned long long)characterLimit;
- (void)setCharacterLimit:(unsigned long long)arg0;

@end