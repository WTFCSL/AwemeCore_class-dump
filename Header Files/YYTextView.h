//
//     Generated by private class-dump
//

@class NSDictionary, UITextPosition, YYTextContainer, NSMutableArray, NSString, NSTimer, NSAttributedString, YYTextDebugOption, NSArray, YYTextRange, UITextInputPasswordRules, YYTextSelectionView, UIView, YYTextHighlight, YYTextLayout, NSMutableAttributedString, YYTextContainerView, UIImageView, UIFont, UIColor, YYTextMagnifier, NSDataDetector;
@protocol YYTextParser, UITextInputDelegate, UITextInputTokenizer, YYTextLinePositionModifier, YYTextViewDelegate;

@interface YYTextView : UIScrollView <UIScrollViewDelegate, UIAlertViewDelegate, YYTextDebugTarget, YYTextKeyboardObserver, UITextInput> {
    YYTextRange *_selectedTextRange;
    YYTextRange *_markedTextRange;
    id<YYTextViewDelegate> _outerDelegate;
    UIImageView *_placeHolderView;
    NSMutableAttributedString *_innerText;
    NSMutableAttributedString *_delectedText;
    YYTextContainer *_innerContainer;
    YYTextLayout *_innerLayout;
    YYTextContainerView *_containerView;
    YYTextSelectionView *_selectionView;
    YYTextMagnifier *_magnifierCaret;
    YYTextMagnifier *_magnifierRanged;
    NSMutableAttributedString *_typingAttributesHolder;
    NSDataDetector *_dataDetector;
    double _magnifierRangedOffset;
    struct _NSRange { unsigned long long location; unsigned long long length; } _highlightRange;
    YYTextHighlight *_highlight;
    YYTextLayout *_highlightLayout;
    YYTextRange *_trackingRange;
    BOOL _insetModifiedByKeyboard;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _originalContentInset;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _originalScrollIndicatorInsets;
    NSTimer *_longPressTimer;
    NSTimer *_autoScrollTimer;
    double _autoScrollOffset;
    long long _autoScrollAcceleration;
    NSTimer *_selectionDotFixTimer;
    struct CGPoint { double x; double y; } _previousOriginInWindow;
    struct CGPoint { double x; double y; } _touchBeganPoint;
    struct CGPoint { double x; double y; } _trackingPoint;
    double _touchBeganTime;
    double _trackingTime;
    NSMutableArray *_undoStack;
    NSMutableArray *_redoStack;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastTypeRange;
    struct { unsigned char trackingGrabber : 2; unsigned char trackingCaret : 1; unsigned char trackingPreSelect : 1; unsigned char trackingTouch : 1; unsigned char swallowTouch : 1; unsigned char touchMoved : 3; unsigned char selectedWithoutEdit : 1; unsigned char deleteConfirm : 1; unsigned char ignoreFirstResponder : 1; unsigned char ignoreTouchBegan : 1; unsigned char showingMagnifierCaret : 1; unsigned char showingMagnifierRanged : 1; unsigned char showingMenu : 1; unsigned char showingHighlight : 1; unsigned char typingAttributesOnce : 1; unsigned char clearsOnInsertionOnce : 1; unsigned char autoScrollTicked : 1; unsigned char firstShowDot : 1; unsigned char needUpdate : 1; unsigned char placeholderNeedUpdate : 1; unsigned char insideUndoBlock : 1; unsigned char firstResponderBeforeUndoAlert : 1; } _state;
    BOOL _enablesReturnKeyAutomatically;
    BOOL _secureTextEntry;
    BOOL _verticalForm;
    BOOL _clearsOnInsertion;
    BOOL _selectable;
    BOOL _highlightable;
    BOOL _editable;
    BOOL _allowsPasteImage;
    BOOL _allowsPasteAttributedString;
    BOOL _allowsCopyAttributedString;
    BOOL _allowsUndoAndRedo;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _spellCheckingType;
    long long _keyboardType;
    long long _keyboardAppearance;
    long long _returnKeyType;
    NSDictionary *_markedTextStyle;
    id<UITextInputDelegate> _inputDelegate;
    id<UITextInputTokenizer> _tokenizer;
    long long _selectionAffinity;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    long long _textVerticalAlignment;
    unsigned long long _dataDetectorTypes;
    NSDictionary *_linkTextAttributes;
    NSDictionary *_highlightTextAttributes;
    NSDictionary *_typingAttributes;
    NSAttributedString *_attributedText;
    id<YYTextParser> _textParser;
    NSString *_placeholderText;
    UIFont *_placeholderFont;
    UIColor *_placeholderTextColor;
    NSAttributedString *_placeholderAttributedText;
    NSArray *_exclusionPaths;
    id<YYTextLinePositionModifier> _linePositionModifier;
    unsigned long long _maximumUndoLevel;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    double _extraAccessoryViewHeight;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRange;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textContainerInset;
}

