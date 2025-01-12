//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEPOISessionManager : NSObject <AWEPOISessionManagerProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    NSMutableDictionary *_sessions;
    NSMutableDictionary *_storeParams;
    NSMutableDictionary *_storeEvents;
}

@property (retain, nonatomic) NSMutableDictionary *sessions;
@property (retain, nonatomic) NSMutableDictionary *storeParams;
@property (retain, nonatomic) NSMutableDictionary *storeEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)storeInfoInSession:(id)arg0 info:(id)arg1;
- (BOOL)appendInfoInSession:(id)arg0 info:(id)arg1 targetKey:(id)arg2;
- (id)poi_fetchStoreParamsWithSessionID:(id)arg0;
- (BOOL)poi_callLynxEvent:(id)arg0 params:(id)arg1 inSession:(id)arg2;
- (BOOL)poi_registerLynxEvent:(id)arg0 containerID:(id)arg1 inSession:(id)arg2;
- (BOOL)poi_removeLynxEvent:(id)arg0 containerID:(id)arg1 inSession:(id)arg2;
- (BOOL)poi_setStoreParams:(id)arg0 toSessionID:(id)arg1;
- (id)storeParams;
- (id)storeEvents;
- (void)startSessionWithSessionID:(id)arg0;
- (void)notifyLynxSessionInfoChanged:(id)arg0;
- (void)setStoreParams:(id)arg0;
- (void)setStoreEvents:(id)arg0;
- (id)init;
- (id)sessions;
- (void).cxx_destruct;
- (void)setSessions:(id)arg0;
- (id)startSession;
- (void)dealloc;
- (id)fetchSessionInfo:(id)arg0;
- (void)stopSession:(id)arg0;

@end
