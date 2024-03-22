//
//     Generated by private class-dump
//

@class AWEFlashMobFlashTitleConfig;

@interface ACCMordernQuickFlashStickerInputTextView : UITextView {
    id /* block */ _heightDidChangedBlock;
    id /* block */ _widthDidChangedBlock;
    AWEFlashMobFlashTitleConfig *_titleCellModel;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _defaultEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } defaultEdgeInsets;
@property (retain, nonatomic) AWEFlashMobFlashTitleConfig *titleCellModel;
@property (copy, nonatomic) id /* block */ heightDidChangedBlock;
@property (copy, nonatomic) id /* block */ widthDidChangedBlock;

- (void)setDefaultEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setTitleCellModel:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultEdgeInsets;
- (id)titleCellModel;
- (void)changeFonfForTextView:(id)arg0;
- (void)textWidthShoudChange:(id)arg0;
- (id /* block */)widthDidChangedBlock;
- (unsigned long long)numberOfLinesWithText:(id)arg0;
- (id /* block */)heightDidChangedBlock;
- (unsigned long long)numberOfLinesWithText:(id)arg0 fontSize:(double)arg1;
- (id)initWithTextCellModel:(id)arg0;
- (void)updateTextColorWithStr:(id)arg0 placeholderColorStr:(id)arg1;
- (void)updateDisplayTextAlignment;
- (void)setHeightDidChangedBlock:(id /* block */)arg0;
- (void)setWidthDidChangedBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;

@end