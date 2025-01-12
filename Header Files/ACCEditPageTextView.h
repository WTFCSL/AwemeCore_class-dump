//
//     Generated by private class-dump
//

@class NSString, NSArray, ACCTextErrorPopover, CALayer, NSObject;
@protocol OS_dispatch_source, ACCTextViewDelegate;

@interface ACCEditPageTextView : UITextView <UITextViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _forCoverText;
    BOOL _isProcessingDelete;
    id<ACCTextViewDelegate> _acc_delegate;
    NSString *_textStickerId;
    NSString *_creationID;
    NSString *_currReplacementText;
    long long _lastMarkedRangeOffset;
    NSObject<OS_dispatch_source> *_typingTimer;
    NSArray *_matches;
    ACCTextErrorPopover *_currentTextErrorPopover;
    CALayer *_textErrorLayer;
    struct _NSRange { unsigned long long location; unsigned long long length; } _currChangedRange;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } currChangedRange;
@property (retain, nonatomic) NSString *currReplacementText;
@property (nonatomic) long long lastMarkedRangeOffset;
@property (nonatomic) BOOL isProcessingDelete;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *typingTimer;
@property (copy, nonatomic) NSArray *matches;
@property (retain, nonatomic) ACCTextErrorPopover *currentTextErrorPopover;
@property (retain, nonatomic) CALayer *textErrorLayer;
@property (weak, nonatomic) id<ACCTextViewDelegate> acc_delegate;
@property (retain, nonatomic) NSString *textStickerId;
@property (nonatomic) BOOL forCoverText;
@property (copy, nonatomic) NSString *creationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)creationID;
- (void)setCreationID:(id)arg0;
- (id)textStickerId;
- (void)setForCoverText:(BOOL)arg0;
- (void)setTextStickerId:(id)arg0;
- (void)checkCurrentTextErrorWithTextView:(id)arg0;
- (id)currentTextErrorPopover;
- (void)setCurrentTextErrorPopover:(id)arg0;
- (BOOL)showTextErrorPopoverIfNeedWithTextView:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (id)textErrorLayer;
- (void)setTextErrorLayer:(id)arg0;
- (BOOL)forCoverText;
- (id)acc_delegate;
- (void)cancelTypingTimer;
- (void)setTypingTimer:(id)arg0;
- (id)typingTimer;
- (void)setCurrChangedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)setCurrReplacementText:(id)arg0;
- (BOOL)hasVisibleTexts;
- (void)updateTextErrorLayer;
- (void)setAcc_delegate:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })currChangedRange;
- (id)currReplacementText;
- (long long)lastMarkedRangeOffset;
- (void)setLastMarkedRangeOffset:(long long)arg0;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (id)init;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)becomeFirstResponder;
- (BOOL)textView:(id)arg0 shouldInteractWithTextAttachment:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (void)setMatches:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (id)matches;
- (void)textViewDidBeginEditing:(id)arg0;
- (BOOL)textViewShouldBeginEditing:(id)arg0;
- (BOOL)textViewShouldEndEditing:(id)arg0;
- (void)textViewDidEndEditing:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (void)textViewDidChangeSelection:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 textContainer:(id)arg1;
- (void)tapGesture:(id)arg0;
- (BOOL)isProcessingDelete;
- (void)setIsProcessingDelete:(BOOL)arg0;

@end
