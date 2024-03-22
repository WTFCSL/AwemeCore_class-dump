//
//     Generated by private class-dump
//

@protocol AWEProfileCollectionViewWaterfallLayoutProtocol <NSObject>

@property (nonatomic) long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } headerInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } footerInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionInset;

- (void)setMinimumColumnSpacing:(double)arg0;
- (double)minimumColumnSpacing;
- (long long)columnCount;
- (double)headerHeight;
- (void)setColumnCount:(long long)arg0;
- (void)setMinimumInteritemSpacing:(double)arg0;
- (void)setSectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;
- (void)setHeaderHeight:(double)arg0;
- (void)setFooterHeight:(double)arg0;
- (double)footerHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })headerInset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })footerInset;
- (void)setHeaderInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setFooterInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;

@end