//
//     Generated by private class-dump
//

@class NSMutableArray, CADisplayLink;
@protocol POPAnimatorDelegate;

@interface POPAnimator : NSObject {
    CADisplayLink *_displayLink;
    struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__prev_; struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__next_; } __end_; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > { unsigned long long __value_; } __size_alloc_; } _list;
    struct __CFDictionary { } *_dict;
    NSMutableArray *_observers;
    struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__prev_; struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__next_; } __end_; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > { unsigned long long __value_; } __size_alloc_; } _pendingList;
    struct __CFRunLoopObserver { } *_pendingListObserver;
    double _slowMotionStartTime;
    double _slowMotionLastTime;
    double _slowMotionAccumulator;
    double _beginTime;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    BOOL _disableDisplayLink;
    id<POPAnimatorDelegate> _delegate;
}

@property (nonatomic) BOOL disableDisplayLink;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) id<POPAnimatorDelegate> delegate;
@property (readonly, nonatomic) double refreshPeriod;

+ (id)sharedAnimator;

- (void)_clearPendingListObserver;
- (void)_processPendingList;
- (void)addAnimation:(id)arg0 forObject:(id)arg1 key:(id)arg2;
- (void)removeAnimationForObject:(id)arg0 key:(id)arg1;
- (void)removeAllAnimationsForObject:(id)arg0;
- (id)animationKeysForObject:(id)arg0;
- (id)animationForObject:(id)arg0 key:(id)arg1;
- (void)_renderTime:(double)arg0 items:(struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *x0; struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > { unsigned long long x0; } x1; })arg1;
- (void)_renderTime:(double)arg0 item:(struct shared_ptr<POPAnimatorItem> { struct POPAnimatorItem *x0; struct __shared_weak_count *x1; })arg1;
- (void)removeAnimationForObject:(id)arg0 key:(id)arg1 cleanupDict:(BOOL)arg2;
- (void)_scheduleProcessPendingList;
- (void)renderTime:(double)arg0;
- (BOOL)disableDisplayLink;
- (void)setDisableDisplayLink:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)observers;
- (void)setBeginTime:(double)arg0;
- (id)delegate;
- (void)addObserver:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (double)beginTime;
- (void)removeObserver:(id)arg0;
- (id).cxx_construct;
- (void)render;
- (double)refreshPeriod;
- (double)_currentRenderTime;

@end