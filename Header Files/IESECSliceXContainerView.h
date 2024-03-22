//
//     Generated by private class-dump
//

@class IESECSliceXInnerTracker, IESECSliceXBaseView, NSString, IESECSliceXContainerInfo, UIView, IESECSliceXContainerLoadContext, IESECSliceXContainerUpdateContext;
@protocol IESECSliceXElementView;

@interface IESECSliceXContainerView : UIView <IESECSliceXFlexObserver> {
    IESECSliceXContainerLoadContext *_loadContext;
    IESECSliceXContainerUpdateContext *_updateContext;
    BOOL _isLoadingRootView;
    BOOL _shouldHitTestPassthroughRootView;
    IESECSliceXInnerTracker *_innerTacker;
    IESECSliceXContainerInfo *_info;
    UIView<IESECSliceXElementView> *_rootView;
    double _scaleFactor;
    IESECSliceXBaseView *_contentView;
    double _previousScaleFactor;
    struct CGSize { double width; double height; } _previousSize;
    struct CGSize { double width; double height; } _contentSize;
}

@property (retain, nonatomic) IESECSliceXBaseView *contentView;
@property (retain, nonatomic) UIView<IESECSliceXElementView> *rootView;
@property (nonatomic) double scaleFactor;
@property (nonatomic) double previousScaleFactor;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) IESECSliceXContainerInfo *info;
@property (readonly, nonatomic) BOOL isLoadingRootView;
@property (readonly, nonatomic) IESECSliceXInnerTracker *innerTacker;
@property (nonatomic) BOOL shouldHitTestPassthroughRootView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentCommonParams;
- (void)handleAction:(id)arg0 withView:(id)arg1;
- (void)flexDidLayout:(id)arg0;
- (double)previousScaleFactor;
- (void)setPreviousScaleFactor:(double)arg0;
- (BOOL)shouldHitTestPassthroughRootView;
- (id)innerTacker;
- (id)popLoadContext;
- (id)popUpdateContext;
- (void)pushLoadContextWithURL:(id)arg0 metaData:(id)arg1 complete:(id /* block */)arg2;
- (void)updateInnerTacker;
- (id)createElementViewContextWithPack:(id)arg0;
- (void)updateScaleFactor:(BOOL)arg0;
- (void)updateRootViewWithoutCalculateSizeWithDataSource:(id)arg0 complete:(id /* block */)arg1;
- (void)updateRootViewWithDataSource:(id)arg0 fitSize:(struct CGSize { double x0; double x1; })arg1 complete:(id /* block */)arg2;
- (BOOL)isLoadingRootView;
- (void)pushUpdateContextWithDataSource:(id)arg0 fitSize:(struct CGSize { double x0; double x1; })arg1 complete:(id /* block */)arg2;
- (struct CGSize { double x0; double x1; })updateRootViewWithDataSource:(id)arg0 fitSize:(struct CGSize { double x0; double x1; })arg1 error:(id *)arg2;
- (void)pushUpdateContextWithDataSource:(id)arg0 complete:(id /* block */)arg1;
- (void)updateRootViewWithoutCalculateSizeWithDataSource:(id)arg0 error:(id *)arg1;
- (id)initWithSliceXInstance:(id)arg0;
- (void)loadRootViewWithResourceURL:(id)arg0 resourceMetaData:(id)arg1 complete:(id /* block */)arg2;
- (void)updateRootViewWithDataSource:(id)arg0 complete:(id /* block */)arg1;
- (void)loadRootViewWithResourceData:(id)arg0 resourceMetaData:(id)arg1 error:(id *)arg2;
- (BOOL)loadRootViewWithResourceURL:(id)arg0 resourceMetaData:(id)arg1 error:(id *)arg2;
- (struct CGSize { double x0; double x1; })updateRootViewWithDataSource:(id)arg0 error:(id *)arg1;
- (id)getStorageDataWithKey:(id)arg0 filter:(id /* block */)arg1 error:(id *)arg2;
- (id)getElementViewWithKey:(id)arg0 error:(id *)arg1;
- (void)setShouldHitTestPassthroughRootView:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)info;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setPreviousSize:(struct CGSize { double x0; double x1; })arg0;
- (id)contentView;
- (double)scaleFactor;
- (struct CGSize { double x0; double x1; })previousSize;
- (void)setScaleFactor:(double)arg0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setContentView:(id)arg0;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (void)handleAction:(id)arg0;

@end