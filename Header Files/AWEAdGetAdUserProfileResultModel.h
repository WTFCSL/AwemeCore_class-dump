//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEAdGetAdUserProfileResultModel : BDXBridgeModel {
    NSString *_userId;
    NSString *_secUid;
    NSString *_nickname;
    NSString *_avatar;
    NSNumber *_curUserFollowed;
    NSString *_refer;
    NSNumber *_scenes;
    NSNumber *_isLive;
    NSNumber *_curAwemeDigged;
    NSNumber *_curAwemeDiggCount;
    NSNumber *_curAwemeCommentCount;
}

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSNumber *curUserFollowed;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSNumber *scenes;
@property (copy, nonatomic) NSNumber *isLive;
@property (copy, nonatomic) NSNumber *curAwemeDigged;
@property (copy, nonatomic) NSNumber *curAwemeDiggCount;
@property (copy, nonatomic) NSNumber *curAwemeCommentCount;

+ (id)JSONKeyPathsByPropertyKey;

- (id)secUid;
- (void)setRefer:(id)arg0;
- (void)setSecUid:(id)arg0;
- (id)refer;
- (id)curUserFollowed;
- (void)setCurUserFollowed:(id)arg0;
- (id)curAwemeDigged;
- (void)setCurAwemeDigged:(id)arg0;
- (id)curAwemeDiggCount;
- (void)setCurAwemeDiggCount:(id)arg0;
- (id)curAwemeCommentCount;
- (void)setCurAwemeCommentCount:(id)arg0;
- (id)isLive;
- (id)nickname;
- (void).cxx_destruct;
- (id)scenes;
- (void)setNickname:(id)arg0;
- (id)userId;
- (void)setUserId:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (void)setScenes:(id)arg0;
- (void)setIsLive:(id)arg0;

@end