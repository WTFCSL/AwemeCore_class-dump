//
//     Generated by private class-dump
//

@class ECOMTIMOConfig;

@interface ECOMTIMConfigManager : NSObject {
    ECOMTIMOConfig *_config;
}

@property (retain, nonatomic) ECOMTIMOConfig *config;

+ (id)sharedInstance;

- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end