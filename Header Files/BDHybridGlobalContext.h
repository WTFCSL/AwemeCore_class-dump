//
//     Generated by private class-dump
//

@class NSTimer, NSMutableDictionary;

@interface BDHybridGlobalContext : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _pageSessionLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _apiSessionLock;
    NSMutableDictionary *_pageSessionContexts;
    NSMutableDictionary *_apiSessionContexts;
    NSMutableDictionary *_pageAPIDicts;
    NSTimer *_cleaningTimer;
}

@property (retain, nonatomic) NSMutableDictionary *pageSessionContexts;
@property (retain, nonatomic) NSMutableDictionary *apiSessionContexts;
@property (retain, nonatomic) NSMutableDictionary *pageAPIDicts;
@property (retain, nonatomic) NSTimer *cleaningTimer;

+ (id)sharedContext;

- (id)findPageContextWithSession:(id)arg0;
- (void)removePageSession:(id)arg0;
- (void)removeAPISession:(id)arg0;
- (id)findAPIContextWithSession:(id)arg0;
- (id)findFrameworkPageContext:(id)arg0 error:(id *)arg1;
- (id)findFrameworkAPIContext:(id)arg0 error:(id *)arg1;
- (void)_addAPIContext:(id)arg0;
- (void)_addPageContext:(id)arg0;
- (id)apiSessionContexts;
- (id)pageAPIDicts;
- (id)pageSessionContexts;
- (void)_startCleaningTimerIfNeeded;
- (id)cleaningTimer;
- (void)_onTimerFired;
- (void)setCleaningTimer:(id)arg0;
- (void)_createErrorWithMsg:(id)arg0 error:(id *)arg1;
- (id)activeAPIContexts;
- (id)activePageContexts;
- (id)_createErrorWithMsg:(id)arg0;
- (void)setPageSessionContexts:(id)arg0;
- (void)setApiSessionContexts:(id)arg0;
- (void)setPageAPIDicts:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)addContext:(id)arg0;
- (void)removeContext:(id)arg0;

@end
