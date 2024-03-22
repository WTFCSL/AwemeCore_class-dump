//
//     Generated by private class-dump
//

@protocol IESLiveBizPerformanceStrategyOutput;

@interface IESLiveBizPerformanceStrategy : NSObject {
    id<IESLiveBizPerformanceStrategyOutput> _outputDelegate;
    long long _pushDeviceLimit;
}

@property (nonatomic) long long pushDeviceLimit;
@property (weak, nonatomic) id<IESLiveBizPerformanceStrategyOutput> outputDelegate;

- (void)currentPhonePerformanceLevel:(long long)arg0 info:(id)arg1;
- (void)setPushDeviceLimit:(long long)arg0;
- (BOOL)p_enablePushWith:(id)arg0;
- (void)p_configPushContent:(id)arg0 promptSwitch:(BOOL)arg1 reason:(id)arg2;
- (long long)pushDeviceLimit;
- (id)init;
- (void).cxx_destruct;
- (id)outputDelegate;
- (void)setOutputDelegate:(id)arg0;

@end