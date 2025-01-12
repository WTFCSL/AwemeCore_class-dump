//
//     Generated by private class-dump
//

@class NSString, DYAVCDAccountModel;

@interface DYVCDAccountManagementCellViewModel : NSObject {
    BOOL _isSelected;
    BOOL _isFresh;
    BOOL _hasUnreadNotices;
    BOOL _isSecretAccount;
    BOOL _isBlueVerify;
    BOOL _isYellowVerify;
    BOOL _isHotsoon;
    BOOL _isFromLocal;
    DYAVCDAccountModel *_accountModel;
    NSString *_avatarURL;
    NSString *_nickname;
    NSString *_appIcon;
    NSString *_appName;
    double _lastestNoticeTimeStamp;
    long long _fansCount;
    long long _friendsCount;
}

@property (retain, nonatomic) DYAVCDAccountModel *accountModel;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *appIcon;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *avatarURL;
@property (nonatomic) BOOL isFresh;
@property (nonatomic) BOOL hasUnreadNotices;
@property (nonatomic) double lastestNoticeTimeStamp;
@property (nonatomic) long long fansCount;
@property (nonatomic) long long friendsCount;
@property (nonatomic) BOOL isSecretAccount;
@property (nonatomic) BOOL isBlueVerify;
@property (nonatomic) BOOL isYellowVerify;
@property (nonatomic) BOOL isHotsoon;
@property (nonatomic) BOOL isFromLocal;

+ (id)instanceWithAccountModel:(id)arg0 isSelected:(BOOL)arg1;
+ (id)appIconFromModel:(id)arg0;
+ (id)appNameFromModel:(id)arg0;

- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)setFansCount:(long long)arg0;
- (void)setFriendsCount:(long long)arg0;
- (long long)fansCount;
- (void)setIsFresh:(BOOL)arg0;
- (id)accountModel;
- (BOOL)isFromLocal;
- (BOOL)isHotsoon;
- (void)setIsFromLocal:(BOOL)arg0;
- (void)setIsSecretAccount:(BOOL)arg0;
- (BOOL)isSecretAccount;
- (BOOL)isBlueVerify;
- (BOOL)isYellowVerify;
- (void)setAccountModel:(id)arg0;
- (void)setIsBlueVerify:(BOOL)arg0;
- (void)setIsYellowVerify:(BOOL)arg0;
- (void)setIsHotsoon:(BOOL)arg0;
- (void)commitSelectionState:(BOOL)arg0;
- (BOOL)hasUnreadNotices;
- (void)setHasUnreadNotices:(BOOL)arg0;
- (double)lastestNoticeTimeStamp;
- (void)setLastestNoticeTimeStamp:(double)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (id)nickname;
- (void)setIsSelected:(BOOL)arg0;
- (id)appIcon;
- (void).cxx_destruct;
- (void)setAppIcon:(id)arg0;
- (void)setNickname:(id)arg0;
- (long long)friendsCount;
- (BOOL)isSelected;
- (BOOL)isFresh;

@end