@property (weak, nonatomic) id<YYTextViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long textVerticalAlignment;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (copy, nonatomic) NSDictionary *linkTextAttributes;
@property (copy, nonatomic) NSDictionary *highlightTextAttributes;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) id<YYTextParser> textParser;
@property (readonly, nonatomic) YYTextLayout *textLayout;
@property (copy, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) UIFont *placeholderFont;
@property (retain, nonatomic) UIColor *placeholderTextColor;
@property (copy, nonatomic) NSAttributedString *placeholderAttributedText;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textContainerInset;
@property (copy, nonatomic) NSArray *exclusionPaths;
@property (nonatomic, getter=isVerticalForm) BOOL verticalForm;
@property (copy, nonatomic) id<YYTextLinePositionModifier> linePositionModifier;
@property (copy, nonatomic) YYTextDebugOption *debugOption;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) BOOL clearsOnInsertion;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (nonatomic, getter=isHighlightable) BOOL highlightable;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) BOOL allowsPasteImage;
@property (nonatomic) BOOL allowsPasteAttributedString;
@property (nonatomic) BOOL allowsCopyAttributedString;
@property (nonatomic) BOOL allowsUndoAndRedo;
@property (nonatomic) unsigned long long maximumUndoLevel;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (nonatomic) double extraAccessoryViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) YYTextRange *selectedTextRange;
@property (readonly, nonatomic) YYTextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;

+ (void)_aweLazyRegisterLoad_AWEUIKitAdditions;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg0;

