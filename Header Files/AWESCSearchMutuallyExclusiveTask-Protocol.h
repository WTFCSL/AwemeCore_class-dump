//
//     Generated by private class-dump
//

@protocol AWESCSearchMutuallyExclusiveTaskDelegate;

@protocol AWESCSearchMutuallyExclusiveTask <NSObject>

@property (weak, nonatomic) id<AWESCSearchMutuallyExclusiveTaskDelegate> searchMEDelegate;

- (void)setSearchMEDelegate:(id)arg0;
- (id)searchMEDelegate;
- (BOOL)canStopSearchMETaskNow;
- (void)stopSearchMETask;

@end