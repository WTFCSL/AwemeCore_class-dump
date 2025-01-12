//
//     Generated by private class-dump
//

@protocol BDHybridCertContextValidator;

@interface BDHybridCertConfig : NSObject {
    BOOL _enableContextValidation;
    id<BDHybridCertContextValidator> _contextValidator;
    double _contextCleaningTimerInterval;
    double _contextCleaningTimeThreshold;
}

@property (retain, nonatomic) id<BDHybridCertContextValidator> contextValidator;
@property (nonatomic) BOOL enableContextValidation;
@property (nonatomic) double contextCleaningTimerInterval;
@property (nonatomic) double contextCleaningTimeThreshold;

+ (id)sharedConfig;

- (void)setEnableContextValidation:(BOOL)arg0;
- (void)setContextValidator:(id)arg0;
- (void)setContextCleaningTimerInterval:(double)arg0;
- (void)setContextCleaningTimeThreshold:(double)arg0;
- (id)contextValidator;
- (BOOL)enableContextValidation;
- (double)contextCleaningTimerInterval;
- (double)contextCleaningTimeThreshold;
- (void).cxx_destruct;

@end
