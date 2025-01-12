//
//     Generated by private class-dump
//

@class UIStackView;

@interface IESECLStackContainerView : UIView {
    BOOL _alignRight;
    long long _alignment;
    UIStackView *_stackView;
    id /* block */ _onLayoutBlock;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double spacing;
@property (nonatomic) long long alignment;
@property (nonatomic) long long distribution;
@property (nonatomic) BOOL alignRight;
@property (copy, nonatomic) id /* block */ onLayoutBlock;

- (void)removeAllArrangedSubviews;
- (id)initWithSubViews:(id)arg0;
- (void)setupWithSubViews:(id)arg0;
- (id)subViews;
- (id /* block */)onLayoutBlock;
- (void)setOnLayoutBlock:(id /* block */)arg0;
- (BOOL)alignRight;
- (void)updateStackConstraints;
- (void)setAlignRight:(BOOL)arg0;
- (double)spacing;
- (long long)distribution;
- (void)setDistribution:(long long)arg0;
- (void)setSpacing:(double)arg0;
- (void).cxx_destruct;
- (void)setAlignment:(long long)arg0;
- (long long)alignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)stackView;
- (void)setStackView:(id)arg0;
- (void)addArrangedSubview:(id)arg0;
- (void)insertArrangedSubview:(id)arg0 atIndex:(unsigned long long)arg1;
- (void)removeArrangedSubview:(id)arg0;

@end
