//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface DYAVerifyCodeCountdown : NSObject {
    NSMutableDictionary *_SMSCountdowns;
    NSMutableDictionary *_voiceCountdowns;
    NSMutableDictionary *_emailCountdowns;
}

@property (retain, nonatomic) NSMutableDictionary *SMSCountdowns;
@property (retain, nonatomic) NSMutableDictionary *voiceCountdowns;
@property (retain, nonatomic) NSMutableDictionary *emailCountdowns;

+ (id)sharedInstance;

- (id)SMSCountdowns;
- (id)voiceCountdowns;
- (id)emailCountdowns;
- (void)smsCountdownFired:(id)arg0;
- (void)setSMSMaxCountdown:(long long)arg0 phoneNumber:(id)arg1 type:(long long)arg2 scene:(long long)arg3;
- (void)voiceCountdownFired:(id)arg0;
- (void)emailCountDownFired:(id)arg0;
- (long long)smsCountdownForPhoneNumber:(id)arg0 type:(long long)arg1 scene:(long long)arg2 maxValue:(long long *)arg3;
- (long long)voiceCountdownForPhoneNumber:(id)arg0 type:(long long)arg1 scene:(long long)arg2 maxValue:(long long *)arg3;
- (long long)countDownForEmail:(id)arg0 type:(long long)arg1 scene:(long long)arg2 maxValue:(long long *)arg3;
- (void)setVoiceMaxCountdown:(long long)arg0 phoneNumber:(id)arg1 type:(long long)arg2 scene:(long long)arg3;
- (void)setEmailMaxCountdown:(long long)arg0 email:(id)arg1 type:(long long)arg2 scene:(long long)arg3;
- (void)clearCountdownForMobile:(id)arg0 type:(long long)arg1;
- (void)clearCountdownForMobile:(id)arg0;
- (void)clearCountdownForEmail:(id)arg0 type:(long long)arg1;
- (void)clearCountdownForEmail:(id)arg0;
- (void)setSMSCountdowns:(id)arg0;
- (void)setVoiceCountdowns:(id)arg0;
- (void)setEmailCountdowns:(id)arg0;
- (void).cxx_destruct;

@end