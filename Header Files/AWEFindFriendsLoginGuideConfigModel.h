//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFindFriendsLoginGuideConfigModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _alertDelayTime;
    unsigned long long _alertMaxTimes;
    unsigned long long _alertInteval;
    unsigned long long _alertExitTimes;
    unsigned long long _alertExitDuration;
    NSString *_alertTitle;
    NSString *_alertDescription;
    NSString *_alertConfirm;
    NSString *_alertCancel;
    NSString *_loginGuideTitle;
    NSString *_contactGuideTitle;
    NSString *_contactGuideDescription;
}

@property (nonatomic) unsigned long long alertDelayTime;
@property (nonatomic) unsigned long long alertMaxTimes;
@property (nonatomic) unsigned long long alertInteval;
@property (nonatomic) unsigned long long alertExitTimes;
@property (nonatomic) unsigned long long alertExitDuration;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertDescription;
@property (copy, nonatomic) NSString *alertConfirm;
@property (copy, nonatomic) NSString *alertCancel;
@property (copy, nonatomic) NSString *loginGuideTitle;
@property (copy, nonatomic) NSString *contactGuideTitle;
@property (copy, nonatomic) NSString *contactGuideDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)contactGuideTitle;
- (id)contactGuideDescription;
- (id)alertConfirm;
- (id)alertCancel;
- (id)alertDescription;
- (id)loginGuideTitle;
- (unsigned long long)alertDelayTime;
- (unsigned long long)alertMaxTimes;
- (unsigned long long)alertInteval;
- (unsigned long long)alertExitTimes;
- (unsigned long long)alertExitDuration;
- (void)setAlertDelayTime:(unsigned long long)arg0;
- (void)setAlertMaxTimes:(unsigned long long)arg0;
- (void)setAlertInteval:(unsigned long long)arg0;
- (void)setAlertExitTimes:(unsigned long long)arg0;
- (void)setAlertExitDuration:(unsigned long long)arg0;
- (void)setAlertDescription:(id)arg0;
- (void)setAlertConfirm:(id)arg0;
- (void)setAlertCancel:(id)arg0;
- (void)setLoginGuideTitle:(id)arg0;
- (void)setContactGuideTitle:(id)arg0;
- (void)setContactGuideDescription:(id)arg0;
- (id)alertTitle;
- (void).cxx_destruct;
- (void)setAlertTitle:(id)arg0;

@end