- (void)traitCollectionDidChange:(id)arg0;
- (void)setTextVerticalAlignment:(long long)arg0;
- (BOOL)_canUndo;
- (BOOL)_canRedo;
- (void)_trackDidLongPress;
- (void)_endLongPressTimer;
- (struct CGPoint { double x0; double x1; })_convertPointToLayout:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectFromLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)_removeHighlightAnimated:(BOOL)arg0;
- (void)_hideHighlightAnimated:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })_convertPointFromLayout:(struct CGPoint { double x0; double x1; })arg0;
- (id)linePositionModifier;
- (id)_getHighlightAtPoint:(struct CGPoint { double x0; double x1; })arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)arg1;
- (void)_startLongPressTimer;
- (void)_showHighlightAnimated:(BOOL)arg0;
- (void)setLinePositionModifier:(id)arg0;
- (void)setDebugOption:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectToLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextParser:(id)arg0;
- (long long)textVerticalAlignment;
- (id)textParser;
- (id)debugOption;
- (BOOL)fontIsBold_:(id)arg0;
- (id)boldFont_:(id)arg0;
- (id)normalFont_:(id)arg0;
- (void)setFontName_:(id)arg0;
- (void)setFontSize_:(double)arg0;
- (void)setFontIsBold_:(BOOL)arg0;
- (void)setInsetTop_:(double)arg0;
- (void)setInsetBottom_:(double)arg0;
- (void)setInsetLeft_:(double)arg0;
- (void)setInsetRight_:(double)arg0;
- (void)setDebugEnabled_:(BOOL)arg0;
- (void)keyboardChangedWithTransition:(struct { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; double x4; long long x5; unsigned long long x6; })arg0;
- (void)setVerticalForm:(BOOL)arg0;
- (BOOL)isVerticalForm;
- (void)_updateSelectionView;
- (BOOL)_detectText:(id)arg0;
- (struct CGSize { double x0; double x1; })_getVisibleSize;
- (void)_startSelectionDotFixTimer;
- (void)_endSelectionDotFixTimer;
- (id)_correctedTextPosition:(id)arg0;
- (id)_getClosestTokenRangeAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)_showMagnifierCaret;
- (void)_scrollRangeToVisible:(id)arg0;
- (void)_restoreInsetsAnimated:(BOOL)arg0;
- (void)_updateMagnifier;
- (void)_showMenu;
- (void)_hideMenu;
- (void)_endTouchTracking;
- (void)_showMagnifierRanged;
- (void)_updateTextRangeByTrackingPreSelect;
- (void)_trackDidTickAutoScroll;
- (void)_updateTextRangeByTrackingGrabber;
- (void)_updateTextRangeByTrackingCaret;
- (void)_endAutoScrollTimer;
- (void)_hideMagnifier;
- (void)_fixSelectionDot;
- (id)_correctedTextRange:(id)arg0;
- (BOOL)_isTextPositionValid:(id)arg0;
- (BOOL)_isTextRangeValid:(id)arg0;
- (void)_updateAttributesHolder;
- (void)_setTypingAttributes:(id)arg0;
- (BOOL)_shouldDetectText;
- (void)_saveToRedoStack;
- (void)_saveToUndoStack;
- (id)_localizedUndoStrings;
- (id)_getRootViewController;
- (void)_undo;
- (void)_restoreFirstResponderAfterUndoAlert;
- (void)_redo;
- (void)_updateInnerContainerSize;
- (void)_pasteboardChanged;
- (void)_initTextView;
- (void)_resetUndoAndRedoStack;
- (void)_commitUpdate;
- (void)_setDataDetectorTypes:(unsigned long long)arg0;
- (void)_setLinkTextAttributes:(id)arg0;
- (void)_setHighlightTextAttributes:(id)arg0;
- (void)_setTextParser:(id)arg0;
- (BOOL)_parseText;
- (void)_updateOuterProperties;
- (void)_setTextContainerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)_setExclusionPaths:(id)arg0;
- (void)_setVerticalForm:(BOOL)arg0;
- (void)_keyboardChanged;
- (void)_setLinePositionModifier:(id)arg0;
- (void)_commitPlaceholderUpdate;
- (void)setHighlightTextAttributes:(id)arg0;
- (BOOL)isHighlightable;
- (double)_getMagnifierRangedOffset;
- (unsigned int)_getMoveDirection;
- (double)_getAutoscrollOffset;
- (void)_showUndoRedoAlert;
- (void)_scrollSelectedRangeToVisible;
- (BOOL)_isPasteboardContainsValidValue;
- (void)_copySelectedTextToPasteboard;
- (void)_resetRedoStack;
- (id)_getClosestTokenRangeAtPosition:(id)arg0;
- (void)_replaceRange:(id)arg0 withText:(id)arg1 notifyToDelegate:(BOOL)arg2;
- (void)setHighlightable:(BOOL)arg0;
- (void)setPlaceholderAttributedText:(id)arg0;
- (id)highlightTextAttributes;
- (id)placeholderAttributedText;
- (BOOL)allowsPasteImage;
- (void)setAllowsPasteImage:(BOOL)arg0;
- (BOOL)allowsPasteAttributedString;
- (void)setAllowsPasteAttributedString:(BOOL)arg0;
- (BOOL)allowsCopyAttributedString;
- (void)setAllowsCopyAttributedString:(BOOL)arg0;
- (BOOL)allowsUndoAndRedo;
- (void)setAllowsUndoAndRedo:(BOOL)arg0;
- (unsigned long long)maximumUndoLevel;
- (void)setMaximumUndoLevel:(unsigned long long)arg0;
- (double)extraAccessoryViewHeight;
- (void)setExtraAccessoryViewHeight:(double)arg0;
- (void)setPlaceholderFontName_:(id)arg0;
- (void)setPlaceholderFontSize_:(double)arg0;
- (void)setPlaceholderFontIsBold_:(BOOL)arg0;
- (void)yytextView_awe_uikit_traitCollectionDidChange:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)arg0;
- (unsigned long long)dataDetectorTypes;
- (void)setDataDetectorTypes:(unsigned long long)arg0;
- (long long)returnKeyType;
- (id)textStylingAtPosition:(id)arg0 inDirection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInset;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)replaceRange:(id)arg0 withText:(id)arg1;
- (void)setSpellCheckingType:(long long)arg0;
- (void)setPlaceholderTextColor:(id)arg0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })arg0 withinRange:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg0;
- (void)setAutocorrectionType:(long long)arg0;
- (id)positionFromPosition:(id)arg0 inDirection:(long long)arg1 offset:(long long)arg2;
- (BOOL)enablesReturnKeyAutomatically;
- (BOOL)scrollViewShouldScrollToTop:(id)arg0;
- (void)setReturnKeyType:(long long)arg0;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg0;
- (void)setPlaceholderFont:(id)arg0;
- (void)setAutocapitalizationType:(long long)arg0;
- (id)attributedText;
- (void)setSecureTextEntry:(BOOL)arg0;
- (id)linkTextAttributes;
- (void)setKeyboardType:(long long)arg0;
- (id)inputAccessoryView;
- (id)selectedTextRange;
- (void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(double)arg2;
- (id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1;
- (void)setTypingAttributes:(id)arg0;
- (long long)offsetFromPosition:(id)arg0 toPosition:(id)arg1;
- (long long)keyboardType;
- (id)selectionRectsForRange:(id)arg0;
- (void)select:(id)arg0;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)arg0;
- (BOOL)resignFirstResponder;
- (void)setBaseWritingDirection:(long long)arg0 forRange:(id)arg1;
- (id)placeholderFont;
- (id)viewForZoomingInScrollView:(id)arg0;
- (id)typingAttributes;
- (id)positionWithinRange:(id)arg0 farthestInDirection:(long long)arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)copy:(id)arg0;
- (void)unmarkText;
- (id)characterRangeByExtendingPosition:(id)arg0 inDirection:(long long)arg1;
- (void).cxx_destruct;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)beginningOfDocument;
- (void)setAttributedText:(id)arg0;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setText:(id)arg0;
- (long long)comparePosition:(id)arg0 toPosition:(id)arg1;
- (void)deleteBackward;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setInputAccessoryView:(id)arg0;
- (void)paste:(id)arg0;
- (long long)autocorrectionType;
- (long long)autocapitalizationType;
- (void)_setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)_update;
- (long long)spellCheckingType;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (BOOL)canResignFirstResponder;
- (id)positionFromPosition:(id)arg0 offset:(long long)arg1;
- (id)textInRange:(id)arg0;
- (void)selectAll:(id)arg0;
- (void)_updateIfNeeded;
- (void)tintColorDidChange;
- (void)cut:(id)arg0;
- (void)scrollViewDidScrollToTop:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (long long)selectionAffinity;
- (long long)textAlignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSelectable:(BOOL)arg0;
- (id)tokenizer;
- (long long)keyboardAppearance;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)_defaultFont;
- (id)markedTextStyle;
- (id)endOfDocument;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (long long)baseWritingDirectionForPosition:(id)arg0 inDirection:(long long)arg1;
- (void)setMarkedTextStyle:(id)arg0;
- (id)delegate;
- (id)font;
- (void)_updateLayout;
- (id)markedTextRange;
- (void)_setTextColor:(id)arg0;
- (void)_define:(id)arg0;
- (void)setInputView:(id)arg0;
- (BOOL)becomeFirstResponder;
- (BOOL)hasText;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)scrollViewDidZoom:(id)arg0;
- (void)setSelectedTextRange:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)_defaultTintColor;
- (id)text;
- (id)inputView;
- (void)setFont:(id)arg0;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)canBecomeFirstResponder;
- (void)setInputDelegate:(id)arg0;
- (BOOL)isEditable;
- (BOOL)isSelectable;
- (void)setTextAlignment:(long long)arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)setTextColor:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)inputDelegate;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)setSelectionAffinity:(long long)arg0;
- (void)insertText:(id)arg0;
- (id)placeholderTextColor;
- (void)_setFont:(id)arg0;
- (BOOL)isSecureTextEntry;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)textColor;
- (void)alertView:(id)arg0 clickedButtonAtIndex:(long long)arg1;
- (void)reloadInputViews;
- (void)setEditable:(BOOL)arg0;
- (id)positionWithinRange:(id)arg0 atCharacterOffset:(long long)arg1;
- (long long)characterOffsetOfPosition:(id)arg0 withinRange:(id)arg1;
- (void)motionEnded:(long long)arg0 withEvent:(id)arg1;
- (void)setLinkTextAttributes:(id)arg0;
- (void)setClearsOnInsertion:(BOOL)arg0;
- (BOOL)clearsOnInsertion;
- (void)_setText:(id)arg0;
- (void)_setTextAlignment:(long long)arg0;
- (void)_setAttributedText:(id)arg0;
- (id)textLayout;
- (void)setMultipleTouchEnabled:(BOOL)arg0;
- (id)exclusionPaths;
- (void)setExclusionPaths:(id)arg0;
- (void)setPlaceholderText:(id)arg0;
- (id)placeholderText;
- (void)_updatePlaceholder;
- (id)_defaultPlaceholderColor;
- (void)_updatePlaceholderIfNeeded;
- (void)_startAutoScrollTimer;

@end
