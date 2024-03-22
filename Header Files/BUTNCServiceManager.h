//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BUTNCServiceManager : NSObject {
    NSMutableDictionary *_registerMap;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (retain, nonatomic) NSMutableDictionary *registerMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (void)registerTNCServiceWithAppKey:(id)arg0 tncDomains:(id)arg1 tncPath:(id)arg2 requestParam:(id /* block */)arg3;
+ (void)unregisterTNCServiceWithAppKey:(id)arg0;
+ (void)refreshTNCDomainsWithAppKey:(id)arg0;
+ (id)TNCUrlWithBaseUrl:(id)arg0 forRequest:(id)arg1;
+ (id)sharedInstance;

- (void)_registerTNCServiceWithAppKey:(id)arg0 tncDomains:(id)arg1 tncPath:(id)arg2 requestParam:(id /* block */)arg3;
- (void)_unregisterTNCServiceWithAppKey:(id)arg0;
- (id)_TNCUrlWithBaseUrl:(id)arg0 forRequest:(id)arg1;
- (void)_refreshTNCDomainsWithAppKey:(id)arg0;
- (id)registerMap;
- (void)setRegisterMap:(id)arg0;
- (id)init;
- (id)semaphore;
- (void).cxx_destruct;
- (void)setSemaphore:(id)arg0;

@end