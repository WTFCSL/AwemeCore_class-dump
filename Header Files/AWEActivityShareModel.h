//
//     Generated by private class-dump
//

@class NSNumber, AWEURLModel;

@interface AWEActivityShareModel : AWEBaseApiModel {
    NSNumber *_useMusicCount;
    NSNumber *_diggCount;
    AWEURLModel *_musicCoverURL;
    AWEURLModel *_musicQRCodeURL;
}

@property (retain, nonatomic) NSNumber *useMusicCount;
@property (retain, nonatomic) NSNumber *diggCount;
@property (retain, nonatomic) AWEURLModel *musicCoverURL;
@property (retain, nonatomic) AWEURLModel *musicQRCodeURL;

+ (id)musicCoverURLJSONTransformer;
+ (id)musicQRCodeURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diggCount;
- (void)setDiggCount:(id)arg0;
- (id)useMusicCount;
- (void)setUseMusicCount:(id)arg0;
- (id)musicCoverURL;
- (void)setMusicCoverURL:(id)arg0;
- (id)musicQRCodeURL;
- (void)setMusicQRCodeURL:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;

@end
