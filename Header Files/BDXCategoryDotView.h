//
//     Generated by private class-dump
//

@class NSArray, UIColor;

@interface BDXCategoryDotView : BDXCategoryTitleView {
    unsigned long long _relativePosition;
    NSArray *_dotStates;
    double _dotCornerRadius;
    UIColor *_dotColor;
    struct CGSize { double width; double height; } _dotSize;
    struct CGPoint { double x; double y; } _dotOffset;
}

@property (nonatomic) unsigned long long relativePosition;
@property (retain, nonatomic) NSArray *dotStates;
@property (nonatomic) struct CGSize { double width; double height; } dotSize;
@property (nonatomic) double dotCornerRadius;
@property (retain, nonatomic) UIColor *dotColor;
@property (nonatomic) struct CGPoint { double x; double y; } dotOffset;

- (void)refreshDataSource;
- (void)setDotSize:(struct CGSize { double x0; double x1; })arg0;
- (void)initializeData;
- (void)refreshCellModel:(id)arg0 index:(long long)arg1;
- (Class)preferredCellClass;
- (double)dotCornerRadius;
- (struct CGPoint { double x0; double x1; })dotOffset;
- (void)setDotCornerRadius:(double)arg0;
- (void)setDotOffset:(struct CGPoint { double x0; double x1; })arg0;
- (id)dotStates;
- (void)setDotStates:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)relativePosition;
- (void)setDotColor:(id)arg0;
- (id)dotColor;
- (void)setRelativePosition:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })dotSize;

@end