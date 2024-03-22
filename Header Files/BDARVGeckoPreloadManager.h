//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDARVGeckoPreloadManager : NSObject <BDARGeckoMannagerProtocol> {
    NSDictionary *_abtest;
    NSString *_appID;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSDictionary *abtest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setAbtest:(id)arg0;
- (id)abtest;
- (void)clearGeckoResource;
- (void)preloadGeckoWithAppID:(id)arg0;
- (id)dataForPath:(id)arg0;
- (void)setupGurd:(id)arg0;
- (void)_setupGurdPollWithAccessKey:(id)arg0 channels:(id)arg1;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)appID;
- (id)_deviceId;

@end