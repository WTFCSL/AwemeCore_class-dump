//
//     Generated by private class-dump
//

@class UIStackView, UIView, NSString, IESGCPDetailContentNode, IESGCPSegmentSlideBottomContainer, IESGCPSegmentSlideScrollView, IESGCPDetailThemeConfig, MASConstraint, IESGCPInteractScrollBinderImpl, IESGCPSegmentSliderNodeViewObserver;
@protocol IESGCPAudienceDetailActions, IESGCPGameDetailSegmentScrollActions, IESGCPSegmentSlideViewDelegate;

@interface IESGCPSegmentSlideView : UIView <UIScrollViewDelegate, IESGCPDIContextSubscriber, IESGCPInteractScrollParentScrollable, IESGCPInteractScrollBinderListener, IESGCPSegmentSliderNodeViewObserverService> {
    double _topLayoutLength;
    IESGCPSegmentSlideScrollView *_scrollView;
    id<IESGCPSegmentSlideViewDelegate> _delegate;
    long long _currentIndex;
    id<IESGCPAudienceDetailActions> _detailActions;
    id<IESGCPGameDetailSegmentScrollActions> _segmentScrollActions;
    UIStackView *_scrollContentView;
    UIView *_navView;
    MASConstraint *_tabNavHeightConstraint;
    IESGCPSegmentSlideBottomContainer *_bottomContainer;
    double _headerTopInset;
    IESGCPDetailContentNode *_node;
    IESGCPDetailContentNode *_tabNode;
    IESGCPDetailThemeConfig *_themeConfig;
    IESGCPInteractScrollBinderImpl *_scrollBinder;
    IESGCPSegmentSliderNodeViewObserver *_nodeViewsObserver;
}

@property (retain, nonatomic) IESGCPSegmentSlideScrollView *scrollView;
@property (retain, nonatomic) id<IESGCPAudienceDetailActions> detailActions;
@property (retain, nonatomic) id<IESGCPGameDetailSegmentScrollActions> segmentScrollActions;
@property (retain, nonatomic) UIStackView *scrollContentView;
@property (retain, nonatomic) UIView *navView;
@property (retain, nonatomic) MASConstraint *tabNavHeightConstraint;
@property (retain, nonatomic) IESGCPSegmentSlideBottomContainer *bottomContainer;
@property (nonatomic) double headerTopInset;
@property (retain, nonatomic) IESGCPDetailContentNode *node;
@property (retain, nonatomic) IESGCPDetailContentNode *tabNode;
@property (retain, nonatomic) IESGCPDetailThemeConfig *themeConfig;
@property (retain, nonatomic) IESGCPInteractScrollBinderImpl *scrollBinder;
@property (retain, nonatomic) IESGCPSegmentSliderNodeViewObserver *nodeViewsObserver;
@property (nonatomic) double topLayoutLength;
@property (weak, nonatomic) id<IESGCPSegmentSlideViewDelegate> delegate;
@property (readonly, nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)themeConfig;
- (void)setThemeConfig:(id)arg0;
- (id)navView;
- (void)setNavView:(id)arg0;
- (void)setupBottomContainer;
- (id)tabNode;
- (void)setTabNode:(id)arg0;
- (void)didSetGameCPDIContext;
- (void)doOnContentOffsetChanged:(id /* block */)arg0;
- (void)reloadNode:(id)arg0 themeConfig:(id)arg1;
- (void)setTopLayoutLength:(double)arg0;
- (void)setScrollViewToStickyTopComplete:(id /* block */)arg0;
- (void)updateHeaderTopInset:(double)arg0;
- (void)updateStackViewSpacing:(double)arg0;
- (void)setScrollViewToStickyTopWithDuration:(double)arg0 complete:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 headerTopInset:(double)arg1;
- (void)scrollViewDidScroll:(id)arg0 isParent:(BOOL)arg1;
- (id)detailActions;
- (void)setDetailActions:(id)arg0;
- (void)registeToObserveSegmentSlideNodeView:(id)arg0 nodeViewType:(unsigned long long)arg1;
- (id)getItemFromNodeType:(unsigned long long)arg0;
- (void)binder:(id)arg0 onParentScrolling:(id)arg1;
- (void)binder:(id)arg0 onChildScrolling:(id)arg1;
- (double)criticalOffsetY;
- (double)topLayoutLength;
- (id)nodeViewsObserver;
- (id)scrollBinder;
- (double)headerStickyHeight;
- (void)setTabNavHeightConstraint:(id)arg0;
- (void)setupSegmentSlideScrollView;
- (void)setupSegmentSlideViews;
- (id)segmentScrollActions;
- (void)setSegmentScrollActions:(id)arg0;
- (id)tabNavHeightConstraint;
- (void)setScrollBinder:(id)arg0;
- (void)setNodeViewsObserver:(id)arg0;
- (id)node;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)scrollContentView;
- (void)setup;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)scrollView;
- (void)setNode:(id)arg0;
- (void)setScrollContentView:(id)arg0;
- (void)setHeaderTopInset:(double)arg0;
- (double)headerTopInset;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;

@end
