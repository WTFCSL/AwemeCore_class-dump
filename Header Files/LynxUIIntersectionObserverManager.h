//
//     Generated by private class-dump
//

@class LynxContext, CADisplayLink, LynxUIOwner, NSMutableArray;

@interface LynxUIIntersectionObserverManager : NSObject <LynxEventObserver> {
    NSMutableArray *observers_;
    BOOL _enableNewIntersectionObserver;
    LynxUIOwner *_uiOwner;
    LynxContext *_context;
    CADisplayLink *_displayLink;
}

@property (weak, nonatomic) LynxContext *context;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) LynxUIOwner *uiOwner;
@property (readonly, nonatomic) BOOL enableNewIntersectionObserver;

- (id)initWithLynxContext:(id)arg0;
- (id)uiOwner;
- (void)setUiOwner:(id)arg0;
- (BOOL)enableNewIntersectionObserver;
- (void)onLynxEvent:(long long)arg0 event:(id)arg1;
- (void)addIntersectionObserver:(id)arg0;
- (id)getObserverById:(long long)arg0;
- (void)setEnableNewIntersectionObserver:(BOOL)arg0;
- (void)removeAttachedIntersectionObserver:(id)arg0;
- (void)removeIntersectionObserver:(long long)arg0;
- (void)addIntersectionObserverToRunLoop;
- (void)destroyIntersectionObserver;
- (void)intersectionObserverHandler:(id)arg0;
- (void)notifyObservers;
- (void)setDisplayLink:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)displayLink;
- (void)reset;
- (void)removeFromRunLoop;
- (void)didMoveToWindow:(BOOL)arg0;

@end
