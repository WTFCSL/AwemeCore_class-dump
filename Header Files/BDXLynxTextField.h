//
//     Generated by private class-dump
//

@interface BDXLynxTextField : UITextField {
    BOOL _waitingDictationRecognition;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly) BOOL waitingDictationRecognition;

+ (void)lynxLazyLoad;
+ (void)swizzleInstanceMethod:(SEL)arg0 with:(SEL)arg1;

- (void)scrollTextFieldToVisibleIfNecessary;
- (void)BDXLynxInput_scrollTextFieldToVisibleIfNecessary;
- (BOOL)waitingDictationRecognition;
- (void)setPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)insertDictationResultPlaceholder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (long long)editingInteractionConfiguration;

@end