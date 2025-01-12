//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDTGTicketManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _serverDataMapMutex;
    NSDictionary *_serverDataMap;
}

@property (copy, nonatomic) NSDictionary *serverDataMap;

+ (id)serverDataKeyForRequest:(id)arg0;
+ (id)addHeadersToGetTicketRequest:(id)arg0 ticketName:(id)arg1;
+ (id)addHeadersToGetTicketRequest:(id)arg0 ticketName:(id)arg1 timeout:(double)arg2 reeOnly:(BOOL)arg3;
+ (void)saveCertInResponseIfNeeded:(id)arg0;
+ (id)addHeadersToUseTicketRequest:(id)arg0 ticket:(id)arg1 tsSign:(id)arg2 tsSignRee:(id)arg3 clientCert:(id)arg4 ticketName:(id)arg5 timeout:(double)arg6 reeOnly:(BOOL)arg7;
+ (id)teeAddUseTicketHeaders:(id)arg0 ticket:(id)arg1 tsSign:(id)arg2 clientCert:(id)arg3 timestamp:(long long)arg4 timeout:(double)arg5 errorRecords:(id)arg6 success:(BOOL *)arg7;
+ (id)reeAddUseTicketHeaders:(id)arg0 ticket:(id)arg1 tsSignRee:(id)arg2 timestamp:(long long)arg3 reeOnly:(BOOL)arg4 timeout:(double)arg5 errorRecords:(id)arg6 success:(BOOL *)arg7;
+ (id)requestSignForRequest:(id)arg0 guardTarget:(id)arg1 timestamp:(long long)arg2 privateKey:(struct __SecKey { } *)arg3 error:(id *)arg4;
+ (id)serverDataKeyForRequestPath:(id)arg0 tag:(id)arg1;
+ (id)addHeadersToGetTicketRequest:(id)arg0;
+ (void)addTTNetRequestForPassportAccessTokenFilterBlock;
+ (id)sharedInstance;

- (id)serverDataMap;
- (id)p_loadCachedServerData;
- (void)addNetworkFilter;
- (void)addServerData:(id)arg0 forKey:(id)arg1;
- (id)addClientDataToRequest:(id)arg0 guardTarget:(id)arg1 attemptCount:(int *)arg2;
- (id)handleGetTicketRequest:(id)arg0;
- (void)handleGetTicketResponse:(id)arg0 request:(id)arg1;
- (id)handleUseTicketRequest:(id)arg0;
- (void)handleUseTicketResponse:(id)arg0 request:(id)arg1;
- (id)ticketForRequestPath:(id)arg0 tag:(id)arg1;
- (void)setServerDataMap:(id)arg0;
- (void)handleTTNetRequestIfNeeded:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)start;

@end
