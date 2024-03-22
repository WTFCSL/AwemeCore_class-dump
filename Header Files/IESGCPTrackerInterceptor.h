//
//     Generated by private class-dump
//

@class NSString, IESGCPTrackerNode, UIView, IESGCPTrackerHooker;

@interface IESGCPTrackerInterceptor : NSObject <IESGCPTrackerInterceptor> {
    IESGCPTrackerNode *_trackingNode;
    UIView *_trackingView;
    long long _interceptType;
    id /* block */ _pageNodeExposeEvent;
    id /* block */ _nodeClickEvent;
    IESGCPTrackerHooker *_hooker;
}

@property (weak, nonatomic) IESGCPTrackerNode *trackingNode;
@property (weak, nonatomic) UIView *trackingView;
@property (retain, nonatomic) IESGCPTrackerHooker *hooker;
@property (readonly, nonatomic) long long interceptType;
@property (copy, nonatomic) id /* block */ pageNodeExposeEvent;
@property (copy, nonatomic) id /* block */ nodeClickEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPageNodeExposeEvent:(id /* block */)arg0;
- (void)setNodeClickEvent:(id /* block */)arg0;
- (void)startInterceptor;
- (void)removeHookingObject:(id)arg0 forSelector:(SEL)arg1;
- (BOOL)hookWithObject:(id)arg0 selector:(SEL)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)removeHookingObject:(id)arg0;
- (long long)interceptType;
- (id)trackingNode;
- (id /* block */)pageNodeExposeEvent;
- (id /* block */)nodeClickEvent;
- (id)hooker;
- (id)initWithNode:(id)arg0 interceptorType:(long long)arg1;
- (void)stopInterceptor;
- (BOOL)isSupportInterceptType:(long long)arg0;
- (BOOL)isTrackingPageNode;
- (BOOL)couldInterceptTraceView;
- (void)notifyPageNodeExposedEventChange:(BOOL)arg0;
- (void)notifyClickEvent;
- (BOOL)hookTrackingViewSelector:(SEL)arg0 withOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)recursionFindTrackingSuperview:(id /* block */)arg0;
- (void)setTrackingNode:(id)arg0;
- (void)setHooker:(id)arg0;
- (void).cxx_destruct;
- (id)trackingView;
- (void)setTrackingView:(id)arg0;

@end