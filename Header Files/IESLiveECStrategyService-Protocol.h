//
//     Generated by private class-dump
//

@protocol IESLiveECStrategyService <NSObject>

- (id)getLatestFactor:(id)arg0;
- (void)addStrategyObserver:(id)arg0 InFactor:(id)arg1 withInputValue:(id)arg2;
- (void)removeStrategyObserver:(id)arg0;
- (void)addTrackerDelegate;
- (void)removeTrackerDelegate;
- (void)collectEnterFromMerge:(id)arg0;
- (void)collectEnterMethod:(id)arg0;
- (void)collectEnterAction:(id)arg0;
- (void)collectRoomcart:(long long)arg0;
- (void)batchCollectInformation:(id)arg0;

@end
