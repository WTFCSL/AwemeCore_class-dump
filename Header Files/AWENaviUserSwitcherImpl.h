//
//     Generated by private class-dump
//

@class NSString;
@protocol AWENaviModuleService;

@interface AWENaviUserSwitcherImpl : NSObject <AWENaviUserSwitcher> {
    NSString *_userId;
    NSString *_secUserId;
    id<AWENaviModuleService> _moduleService;
}

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;
@property (retain, nonatomic) id<AWENaviModuleService> moduleService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSecUserId:(id)arg0;
- (id)secUserId;
- (id)initWithUserId:(id)arg0 secUserId:(id)arg1;
- (id)moduleService;
- (id)getSecUserId;
- (void)setModuleService:(id)arg0;
- (id)getSwitchUserId;
- (BOOL)isComplete;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)userId;
- (BOOL)isEqual:(id)arg0;
- (void)setUserId:(id)arg0;
- (id)getUserId;

@end
