//
//     Generated by private class-dump
//

@class NSString;
@protocol BDSCSearchMutuallyExclusiveTask, AWESCSearchMutuallyExclusiveTaskDelegate;

@interface AWESCDefaultMutuallyExclusiveTask : NSObject <BDSCSearchMutuallyExclusiveTaskDelegate, AWESCSearchMutuallyExclusiveTask> {
    id<AWESCSearchMutuallyExclusiveTaskDelegate> _searchMEDelegate;
}

@property (readonly, nonatomic) id<BDSCSearchMutuallyExclusiveTask> task;
@property (weak, nonatomic) id<AWESCSearchMutuallyExclusiveTaskDelegate> searchMEDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSearchMEDelegate:(id)arg0;
- (id)searchMEDelegate;
- (BOOL)canStopOtherTask:(id)arg0;
- (void)willChangeState:(unsigned long long)arg0 task:(id)arg1;
- (BOOL)canStopSearchMETaskNow;
- (void)stopSearchMETask;
- (id)init;
- (void).cxx_destruct;
- (id)task;

@end