//
//     Generated by private class-dump
//

@class UILabel, AWEHotSearchProgressView;
@protocol AWEHotSearchProgressViewDelegate;

@interface AWEHotSearchProgressViewWithNumber : UIView {
    BOOL _pageNumberIsShowing;
    BOOL _scrollToChangeHotSpot;
    id<AWEHotSearchProgressViewDelegate> _outerDelegate;
    UILabel *_pageNumberLabel;
    AWEHotSearchProgressView *_progressView;
}

@property (retain, nonatomic) UILabel *pageNumberLabel;
@property (retain, nonatomic) AWEHotSearchProgressView *progressView;
@property (nonatomic) BOOL pageNumberIsShowing;
@property (nonatomic) BOOL scrollToChangeHotSpot;
@property (weak, nonatomic) id<AWEHotSearchProgressViewDelegate> outerDelegate;

- (void)configureUI;
- (void)setOuterDelegate:(id)arg0;
- (void)updateUIWithCurrentIndex:(long long)arg0 totalPageCount:(long long)arg1 isScroll:(BOOL)arg2;
- (void)onScrollViewWillBeginDragging:(double)arg0;
- (void)onScrollWillChangeVideoWithIndex:(long long)arg0 totalPageCount:(long long)arg1;
- (void)onScrollDidEnd;
- (void)onChangeToNewHotSpotModelIsScrolled:(BOOL)arg0;
- (id)pageNumberLabel;
- (void)updatePageNumberWithCurrentIndex:(long long)arg0 totalPageCount:(long long)arg1 isScroll:(BOOL)arg2;
- (void)setScrollToChangeHotSpot:(BOOL)arg0;
- (BOOL)scrollToChangeHotSpot;
- (void)pageNumberDisappear;
- (void)pageNumberAppear;
- (void)performPageNumberAnimation;
- (BOOL)pageNumberIsShowing;
- (void)setPageNumberIsShowing:(BOOL)arg0;
- (id)outerDelegate;
- (void)setPageNumberLabel:(id)arg0;
- (void).cxx_destruct;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)setHidden:(BOOL)arg0;

@end