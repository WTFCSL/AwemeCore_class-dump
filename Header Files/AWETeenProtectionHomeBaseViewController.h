//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenProtectionHomeBaseViewController : UIViewController {
    NSString *_enterFrom;
    unsigned long long _type;
    NSString *_UIID;
    NSString *_userType;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *UIID;
@property (retain, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *enterFrom;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setUIID:(id)arg0;
- (id)UIID;
- (void)p_didClickTurnOnToolButtonTrackLog;
- (void)p_changeTeenModeEnabledWithCompletion:(id /* block */)arg0;
- (id)userType;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithType:(unsigned long long)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setUserType:(id)arg0;

@end