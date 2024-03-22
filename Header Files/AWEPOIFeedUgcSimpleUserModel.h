//
//     Generated by private class-dump
//

@class NSString, AWEPOIFeedUgcAvatarFrameModel, AWEURLModel;

@interface AWEPOIFeedUgcSimpleUserModel : MTLModel <MTLJSONSerializing> {
    NSString *_uid;
    NSString *_nickName;
    AWEURLModel *_avatorThumb;
    AWEPOIFeedUgcAvatarFrameModel *_avatarFrame;
}

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatorThumb;
@property (retain, nonatomic) AWEPOIFeedUgcAvatarFrameModel *avatarFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)avatorThumb;
- (void)setAvatorThumb:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)nickName;
- (id)avatarFrame;
- (void)setAvatarFrame:(id)arg0;

@end