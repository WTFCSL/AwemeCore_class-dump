//
//     Generated by private class-dump
//

@class UIColor, NSMutableArray;

@interface IESLiveNativeAppCycleBannerPageIndicatorView : UIView {
    unsigned long long _numberOfPages;
    unsigned long long _currentPage;
    NSMutableArray *_pageViewArray;
    UIColor *_currentColor;
    UIColor *_pageColor;
}

@property (retain, nonatomic) NSMutableArray *pageViewArray;
@property (retain, nonatomic) UIColor *currentColor;
@property (retain, nonatomic) UIColor *pageColor;
@property (nonatomic) unsigned long long numberOfPages;
@property (nonatomic) unsigned long long currentPage;

- (id)pageViewArray;
- (id)buildIndicatorView;
- (void)setPageViewArray:(id)arg0;
- (double)preferredWidth;
- (void).cxx_destruct;
- (void)setCurrentPage:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)numberOfPages;
- (unsigned long long)currentPage;
- (void)setUp;
- (void)setNumberOfPages:(unsigned long long)arg0;
- (id)currentColor;
- (void)setCurrentColor:(id)arg0;
- (id)initWithNumbers:(unsigned long long)arg0;
- (id)pageColor;
- (void)setPageColor:(id)arg0;

@end
