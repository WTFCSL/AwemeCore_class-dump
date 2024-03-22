//
//     Generated by private class-dump
//

@class NSNetServiceBrowser, NSMutableArray, NSString;
@protocol AWESCSearchMutuallyExclusiveTaskDelegate;

@interface AWEMultiDeviceMDNSDiscover : NSObject <NSNetServiceBrowserDelegate, AWESCSearchMutuallyExclusiveTask> {
    id<AWESCSearchMutuallyExclusiveTaskDelegate> _searchMEDelegate;
    NSNetServiceBrowser *_browser;
    NSMutableArray *_servicesFounded;
    id /* block */ _discoverCompletion;
    NSString *_timerIdentify;
    NSString *_service;
    NSString *_domain;
}

@property (retain, nonatomic) NSNetServiceBrowser *browser;
@property (retain, nonatomic) NSMutableArray *servicesFounded;
@property (copy, nonatomic) id /* block */ discoverCompletion;
@property (retain, nonatomic) NSString *timerIdentify;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESCSearchMutuallyExclusiveTaskDelegate> searchMEDelegate;

+ (id)sharedInstance;

- (void)stopSearch;
- (void)setSearchMEDelegate:(id)arg0;
- (id)searchMEDelegate;
- (BOOL)canStopSearchMETaskNow;
- (void)stopSearchMETask;
- (void)beginSearchServiceOfService:(id)arg0 inDomain:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (id)timerIdentify;
- (void)setTimerIdentify:(id)arg0;
- (void)setServicesFounded:(id)arg0;
- (id)servicesFounded;
- (void)setDiscoverCompletion:(id /* block */)arg0;
- (void)stopSearchWithTimeOut:(BOOL)arg0 deviceName:(id)arg1;
- (id /* block */)discoverCompletion;
- (id)init;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (void)setBrowser:(id)arg0;
- (id)domain;
- (id)browser;
- (void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2;
- (id)service;
- (void)setDomain:(id)arg0;
- (void)netServiceBrowser:(id)arg0 didNotSearch:(id)arg1;

@end