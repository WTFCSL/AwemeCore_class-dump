//
//     Generated by private class-dump
//

@class AWEFansListFansStyleSegmentView, AWEFansContainerAccessibilityView, NSString, AWEBinding, AWEFansListViewController, NSNumber, UIViewController;
@protocol AWEIMFansAndRecommend;

@interface AWEFansContainerViewController : UIViewController <AWEFansListViewControllerProtocol> {
    UIViewController *_viewController;
    AWEFansListFansStyleSegmentView *_fansStyleSegmentView;
    long long _newFansCount;
    AWEBinding *_fansListViewControllerBinding;
    AWEFansListViewController *_fansListViewController;
    AWEFansContainerAccessibilityView *_accessibilityView;
    NSNumber *_followerCnt;
    AWEBinding *_fansViewControllerBinding;
    UIViewController<AWEIMFansAndRecommend> *_imFansViewController;
    long long _waitSelectFansStyle;
    NSString *_enterFrom;
    struct CGPoint { double x; double y; } _fansListViewControllerContentOffset;
    struct CGPoint { double x; double y; } _fansViewControllerContentOffset;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEFansListFansStyleSegmentView *fansStyleSegmentView;
@property (nonatomic) long long newFansCount;
@property (retain, nonatomic) AWEBinding *fansListViewControllerBinding;
@property (nonatomic) struct CGPoint { double x; double y; } fansListViewControllerContentOffset;
@property (retain, nonatomic) AWEFansListViewController *fansListViewController;
@property (retain, nonatomic) AWEFansContainerAccessibilityView *accessibilityView;
@property (retain, nonatomic) NSNumber *followerCnt;
@property (retain, nonatomic) AWEBinding *fansViewControllerBinding;
@property (nonatomic) struct CGPoint { double x; double y; } fansViewControllerContentOffset;
@property (retain, nonatomic) UIViewController<AWEIMFansAndRecommend> *imFansViewController;
@property (nonatomic) long long waitSelectFansStyle;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ didBlockUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awe_visibleSectionControllers;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (long long)newFansCount;
- (id)fansListViewController;
- (void)setWaitSelectFansStyle:(long long)arg0;
- (long long)waitSelectFansStyle;
- (id)imFansViewController;
- (id)fansStyleSegmentView;
- (void)setNewFansCount:(long long)arg0;
- (void)setFollowerCnt:(id)arg0;
- (void)layoutFansViewControllerTableHeaderView;
- (void)setFansViewControllerContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })fansListViewControllerContentOffset;
- (struct CGPoint { double x0; double x1; })fansViewControllerContentOffset;
- (void)adjustScrollViewContentOffset:(struct CGPoint { double x0; double x1; })arg0 currentContentOffset:(struct CGPoint { double x0; double x1; })arg1 scrollView:(id)arg2;
- (void)setFansListViewControllerBinding:(id)arg0;
- (id)fansListViewControllerBinding;
- (void)setFansListViewControllerContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (id)accessibilityView;
- (void)setFansViewControllerBinding:(id)arg0;
- (id)fansViewControllerBinding;
- (BOOL)fansStyleSectionLoadSuccess;
- (void)setFansListViewController:(id)arg0;
- (void)setDidBlockUser:(id /* block */)arg0;
- (id /* block */)didBlockUser;
- (void)didSelectedIMFansViewController;
- (void)didSelectedFansListViewController;
- (id)tabNameFromFansStyle:(long long)arg0;
- (void)setFansStyleSegmentView:(id)arg0;
- (void)setAccessibilityView:(id)arg0;
- (id)followerCnt;
- (void)setImFansViewController:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)setViewController:(id)arg0;
- (void)viewDidLayoutSubviews;
- (id)viewController;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)viewDidLoad;

@end