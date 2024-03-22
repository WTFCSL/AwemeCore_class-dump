//
//     Generated by private class-dump
//

@class UITextView, NSString, UIView, UILabel, UIButton;

@interface IESLiveInteractionApplyReasonEditPopupView : UIView <UITextViewDelegate> {
    long long _itemType;
    id /* block */ _trackCallback;
    id /* block */ _didEditedReason;
    UIView *_textBackView;
    UITextView *_textView;
    UIButton *_confimBtn;
    UIView *_backContainerView;
    UILabel *_countLabel;
    NSString *_lastEditText;
}

@property (retain, nonatomic) UIView *textBackView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *confimBtn;
@property (retain, nonatomic) UIView *backContainerView;
@property (retain, nonatomic) UILabel *countLabel;
@property (copy, nonatomic) NSString *lastEditText;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) id /* block */ trackCallback;
@property (copy, nonatomic) id /* block */ didEditedReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTrackCallback:(id /* block */)arg0;
- (id)backContainerView;
- (void)setBackContainerView:(id)arg0;
- (void)confirmAction:(id)arg0;
- (id /* block */)trackCallback;
- (void)setLastEditText:(id)arg0;
- (id)lastEditText;
- (void)setDidEditedReason:(id /* block */)arg0;
- (id /* block */)didEditedReason;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 andDIContext:(id)arg1;
- (void)didViewShow;
- (id)textBackView;
- (id)confimBtn;
- (void)changeButtonEnable:(BOOL)arg0;
- (void)setTextBackView:(id)arg0;
- (void)setConfimBtn:(id)arg0;
- (id)textView;
- (long long)itemType;
- (void)setItemType:(long long)arg0;
- (void).cxx_destruct;
- (void)setTextView:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)setupView;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;

@end
