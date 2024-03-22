//
//     Generated by private class-dump
//

@interface ACCQuickFlashStickerInputTextView : UITextView {
    id /* block */ _heightDidChangedBlock;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _defaultEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } defaultEdgeInsets;
@property (copy, nonatomic) id /* block */ heightDidChangedBlock;

- (void)setDefaultEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultEdgeInsets;
- (unsigned long long)numberOfLinesWithText:(id)arg0;
- (id /* block */)heightDidChangedBlock;
- (void)updateTextColorWithStr:(id)arg0 placeholderColorStr:(id)arg1;
- (void)updateDisplayTextAlignment;
- (void)setHeightDidChangedBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;

@end
