//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWELivePreStreamLeaveManager : NSObject {
    NSMutableArray *_leaveTime;
}

@property (retain, nonatomic) NSMutableArray *leaveTime;

+ (id)sharedManager;

- (void)prestreamLeave:(id)arg0;
- (id)leaveTime;
- (void)setLeaveTime:(id)arg0;
- (id)getFeedRequestLiveExtraParams;
- (void).cxx_destruct;

@end
