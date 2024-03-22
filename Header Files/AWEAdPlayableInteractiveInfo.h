//
//     Generated by private class-dump
//

@class AWEFeedPlayableMaskModel, NSString, NSArray, AWEFeedPlayableComplianceInfoModel, AWEFeedPlayableSkipButtonModel, AWEFeedPlayableLoadingMaskModel, AWEFeedPlayableTransformBarModel, NSDictionary, AWEAdInteractiveVideoModel;

@interface AWEAdPlayableInteractiveInfo : MTLModel <MTLJSONSerializing> {
    NSString *_playableSceneUrl;
    AWEAdInteractiveVideoModel *_originalVideoInfo;
    NSArray *_videoList;
    AWEFeedPlayableLoadingMaskModel *_loadingMaskInfo;
    AWEFeedPlayableComplianceInfoModel *_complianceInfo;
    AWEFeedPlayableTransformBarModel *_transformBar;
    AWEFeedPlayableMaskModel *_mask;
    AWEFeedPlayableSkipButtonModel *_skipBtn;
    NSDictionary *_itemVideoMappings;
    NSArray *_alphaVideoList;
    long long _videoLength;
    AWEAdInteractiveVideoModel *_currentVideoInfo;
}

@property (copy, nonatomic) NSString *playableSceneUrl;
@property (retain, nonatomic) AWEAdInteractiveVideoModel *originalVideoInfo;
@property (copy, nonatomic) NSArray *videoList;
@property (retain, nonatomic) AWEFeedPlayableLoadingMaskModel *loadingMaskInfo;
@property (retain, nonatomic) AWEFeedPlayableComplianceInfoModel *complianceInfo;
@property (retain, nonatomic) AWEFeedPlayableTransformBarModel *transformBar;
@property (retain, nonatomic) AWEFeedPlayableMaskModel *mask;
@property (retain, nonatomic) AWEFeedPlayableSkipButtonModel *skipBtn;
@property (copy, nonatomic) NSDictionary *itemVideoMappings;
@property (copy, nonatomic) NSArray *alphaVideoList;
@property (nonatomic) long long videoLength;
@property (retain, nonatomic) AWEAdInteractiveVideoModel *currentVideoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoListJSONTransformer;
+ (id)interactiveVideosJSONTransformer;
+ (id)alphaVideoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setVideoList:(id)arg0;
- (id)videoList;
- (id)complianceInfo;
- (id)currentVideoInfo;
- (void)setCurrentVideoInfo:(id)arg0;
- (long long)videoLength;
- (void)setVideoLength:(long long)arg0;
- (id)loadingMaskInfo;
- (id)alphaVideoList;
- (id)skipBtn;
- (id)transformBar;
- (void)setSkipBtn:(id)arg0;
- (id)itemVideoMappings;
- (id)playableSceneUrl;
- (void)setComplianceInfo:(id)arg0;
- (void)setPlayableSceneUrl:(id)arg0;
- (id)originalVideoInfo;
- (void)setOriginalVideoInfo:(id)arg0;
- (void)setLoadingMaskInfo:(id)arg0;
- (void)setTransformBar:(id)arg0;
- (void)setItemVideoMappings:(id)arg0;
- (void)setAlphaVideoList:(id)arg0;
- (void).cxx_destruct;
- (id)mask;
- (void)setMask:(id)arg0;

@end