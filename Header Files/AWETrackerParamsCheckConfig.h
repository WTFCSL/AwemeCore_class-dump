//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWETrackerParamsCheckConfig : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    NSMutableDictionary *_eventToCheckItem;
    NSMutableDictionary *_eventToCheckParams;
}

@property (retain, nonatomic) NSMutableDictionary *eventToCheckItem;
@property (retain, nonatomic) NSMutableDictionary *eventToCheckParams;

+ (void)strategyWhenReplacementCheckEventWithError:(id *)arg0 errorType:(unsigned long long)arg1 applyObject:(id)arg2;
+ (id)sharedInstance;

- (void)addItemsFrom:(id)arg0;
- (id)eventToCheckItem;
- (void)addItem:(id)arg0 forEvent:(id)arg1;
- (BOOL)replacementCheckEvent:(id)arg0 withOriginParams:(id)arg1 newParams:(id)arg2 extraInfo:(id)arg3;
- (void)setEventToCheckItem:(id)arg0;
- (id)eventToCheckParams;
- (void)setEventToCheckParams:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;

@end
