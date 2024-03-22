//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, NSNumber, AWEURLModel;

@interface AWEPOIFeedUgcReplyUserInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_nickName;
    AWEURLModel *_avatar;
    NSDictionary *_clickEvent;
    NSArray *_originUserTags;
    NSArray *_userTags;
}

@property (retain, nonatomic) NSNumber *userTagsHeight;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSDictionary *clickEvent;
@property (copy, nonatomic) NSArray *originUserTags;
@property (retain, nonatomic) NSArray *userTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originUserTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)userTagsHeight;
- (double)userTagSpacing;
- (unsigned long long)userTagSplitType;
- (void)setUserTagsHeight:(id)arg0;
- (id)originUserTags;
- (void)setOriginUserTags:(id)arg0;
- (void)setClickEvent:(id)arg0;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)nickName;
- (id)clickEvent;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (void)setUserTags:(id)arg0;
- (id)userTags;

@end