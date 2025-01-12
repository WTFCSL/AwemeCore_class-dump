//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEAlertDoubleColumnRadicalEvent : NSObject <AWEAlertEventProtocol> {
    long long _alertType;
    AWEAwemeModel *_aweme;
}

@property (nonatomic) long long alertType;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventID;
+ (id)eventDescription;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (void).cxx_destruct;
- (void)setAlertType:(long long)arg0;
- (long long)alertType;

@end
