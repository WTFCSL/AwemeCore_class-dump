//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface TTAccountChainLoginUserInfoModel : NSObject {
    BOOL _shouldSharedLogin;
    NSString *_nickName;
    NSArray *_avatarUrl;
    NSString *_avatar;
    NSString *_secUserId;
    NSString *_dTicket;
    NSDictionary *_extraInfo;
}

@property (nonatomic) BOOL shouldSharedLogin;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSArray *avatarUrl;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *dTicket;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void)setExtraInfo:(id)arg0;
- (void)setSecUserId:(id)arg0;
- (id)secUserId;
- (void)setDTicket:(id)arg0;
- (id)dTicket;
- (void)setAvatarUrl:(id)arg0;
- (id)avatarUrl;
- (BOOL)shouldSharedLogin;
- (void)setShouldSharedLogin:(BOOL)arg0;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)nickName;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (id)extraInfo;

@end