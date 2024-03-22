//
//     Generated by private class-dump
//

@class NSString, NSHashTable;

@interface IESLiveIMTracker : NSObject <IESLiveIMLogger, IESLiveIMTracker> {
    NSHashTable *_delegates;
}

@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logWith:(long long)arg0 detail:(id)arg1;
- (void)trackWith:(long long)arg0 extra:(id)arg1;
- (void)logWith:(long long)arg0 text:(id)arg1;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (id)init;
- (void)addDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg0;

@end