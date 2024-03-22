//
//     Generated by private class-dump
//

@class AWEStoryThirdPlatformInfoModel, NSString, NSArray, AWEUserModel, AWEURLModel, AWEVideoModel, AWEImageInfo, NSNumber;

@interface AWEOneDayLifeStoryModel : AWEBaseApiModel {
    BOOL _cmtSWT;
    NSString *_storyID;
    NSNumber *_createTime;
    AWEUserModel *_author;
    AWEVideoModel *_video;
    NSString *_shareUrlString;
    NSNumber *_duration;
    long long _awemeType;
    NSString *_authorUserId;
    NSString *_stickers;
    NSString *_groupID;
    AWEURLModel *_labelThumb;
    AWEURLModel *_labelLarge;
    AWEImageInfo *_imageInfo;
    AWEStoryThirdPlatformInfoModel *_thirdPlatformInfo;
    NSArray *_interactionStickers;
}

@property (copy, nonatomic) NSString *storyID;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AWEVideoModel *video;
@property (copy, nonatomic) NSString *shareUrlString;
@property (retain, nonatomic) NSNumber *duration;
@property (nonatomic) long long awemeType;
@property (nonatomic) BOOL cmtSWT;
@property (copy, nonatomic) NSString *authorUserId;
@property (copy, nonatomic) NSString *stickers;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) AWEURLModel *labelThumb;
@property (retain, nonatomic) AWEURLModel *labelLarge;
@property (retain, nonatomic) AWEImageInfo *imageInfo;
@property (retain, nonatomic) AWEStoryThirdPlatformInfoModel *thirdPlatformInfo;
@property (retain, nonatomic) NSArray *interactionStickers;

+ (id)videoJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)interactionStickersJSONTransformer;
+ (id)awemeTypeJSONTransformer;
+ (id)thirdPlatformInfoJSONTransformer;
+ (id)labelThumbJSONTransformer;
+ (id)labelLargeJSONTransformer;
+ (id)imageInfoJSONTransformer;
+ (id)authorUserIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)awemeType;
- (void)setAwemeType:(long long)arg0;
- (void)setInteractionStickers:(id)arg0;
- (id)interactionStickers;
- (id)storyID;
- (void)setStoryID:(id)arg0;
- (id)shareUrlString;
- (void)setShareUrlString:(id)arg0;
- (BOOL)cmtSWT;
- (void)setCmtSWT:(BOOL)arg0;
- (id)authorUserId;
- (void)setAuthorUserId:(id)arg0;
- (id)labelThumb;
- (void)setLabelThumb:(id)arg0;
- (id)labelLarge;
- (void)setLabelLarge:(id)arg0;
- (id)thirdPlatformInfo;
- (void)setThirdPlatformInfo:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;
- (void)setCreateTime:(id)arg0;
- (void)setVideo:(id)arg0;
- (id)duration;
- (id)author;
- (void)setAuthor:(id)arg0;
- (id)createTime;
- (id)video;
- (void)setDuration:(id)arg0;
- (id)imageInfo;
- (void)setImageInfo:(id)arg0;
- (id)stickers;
- (void)setStickers:(id)arg0;

@end