//
//     Generated by private class-dump
//

@class NSString, LOTAnimationView, UIScrollView, UILabel, UITableView;

@interface AWESwipeUpGuideFullScreenViewController : UIViewController <UIScrollViewDelegate, AWESwipeUpGuideViewControllerProtocol> {
    BOOL _isPresentCompleted;
    BOOL _hasFinishedSwipeUp;
    BOOL _isDissmissByMaxHight;
    BOOL _isSlideToNext;
    UILabel *_mainLabel;
    UIScrollView *_scrollView;
    UITableView *_tableView;
    LOTAnimationView *_imageView;
    double _lastContentOffset;
    UILabel *_secondaryLabel;
    double _maxHightInOneGlide;
    struct CGPoint { double x; double y; } _originOffSet;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGPoint { double x; double y; } originOffSet;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) LOTAnimationView *imageView;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) BOOL isPresentCompleted;
@property (nonatomic) BOOL hasFinishedSwipeUp;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (nonatomic) double maxHightInOneGlide;
@property (nonatomic) BOOL isDissmissByMaxHight;
@property (nonatomic) BOOL isSlideToNext;
@property (retain, nonatomic) UILabel *mainLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enableGuideEnhance;

- (void)_appDidBecomeActive;
- (BOOL)isRecommendedFeed;
- (void)setOriginOffSet:(struct CGPoint { double x0; double x1; })arg0;
- (void)setMaxHightInOneGlide:(double)arg0;
- (void)setIsDissmissByMaxHight:(BOOL)arg0;
- (void)setIsPresentCompleted:(BOOL)arg0;
- (void)setIsSlideToNext:(BOOL)arg0;
- (void)animateSwipeUpInfoLabelIfNeeded;
- (struct CGPoint { double x0; double x1; })originOffSet;
- (double)maxHightInOneGlide;
- (BOOL)isDissmissByMaxHight;
- (void)dismissWithGestureByScrollView:(id)arg0;
- (BOOL)isSlideToNext;
- (BOOL)isPresentCompleted;
- (void)showSwipeUpGuideOnTableView:(id)arg0;
- (void)dismissSwipeUpGuideManager;
- (BOOL)hasFinishedSwipeUp;
- (void)setHasFinishedSwipeUp:(BOOL)arg0;
- (void)setScrollView:(id)arg0;
- (void)dismiss;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (id)imageView;
- (id)secondaryLabel;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setImageView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)registerNotifications;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (id)scrollView;
- (double)lastContentOffset;
- (void)setLastContentOffset:(double)arg0;
- (void)setupUI;
- (void)setSecondaryLabel:(id)arg0;
- (id)mainLabel;
- (void)setMainLabel:(id)arg0;

@end
