//
//     Generated by private class-dump
//

@class NSString;
@protocol AWENaviUserSwitcher;

@interface AWENaviUserNode : NSObject {
    NSString *_userId;
    NSString *_nickname;
    long long _followStatus;
    id<AWENaviUserSwitcher> _userSwitcher;
}

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) id<AWENaviUserSwitcher> userSwitcher;

- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (id)userSwitcher;
- (void)setUserSwitcher:(id)arg0;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;
- (id)userId;
- (void)setUserId:(id)arg0;

@end
