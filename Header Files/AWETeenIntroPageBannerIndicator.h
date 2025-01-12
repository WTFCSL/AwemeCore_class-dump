//
//     Generated by private class-dump
//

@class UIColor, NSMutableArray;

@interface AWETeenIntroPageBannerIndicator : UIView {
    BOOL _changing;
    long long _numberOfPages;
    long long _currentPage;
    NSMutableArray *_dotViews;
    UIColor *_currentPageColor;
    UIColor *_dotColor;
}

@property (retain, nonatomic) NSMutableArray *dotViews;
@property (nonatomic) BOOL changing;
@property (retain, nonatomic) UIColor *currentPageColor;
@property (retain, nonatomic) UIColor *dotColor;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;

- (id)currentPageColor;
- (BOOL)changing;
- (void)setChanging:(BOOL)arg0;
- (void)setCurrentPageColor:(id)arg0;
- (void).cxx_destruct;
- (void)setCurrentPage:(long long)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)numberOfPages;
- (long long)currentPage;
- (void)setNumberOfPages:(long long)arg0;
- (id)dotViews;
- (void)setDotViews:(id)arg0;
- (void)setDotColor:(id)arg0;
- (id)dotColor;

@end
