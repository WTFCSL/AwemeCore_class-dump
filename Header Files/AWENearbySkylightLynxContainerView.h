//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbySkylightLynxContainerView : UIView <AWENearbyLynxContainerViewDelegate, AWENearbySkyLightElementViewProtocol> {
    NSMutableArray *_lynxViews;
    long long _pageType;
}

@property (retain, nonatomic) NSMutableArray *lynxViews;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;

- (id)initWithPageType:(long long)arg0;
- (void)__setupObserver;
- (void)lynxContainer:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)lynxContainer:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)lynxContainerDidUpdate:(id)arg0;
- (void)sendLynxEvent:(id)arg0 params:(id)arg1;
- (id)lynxViews;
- (void)trackShowAnimated:(BOOL)arg0 params:(id)arg1;
- (void)setLynxViews:(id)arg0;
- (unsigned long long)elementViewType;
- (void)setData:(id)arg0 withLynxViewsBlk:(id /* block */)arg1;
- (void)trackShowAnimated:(BOOL)arg0 incrementalLynxViews:(id)arg1 params:(id)arg2;
- (id)getLynxViews;
- (void)updateWithData:(id)arg0 response:(id)arg1 withLynxViewsBlk:(id /* block */)arg2;
- (void)onRecieveFavoriteDotNotification:(id)arg0;
- (void)updateLynxViewHeight:(double)arg0 cardType:(long long)arg1;
- (long long)pageType;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPageType:(long long)arg0;
- (void)dealloc;

@end