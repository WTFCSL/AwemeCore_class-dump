//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEPOIUGCRateDispatchBDXEventManager : NSObject {
    NSString *_lastName;
    NSDictionary *_lastUserInfo;
}

@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSDictionary *lastUserInfo;

+ (id)sharedInstance;

- (void)publishBDXEventWithName:(id)arg0 params:(id)arg1;
- (void)nonredundantPostNotificationName:(id)arg0 object:(id)arg1 userInfo:(id)arg2;
- (id)lastUserInfo;
- (void)postWithData:(id)arg0;
- (void)setLastUserInfo:(id)arg0;
- (void)setLastName:(id)arg0;
- (void).cxx_destruct;
- (id)lastName;

@end
