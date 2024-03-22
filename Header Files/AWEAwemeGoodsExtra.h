//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, AWEURLModel;

@interface AWEAwemeGoodsExtra : MTLModel <MTLJSONSerializing> {
    AWEURLModel *_bgVideoPlayURL;
    IESECURLModel *_bgVideoCoverURL;
    NSString *_backgroundPicURL;
    NSString *_musicURL;
    long long _goodsCardStyle;
}

@property (retain, nonatomic) AWEURLModel *bgVideoPlayURL;
@property (retain, nonatomic) IESECURLModel *bgVideoCoverURL;
@property (retain, nonatomic) NSString *backgroundPicURL;
@property (retain, nonatomic) NSString *musicURL;
@property (nonatomic) long long goodsCardStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgVideoPlayURLJSONTransformer;
+ (id)bgVideoCoverURLJSONTransformer;
+ (id)goodsCardStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)musicURL;
- (void)setMusicURL:(id)arg0;
- (id)bgVideoPlayURL;
- (void)setBgVideoPlayURL:(id)arg0;
- (id)bgVideoCoverURL;
- (void)setBgVideoCoverURL:(id)arg0;
- (id)backgroundPicURL;
- (void)setBackgroundPicURL:(id)arg0;
- (long long)goodsCardStyle;
- (void)setGoodsCardStyle:(long long)arg0;
- (void).cxx_destruct;

@end