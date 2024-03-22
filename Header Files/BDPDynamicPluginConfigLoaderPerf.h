//
//     Generated by private class-dump
//

@interface BDPDynamicPluginConfigLoaderPerf : NSObject {
    BOOL _didEventStart;
    BOOL _didEventResult;
    double _configReadDuration;
    double _configMergeDuration;
}

@property (nonatomic) double configReadDuration;
@property (nonatomic) double configMergeDuration;
@property (nonatomic) BOOL didEventStart;
@property (nonatomic) BOOL didEventResult;

- (double)configReadDuration;
- (void)setConfigReadDuration:(double)arg0;
- (double)configMergeDuration;
- (void)setConfigMergeDuration:(double)arg0;
- (BOOL)didEventStart;
- (void)setDidEventStart:(BOOL)arg0;
- (BOOL)didEventResult;
- (void)setDidEventResult:(BOOL)arg0;

@end