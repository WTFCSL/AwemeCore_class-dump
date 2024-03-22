//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDigitalWellbeingStatusModel : MTLModel <MTLJSONSerializing> {
    BOOL _timeLockEnabled;
    BOOL _teenModeEnabled;
    BOOL _serverTeenModeEnabled;
    double _triggerTime;
    NSString *_password;
    double _passwordStartDate;
}

@property (nonatomic, getter=isTimeLockEnabled) BOOL timeLockEnabled;
@property (nonatomic) double triggerTime;
@property (readonly, nonatomic) long long maxUseDurationInMinutes;
@property (nonatomic, getter=isTeenModeEnabled) BOOL teenModeEnabled;
@property (nonatomic, getter=isServerTeenModeEnabled) BOOL serverTeenModeEnabled;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) double passwordStartDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTeenModeEnabled;
- (BOOL)isServerTeenModeEnabled;
- (BOOL)isTimeLockEnabled;
- (long long)maxUseDurationInMinutes;
- (void)setTriggerTime:(double)arg0;
- (void)setTeenModeEnabled:(BOOL)arg0;
- (double)triggerTime;
- (void)setTimeLockEnabled:(BOOL)arg0;
- (void)setServerTeenModeEnabled:(BOOL)arg0;
- (double)passwordStartDate;
- (void)setPasswordStartDate:(double)arg0;
- (void).cxx_destruct;
- (id)password;
- (void)setPassword:(id)arg0;

@end
