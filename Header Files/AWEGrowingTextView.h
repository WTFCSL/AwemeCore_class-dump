//
//     Generated by private class-dump
//

@class UIFont, NSString, NSAttributedString, AWETextViewInternal, UITextRange, NSObject, NSParagraphStyle, UIColor;
@protocol AWEGrowingTextViewDelegate;

@interface AWEGrowingTextView : UIView <RTVGrowingTextView, UITextViewDelegate, UITextDragDelegate> {
    AWETextViewInternal *internalTextView;
    int minHeight;
    int maxHeight;
    int maxNumberOfLines;
    int minNumberOfLines;
    BOOL animateHeightChange;
    double animationDuration;
    long long textAlignment;
    struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
    BOOL editable;
    unsigned long long dataDetectorTypes;
    long long returnKeyType;
    long long keyboardType;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
    BOOL shouldCheckHeightChange;
    BOOL _disableCaretFixForIOS7;
    BOOL _disableGrowing;
    BOOL _disableFixOverscroll;
    UIFont *font;
    UIColor *textColor;
    NSParagraphStyle *_contentParagraphStyle;
    NSObject<AWEGrowingTextViewDelegate> *_delegate;
    double _lineSpacing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property int maxNumberOfLines;
@property int minNumberOfLines;
@property (nonatomic) int maxHeight;
@property (nonatomic) int minHeight;
@property BOOL animateHeightChange;
@property BOOL shouldCheckHeightChange;
@property double animationDuration;
@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (retain, nonatomic) NSParagraphStyle *placeholderParagraphStyle;
@property (retain, nonatomic) NSParagraphStyle *contentParagraphStyle;
@property (retain, nonatomic) AWETextViewInternal *internalTextView;
@property (weak, nonatomic) NSObject<AWEGrowingTextViewDelegate> *delegate;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long keyboardType;
@property struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textContainerInset;
@property (nonatomic) BOOL disableCaretFixForIOS7;
@property (nonatomic) double lineFragmentPadding;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double lineSpacing;
@property (nonatomic) long long maximumNumberOfLines;
@property (nonatomic) BOOL isScrollable;
@property (nonatomic) BOOL disableGrowing;
@property (nonatomic) BOOL disableFixOverscroll;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)internalTextView;
- (void)refreshHeight;
- (void)setDisableGrowing:(BOOL)arg0;
- (void)setContentParagraphStyle:(id)arg0;
- (id)contentParagraphStyle;
- (int)maxNumberOfLines;
- (void)setMaxNumberOfLines:(int)arg0;
- (void)setMinNumberOfLines:(int)arg0;
- (void)setDisableCaretFixForIOS7:(BOOL)arg0;
- (void)setPlaceholderParagraphStyle:(id)arg0;
- (void)setDisableFixOverscroll:(BOOL)arg0;
- (void)setShouldCheckHeightChange:(BOOL)arg0;
- (void)commonInitialiser;
- (void)commonInitialiser:(id)arg0;
- (double)measureHeight;
- (id)placeholderParagraphStyle;
- (BOOL)disableGrowing;
- (void)resizeTextView:(long long)arg0;
- (void)updatePlaceholderHidden;
- (BOOL)disableCaretFixForIOS7;
- (void)resetScrollPositionForIOS7;
- (void)setContentInsetPurely:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (int)minNumberOfLines;
- (void)growingTextViewDidChange;
- (void)growDidStop;
- (void)setInternalTextView:(id)arg0;
- (BOOL)animateHeightChange;
- (void)setAnimateHeightChange:(BOOL)arg0;
- (BOOL)shouldCheckHeightChange;
- (BOOL)disableFixOverscroll;
- (id)placeholderColor;
- (unsigned long long)dataDetectorTypes;
- (void)setPlaceholderColor:(id)arg0;
- (void)setDataDetectorTypes:(unsigned long long)arg0;
- (long long)returnKeyType;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInset;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (BOOL)enablesReturnKeyAutomatically;
- (void)setReturnKeyType:(long long)arg0;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg0;
- (void)setLineBreakMode:(long long)arg0;
- (BOOL)isFirstResponder;
- (id)attributedText;
- (void)setKeyboardType:(long long)arg0;
- (long long)lineBreakMode;
- (long long)keyboardType;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (BOOL)resignFirstResponder;
- (long long)maximumNumberOfLines;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)setAttributedText:(id)arg0;
- (void)setText:(id)arg0;
- (double)lineFragmentPadding;
- (void)setMinHeight:(int)arg0;
- (long long)textAlignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setMaxHeight:(int)arg0;
- (void)setAnimationDuration:(double)arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)delegate;
- (id)font;
- (id)markedTextRange;
- (BOOL)becomeFirstResponder;
- (BOOL)textView:(id)arg0 shouldInteractWithTextAttachment:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (BOOL)hasText;
- (id)initWithCoder:(id)arg0;
- (void)setPlaceholder:(id)arg0;
- (id)text;
- (void)setFont:(id)arg0;
- (id)backgroundColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)isEditable;
- (void)setTextAlignment:(long long)arg0;
- (int)maxHeight;
- (void)setTextColor:(id)arg0;
- (void)setMaximumNumberOfLines:(long long)arg0;
- (id)placeholder;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)textColor;
- (int)minHeight;
- (void)setLineFragmentPadding:(double)arg0;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg0;
- (void)setEditable:(BOOL)arg0;
- (id)textDraggableView:(id)arg0 itemsForDrag:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg0;
- (BOOL)textViewShouldBeginEditing:(id)arg0;
- (BOOL)textViewShouldEndEditing:(id)arg0;
- (void)textViewDidEndEditing:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (void)textViewDidChangeSelection:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 textContainer:(id)arg1;
- (BOOL)isScrollable;
- (void)setIsScrollable:(BOOL)arg0;

@end
