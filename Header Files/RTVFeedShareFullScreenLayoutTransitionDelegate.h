//
//     Generated by private class-dump
//

@class NSString;
@protocol RxInjector;

@interface RTVFeedShareFullScreenLayoutTransitionDelegate : NSObject <RTVXRLayoutTransitionDelegate> {
    id<RxInjector> _injector;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutTransitionPrepare:(id)arg0;
- (void)layoutTransitionWillBegin:(id)arg0;
- (void)layoutTransitionDidBegin:(id)arg0;
- (void).cxx_destruct;
- (id)injector;

@end