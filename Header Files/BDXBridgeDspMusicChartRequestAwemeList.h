//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeDspMusicChartRequestAwemeList : BDXBridgeModel {
    NSString *_awemeId;
    NSString *_coverUrl;
    NSString *_playUrl;
    NSString *_nickName;
    NSString *_avatarUrl;
    NSString *_diggCount;
    NSString *_templateId;
}

@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *playUrl;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *diggCount;
@property (copy, nonatomic) NSString *templateId;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setPlayUrl:(id)arg0;
- (id)diggCount;
- (void)setDiggCount:(id)arg0;
- (void)setAwemeId:(id)arg0;
- (void)setCoverUrl:(id)arg0;
- (id)awemeId;
- (void)setAvatarUrl:(id)arg0;
- (id)coverUrl;
- (id)avatarUrl;
- (id)playUrl;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)nickName;
- (id)templateId;
- (void)setTemplateId:(id)arg0;

@end