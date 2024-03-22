//
//     Generated by private class-dump
//

@class BDMannorConfiguration;

@interface BDMannor : NSObject {
    BDMannorConfiguration *_config;
}

@property (retain, nonatomic) BDMannorConfiguration *config;

+ (id)adTrackHandler;
+ (id)hostCommonCapabilityHandler;
+ (void)registerATM;
+ (void)setupDebugLabelOnView:(id)arg0;
+ (id)getAppInfoHandler;
+ (id)sharedInstance;
+ (id)requestHandler;
+ (id)downloadHandler;

- (void)registerMannorWithConfigHanler:(id /* block */)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end