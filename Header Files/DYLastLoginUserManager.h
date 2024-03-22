//
//     Generated by private class-dump
//

@class HMDThreadSafeArray, NSMutableArray, DYLastLoginUserModel;

@interface DYLastLoginUserManager : NSObject {
    unsigned long long _lastLoginPlatform;
    HMDThreadSafeArray *_usersArray;
    NSMutableArray *_historyUserIdsArray;
    long long _maxCacheDay;
}

@property (retain, nonatomic) HMDThreadSafeArray *usersArray;
@property (retain, nonatomic) NSMutableArray *historyUserIdsArray;
@property (nonatomic) long long maxCacheDay;
@property (retain, nonatomic) DYLastLoginUserModel *lastLoginUser;
@property (nonatomic) unsigned long long lastLoginPlatform;

+ (id)sharedManager;

- (id)usersArray;
- (void)updateLastLoginUserPhoneNumber:(id)arg0;
- (BOOL)loginPhoneAutoFill;
- (id)lastLoginUser;
- (BOOL)isValidHalfYearDate:(id)arg0;
- (unsigned long long)lastLoginPlatform;
- (void)setLastLoginPlatform:(unsigned long long)arg0;
- (BOOL)isValidDateOnekey:(id)arg0;
- (void)setLastLoginUser:(id)arg0;
- (long long)loginPhoneBubbleTime;
- (long long)allCachePhoneNumberCount;
- (void)updateLastLoginUserPlatform:(unsigned long long)arg0;
- (void)updateLastLoginUserAppleID:(id)arg0;
- (unsigned long long)loginPlatformForUser:(id)arg0;
- (BOOL)isValidTowYearDate:(id)arg0;
- (void)checkUserArrayIfExpired;
- (id)historyUserIdsArray;
- (void)setUsersArray:(id)arg0;
- (id)checkIfHaveSameUidPhoneNumber:(id)arg0;
- (void)updateLastLoginUserNickname:(id)arg0 avatarURLs:(id)arg1 secUID:(id)arg2;
- (void)updateLastLoginUserIndexWithUID:(id)arg0;
- (BOOL)isValidDate:(id)arg0;
- (void)removeUserWithID:(id)arg0;
- (void)setHistoryUserIdsArray:(id)arg0;
- (long long)maxCacheDay;
- (void)setMaxCacheDay:(long long)arg0;
- (id)init;
- (void).cxx_destruct;

@end
