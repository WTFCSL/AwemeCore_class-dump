//
//     Generated by private class-dump
//

@class UIColor, NSMutableArray;

@interface AWEDiscoverPageControl : UIView {
    unsigned long long _currentPage;
    unsigned long long _numberOfPages;
    UIColor *_selectedColor;
    UIColor *_unSelectedColor;
    NSMutableArray *_dotArray;
}

@property (retain, nonatomic) NSMutableArray *dotArray;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) unsigned long long numberOfPages;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *unSelectedColor;

- (id)unSelectedColor;
- (void)setUnSelectedColor:(id)arg0;
- (id)dotArray;
- (void)setDotArray:(id)arg0;
- (void).cxx_destruct;
- (void)setCurrentPage:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)selectedColor;
- (unsigned long long)numberOfPages;
- (void)setSelectedColor:(id)arg0;
- (unsigned long long)currentPage;
- (void)layoutSubviews;
- (void)setNumberOfPages:(unsigned long long)arg0;
- (void)_setupUI;

@end
