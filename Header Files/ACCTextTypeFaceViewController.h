//
//     Generated by private class-dump
//

@class NSArray, AWEStoryColorChooseView, AWEStoryColor, UIView;

@interface ACCTextTypeFaceViewController : UIView {
    BOOL _hasApplyTextTemplate;
    UIView *_contentView;
    id /* block */ _didSelectedStyleBlock;
    id /* block */ _didSelectedAlignmentBlock;
    id /* block */ _didSelectedColorBlock;
    AWEStoryColorChooseView *_colorChooseView;
    NSArray *_categories;
    NSArray *_viweList;
}

@property (retain, nonatomic) AWEStoryColorChooseView *colorChooseView;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *viweList;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ didSelectedStyleBlock;
@property (copy, nonatomic) id /* block */ didSelectedAlignmentBlock;
@property (copy, nonatomic) id /* block */ didSelectedColorBlock;
@property (readonly, nonatomic) AWEStoryColor *selectedColor;
@property (nonatomic) BOOL hasApplyTextTemplate;

- (id /* block */)didSelectedColorBlock;
- (void)selectWithColor:(id)arg0;
- (void)setDidSelectedColorBlock:(id /* block */)arg0;
- (id)colorChooseView;
- (void)setColorChooseView:(id)arg0;
- (void)setDidSelectedStyleBlock:(id /* block */)arg0;
- (void)setDidSelectedAlignmentBlock:(id /* block */)arg0;
- (void)clearPanel;
- (void)updateWithColor:(id)arg0 textStyle:(unsigned long long)arg1 textAlignment:(long long)arg2;
- (void)setHasApplyTextTemplate:(BOOL)arg0;
- (void)resetContentViewWithHeight:(double)arg0;
- (id /* block */)didSelectedStyleBlock;
- (id /* block */)didSelectedAlignmentBlock;
- (BOOL)hasApplyTextTemplate;
- (void)setViweList:(id)arg0;
- (id)viweList;
- (id)categories;
- (void).cxx_destruct;
- (void)setCategories:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (id)selectedColor;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (void)prepareData;

@end
