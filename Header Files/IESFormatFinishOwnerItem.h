//
//     Generated by private class-dump
//

@class NSString;

@interface IESFormatFinishOwnerItem : MTLModel <MTLJSONSerializing> {
    long long _userId;
    NSString *_nickName;
    NSString *_avatarUrl;
    long long _sex;
}

@property (nonatomic) long long userId;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *avatarUrl;
@property (nonatomic) long long sex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAvatarUrl:(id)arg0;
- (id)avatarUrl;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (long long)userId;
- (id)nickName;
- (void)setUserId:(long long)arg0;
- (long long)sex;
- (void)setSex:(long long)arg0;

@end
