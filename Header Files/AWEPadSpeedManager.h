//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPadSpeedManager : NSObject <AFDSpeedManagerProtocol> {
    BOOL _enableGlobalSpeedInherit;
    double _currentSpeed;
    NSArray *_padSpeedAwemeTypeBlackList;
}

@property (retain, nonatomic) NSArray *padSpeedAwemeTypeBlackList;
@property (nonatomic) BOOL enableGlobalSpeedInherit;
@property (nonatomic) double currentSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setSpeedModeNextEnterMethod:(id)arg0;
+ (id)getSpeedModeNextEnterMethod;
+ (void)trackSpeedModePlayTimeWithModel:(id)arg0 params:(id)arg1;
+ (BOOL)isCurrentVideoDurationSatisfiedWithModel:(id)arg0;
+ (double)videoDurationThreshold;
+ (id)sharedInstance;

- (double)inheritedSpeedWhenSlideHorizontallyWithAweme:(id)arg0 referString:(id)arg1;
- (BOOL)enableGlobalSpeedInherit;
- (void)updateCurrentVideoInfoWithAweme:(id)arg0 speed:(double)arg1;
- (double)inheritedSpeedWhenSlideVerticallyWithAweme:(id)arg0 referString:(id)arg1;
- (double)inheritedGlobalSpeedWithAweme:(id)arg0 referString:(id)arg1 enterFrom:(id)arg2;
- (BOOL)shouldGlobalSpeedInherit;
- (void)setEnableGlobalSpeedInherit:(BOOL)arg0;
- (void)setPadSpeedAwemeTypeBlackList:(id)arg0;
- (BOOL)shouldInheritSpeedWithAweme:(id)arg0;
- (id)padSpeedAwemeTypeBlackList;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (double)currentSpeed;
- (void)setCurrentSpeed:(double)arg0;
- (void)setupConfig;

@end