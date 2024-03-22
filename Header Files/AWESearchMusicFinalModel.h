//
//     Generated by private class-dump
//

@class NSString, AWESearchMusicRecommendedVideosModel;
@protocol ACCSearchMusicRecommendedVideosModelProtocol;

@interface AWESearchMusicFinalModel : AWESearchMusicModel <AWEStudioSearchMusicFinalModelProtocol> {
    AWESearchMusicRecommendedVideosModel *_recommedVideos;
}

@property (retain, nonatomic) id<ACCSearchMusicRecommendedVideosModelProtocol> recommedVideos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchMusicRecommendedVideosModel *recommedVideos;

+ (id)recommedVideosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)recommedVideos;
- (void)setRecommedVideos:(id)arg0;
- (void).cxx_destruct;

@end