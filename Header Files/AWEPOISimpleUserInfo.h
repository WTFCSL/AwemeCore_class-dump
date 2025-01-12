//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEPOISimpleUserInfo : AWEBaseApiModel {
    NSString *_uid;
    NSString *_nickName;
    AWEURLModel *_avatorThumb;
}

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatorThumb;

+ (id)JSONKeyPathsByPropertyKey;

- (id)avatorThumb;
- (void)setAvatorThumb:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)nickName;

@end
