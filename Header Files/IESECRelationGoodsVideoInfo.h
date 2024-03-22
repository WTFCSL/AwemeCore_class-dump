//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, IESECRelationGoodsVideoInfoPlayerIcon;

@interface IESECRelationGoodsVideoInfo : MTLModel <MTLJSONSerializing> {
    BOOL _showPlayerIconWhenStatic;
    NSString *_videoID;
    IESECURLModel *_cover;
    IESECURLModel *_url;
    long long _maximumDuration;
    unsigned long long _type;
    IESECRelationGoodsVideoInfoPlayerIcon *_playerIcon;
}

@property (copy, nonatomic) NSString *videoID;
@property (retain, nonatomic) IESECURLModel *cover;
@property (retain, nonatomic) IESECURLModel *url;
@property (nonatomic) long long maximumDuration;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) IESECRelationGoodsVideoInfoPlayerIcon *playerIcon;
@property (nonatomic) BOOL showPlayerIconWhenStatic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (id)playerIcon;
- (void)setPlayerIcon:(id)arg0;
- (BOOL)showPlayerIconWhenStatic;
- (void)setShowPlayerIconWhenStatic:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setUrl:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setMaximumDuration:(long long)arg0;
- (long long)maximumDuration;
- (id)url;
- (id)videoID;
- (void)setVideoID:(id)arg0;

@end
