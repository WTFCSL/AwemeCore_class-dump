//
//     Generated by private class-dump
//

@protocol HMDCPUExceptionThermalMonitorDelegate;

@interface HMDCPUExceptionThermalMonitor : NSObject {
    BOOL _running;
    BOOL _isThermalAbnormal;
    unsigned long long _currentThermalState;
    id<HMDCPUExceptionThermalMonitorDelegate> _delegate;
    unsigned long long _abnormalThermalState;
}

@property BOOL running;
@property (nonatomic) BOOL isThermalAbnormal;
@property (nonatomic) unsigned long long currentThermalState;
@property (nonatomic) unsigned long long abnormalThermalState;
@property (weak, nonatomic) id<HMDCPUExceptionThermalMonitorDelegate> delegate;

- (void)unRegistThermalNotification;
- (void)registThermalNotification;
- (void)setAbnormalThermalState:(unsigned long long)arg0;
- (void)hmdDeviceTheramlStateDidChange:(id)arg0;
- (void)setCurrentThermalState:(unsigned long long)arg0;
- (BOOL)isThermalAbnormal;
- (unsigned long long)abnormalThermalState;
- (void)setIsThermalAbnormal:(BOOL)arg0;
- (void)enterThermalMonitorLevel:(unsigned long long)arg0;
- (unsigned long long)currentThermalState;
- (BOOL)running;
- (void)setRunning:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)delegate;
- (void)start;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end
