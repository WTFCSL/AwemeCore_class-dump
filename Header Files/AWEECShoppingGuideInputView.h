//
//     Generated by private class-dump
//

@class UIButton, UIView, AWEGrowingTextView;

@interface AWEECShoppingGuideInputView : UIView {
    UIButton *_sendButton;
    UIButton *_cleanButton;
    AWEGrowingTextView *_textView;
    UIView *_roundContainer;
}

@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIButton *cleanButton;
@property (retain, nonatomic) AWEGrowingTextView *textView;
@property (retain, nonatomic) UIView *roundContainer;

- (void)setCleanButton:(id)arg0;
- (id)cleanButton;
- (id)roundContainer;
- (void)setRoundContainer:(id)arg0;
- (id)textView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextView:(id)arg0;
- (void)setupUI;
- (id)sendButton;
- (void)setSendButton:(id)arg0;

@end
