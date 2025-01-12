//
//     Generated by private class-dump
//

@class AWEURLModel;

@interface AFDUserVirtualAnimationAvatarModel : AWEBaseApiModel {
    AWEURLModel *_largeVirtualAvatar;
    AWEURLModel *_smallVirtualAvatar;
}

@property (retain, nonatomic) AWEURLModel *largeVirtualAvatar;
@property (retain, nonatomic) AWEURLModel *smallVirtualAvatar;

+ (id)largeVirtualAvatarJSONTransformer;
+ (id)smallVirtualAvatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)largeVirtualAvatar;
- (id)smallVirtualAvatar;
- (void)setLargeVirtualAvatar:(id)arg0;
- (void)setSmallVirtualAvatar:(id)arg0;
- (void).cxx_destruct;

@end
