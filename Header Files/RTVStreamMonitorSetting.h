//
//     Generated by private class-dump
//

@class NSDictionary, NSNumber;
@protocol Optional;

@interface RTVStreamMonitorSetting : JSONModel {
    BOOL _muteBeforeAcceptEnable;
    BOOL _streamExceptionCheckEnable;
    BOOL _firstFrameStateErrorHangupEnable;
    BOOL _firstFrameStateErrorCheckEnable;
    BOOL _needCorrectLocalStreamStateWhileStreamException;
    NSDictionary<Optional> *_config;
    NSNumber<Optional> *_delayCheckIntervalValue;
    NSNumber<Optional> *_overtimeIntervalValue;
}

@property (copy, nonatomic) NSDictionary<Optional> *config;
@property (nonatomic) BOOL muteBeforeAcceptEnable;
@property (nonatomic) BOOL streamExceptionCheckEnable;
@property (nonatomic) BOOL firstFrameStateErrorHangupEnable;
@property (nonatomic) BOOL firstFrameStateErrorCheckEnable;
@property (retain, nonatomic) NSNumber<Optional> *delayCheckIntervalValue;
@property (retain, nonatomic) NSNumber<Optional> *overtimeIntervalValue;
@property (nonatomic) BOOL needCorrectLocalStreamStateWhileStreamException;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;
+ (id)rxInjectorCreateWithArgs:(id)arg0 injector:(id)arg1;
+ (id)createSettingWithInjector:(id)arg0;

- (id)delayCheckIntervalValue;
- (id)overtimeIntervalValue;
- (double)delayCheckInterval;
- (double)overtimeInterval;
- (BOOL)muteBeforeAcceptEnable;
- (void)setMuteBeforeAcceptEnable:(BOOL)arg0;
- (BOOL)streamExceptionCheckEnable;
- (void)setStreamExceptionCheckEnable:(BOOL)arg0;
- (BOOL)firstFrameStateErrorHangupEnable;
- (void)setFirstFrameStateErrorHangupEnable:(BOOL)arg0;
- (BOOL)firstFrameStateErrorCheckEnable;
- (void)setFirstFrameStateErrorCheckEnable:(BOOL)arg0;
- (void)setDelayCheckIntervalValue:(id)arg0;
- (void)setOvertimeIntervalValue:(id)arg0;
- (BOOL)needCorrectLocalStreamStateWhileStreamException;
- (void)setNeedCorrectLocalStreamStateWhileStreamException:(BOOL)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end
