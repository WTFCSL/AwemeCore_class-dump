//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePublisher : NSObject <IESLivePublisher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)zip:(id)arg0;
+ (id)merge:(id)arg0;
+ (id)combineLatest:(id)arg0;

- (id)deliverOnMainThread;
- (id)subscribeNext:(id /* block */)arg0;
- (id)combineLatestWith:(id)arg0;
- (id)throttle:(double)arg0;
- (id)zipWith:(id)arg0;
- (id)subscribeAssignment:(id)arg0;
- (void)subscribe:(id)arg0 bindingToSubscription:(id)arg1;
- (id)merge:(id)arg0;
- (id)map:(id /* block */)arg0;
- (id)ignore:(id)arg0;
- (id)distinctUntilChanged;
- (id)filter:(id /* block */)arg0;
- (id)skip:(unsigned long long)arg0;
- (id)takeUntil:(id)arg0;

@end
