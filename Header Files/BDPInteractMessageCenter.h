//
//     Generated by private class-dump
//

@class NSLock, NSMutableArray;

@interface BDPInteractMessageCenter : NSObject {
    NSMutableArray *_delegates;
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSLock *lock;

+ (void)notifyInteractEventDidChangeWithWithAppID:(id)arg0 eventName:(id)arg1 data:(id)arg2;
+ (void)addEventHandleWithEvent:(id)arg0 delegate:(id)arg1;
+ (void)removeEventHandleWithDelegate:(id)arg0;
+ (id)sharedCenter;

- (void)notifyInteractEventDidChangeWithWithAppID:(id)arg0 eventName:(id)arg1 data:(id)arg2;
- (void)addEventHandleWithEvent:(id)arg0 delegate:(id)arg1;
- (void)removeEventHandleWithDelegate:(id)arg0;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
