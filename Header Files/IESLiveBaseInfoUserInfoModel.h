//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESLiveBaseInfoUserInfoModel : IESLiveBridgeModel {
    NSString *_avatar;
    NSString *_nickname;
    NSString *_secUserId;
    NSString *_shortId;
    NSString *_userId;
    NSNumber *_userLevel;
    NSNumber *_userType;
    NSString *_displayId;
}

@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *shortId;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) NSNumber *userLevel;
@property (retain, nonatomic) NSNumber *userType;
@property (copy, nonatomic) NSString *displayId;

+ (id)modelCustomPropertyMapper;

- (void)setSecUserId:(id)arg0;
- (id)shortId;
- (id)secUserId;
- (void)setShortId:(id)arg0;
- (id)userLevel;
- (void)setUserLevel:(id)arg0;
- (id)displayId;
- (id)userType;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;
- (id)userId;
- (void)setDisplayId:(id)arg0;
- (void)setUserId:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (void)setUserType:(id)arg0;

@end
