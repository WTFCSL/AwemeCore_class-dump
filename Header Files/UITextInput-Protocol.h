//
//     Generated by private class-dump
//

@class NSDictionary, UITextPosition, UIView, UITextRange;
@protocol UITextInputDelegate, UITextInputTokenizer;

@protocol UITextInput <UIKeyInput>

@property (copy) UITextRange *selectedTextRange;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)arg0;
- (void)replaceRange:(id)arg0 withText:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })arg0 withinRange:(id)arg1;
- (id)positionFromPosition:(id)arg0 inDirection:(long long)arg1 offset:(long long)arg2;
- (id)selectedTextRange;
- (id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1;
- (long long)offsetFromPosition:(id)arg0 toPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)arg0;
- (void)setBaseWritingDirection:(long long)arg0 forRange:(id)arg1;
- (id)positionWithinRange:(id)arg0 farthestInDirection:(long long)arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)unmarkText;
- (id)characterRangeByExtendingPosition:(id)arg0 inDirection:(long long)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)beginningOfDocument;
- (long long)comparePosition:(id)arg0 toPosition:(id)arg1;
- (id)positionFromPosition:(id)arg0 offset:(long long)arg1;
- (id)textInRange:(id)arg0;
- (id)tokenizer;
- (id)markedTextStyle;
- (id)endOfDocument;
- (long long)baseWritingDirectionForPosition:(id)arg0 inDirection:(long long)arg1;
- (void)setMarkedTextStyle:(id)arg0;
- (id)markedTextRange;
- (void)setSelectedTextRange:(id)arg0;
- (void)setInputDelegate:(id)arg0;
- (void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (id)inputDelegate;

@optional

- (id)textStylingAtPosition:(id)arg0 inDirection:(long long)arg1;
- (id)insertTextPlaceholderWithSize:(struct CGSize { double x0; double x1; })arg0;
- (void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1;
- (void)insertDictationResult:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDictationResultPlaceholder:(id)arg0;
- (void)removeTextPlaceholder:(id)arg0;
- (id)insertDictationResultPlaceholder;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setAttributedMarkedText:(id)arg0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)insertText:(id)arg0 alternatives:(id)arg1 style:(long long)arg2;
- (long long)selectionAffinity;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setSelectionAffinity:(long long)arg0;
- (id)textInputView;
- (BOOL)shouldChangeTextInRange:(id)arg0 replacementText:(id)arg1;
- (id)positionWithinRange:(id)arg0 atCharacterOffset:(long long)arg1;
- (long long)characterOffsetOfPosition:(id)arg0 withinRange:(id)arg1;
- (void)dictationRecordingDidEnd;
- (void)dictationRecognitionFailed;
- (id)editMenuForTextRange:(id)arg0 suggestedActions:(id)arg1;
- (void)willPresentEditMenuWithAnimator:(id)arg0;
- (void)willDismissEditMenuWithAnimator:(id)arg0;

@end