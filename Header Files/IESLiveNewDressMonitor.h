//
//     Generated by private class-dump
//

@class IESLiveNewDressContext;

@interface IESLiveNewDressMonitor : NSObject {
    IESLiveNewDressContext *_context;
}

@property (retain, nonatomic) IESLiveNewDressContext *context;

- (void)monitorGetDressWithDressID:(id)arg0 version:(id)arg1 error:(id)arg2 duration:(double)arg3 inSyncMode:(BOOL)arg4;
- (void)monitorFetchDressListWithVersion:(id)arg0 dressIDs:(id)arg1 error:(id)arg2 response:(id)arg3 duration:(double)arg4;
- (long long)prefetchErrorCodeFromError:(id)arg0;
- (long long)getErrorCodeFromError:(id)arg0;
- (void)monitorPrefetchWithDressID:(id)arg0 dress:(id)arg1 source:(long long)arg2 duration:(double)arg3 error:(id)arg4;
- (void)monitorGetDressResourceWithDressID:(id)arg0 dressType:(int)arg1 isComplete:(BOOL)arg2 error:(id)arg3;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end