//
//     Generated by private class-dump
//

@class UIStackView;

@interface IESECTagsContainerView : UIView {
    UIStackView *_stackView;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double tagSpacing;

- (void)setupWithTagViews:(id)arg0;
- (id)initWithTagViews:(id)arg0;
- (id)tagViews;
- (void)setTagSpacing:(double)arg0;
- (double)tagSpacing;
- (void)addTagView:(id)arg0;
- (void)removeTagView:(id)arg0;
- (void)removeAllTagViews;
- (void)insertTagView:(id)arg0 atIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)stackView;
- (void)setStackView:(id)arg0;

@end