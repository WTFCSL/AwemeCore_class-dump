//
//     Generated by private class-dump
//

@class NSString, NSArray, APCDTOAnchor, APCDTOBizData, APCDTOMusic, NSDictionary, APCDTOActivity, APCDTOCanvas, APCDTOLandingStrategy;
@protocol ACCMusicModelProtocol;

@interface APCDTOShareVideoToStoryModel : MTLModel <AWEStudioVideoCacheProtocol, AWEShareToStoryModelProtocol, MTLJSONSerializing> {
    BOOL _useGradientBackground;
    BOOL _showMusicCapsule;
    BOOL _asStory;
    NSArray *_videoUrlList;
    NSArray *_videoVidList;
    NSString *_videoScene;
    NSString *_shareFromKey;
    NSString *_shareFromType;
    NSString *_enterFrom;
    double _duration;
    double _fps;
    double _bitrate;
    double _width;
    double _height;
    NSDictionary *_extraInfo;
    NSArray *_backgroundImageUrlList;
    APCDTOLandingStrategy *_landingStrategy;
    NSString *_currentPlayingUrlKey;
    NSString *_effectPanel;
    NSString *_effectCategory;
    NSString *_effectStyleIndex;
    NSString *_effectId;
    NSString *_title1;
    NSString *_title2;
    NSString *_musicId;
    NSArray *_hashTagStickerConfigs;
    APCDTOAnchor *_anchor;
    NSString *_relatedReviewContent;
    NSString *_stickerText;
    NSString *_coverUrl;
    NSArray *_textStickerConfigs;
    double _musicDuration;
    NSString *_resourceUri;
    NSString *_unmodifiablePublishParams;
    APCDTOActivity *_activity;
    APCDTOMusic *_music;
    APCDTOBizData *_bizData;
    APCDTOCanvas *_canvas;
    NSString *_customLayout;
    NSString *_enterMethod;
    NSString *_shootEnterFrom;
    NSArray *_mentionStickerConfigs;
    NSArray *_poiStickerConfigs;
    NSString *_publishTitle;
    NSArray *_quickFlashSticker;
}

@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicModel;
@property (copy, nonatomic) NSString *videoURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *shareFromKey;
@property (copy, nonatomic) NSString *shareFromType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL useGradientBackground;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) APCDTOLandingStrategy *landingStrategy;
@property (copy, nonatomic) NSArray *backgroundImageUrlList;
@property (copy, nonatomic) NSString *effectCategory;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *effectPanel;
@property (copy, nonatomic) NSString *effectStyleIndex;
@property (copy, nonatomic) NSString *title1;
@property (copy, nonatomic) NSString *title2;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSArray *hashTagStickerConfigs;
@property (retain, nonatomic) APCDTOAnchor *anchor;
@property (copy, nonatomic) NSArray *textStickerConfigs;
@property (nonatomic) double musicDuration;
@property (copy, nonatomic) NSString *resourceUri;
@property (copy, nonatomic) NSString *unmodifiablePublishParams;
@property (retain, nonatomic) APCDTOActivity *activity;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (retain, nonatomic) APCDTOMusic *music;
@property (retain, nonatomic) APCDTOBizData *bizData;
@property (retain, nonatomic) APCDTOCanvas *canvas;
@property (nonatomic) BOOL showMusicCapsule;
@property (copy, nonatomic) NSString *customLayout;
@property (copy, nonatomic) NSArray *mentionStickerConfigs;
@property (copy, nonatomic) NSArray *poiStickerConfigs;
@property (readonly, nonatomic) long long shareToStoryType;
@property (nonatomic) BOOL isQuickShare;
@property (nonatomic) long long quickShareType;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *previousCreationID;
@property (copy, nonatomic) NSString *originalAwemeType;
@property (nonatomic) BOOL isQuickShareSecondPublish;
@property (nonatomic) long long feedType;
@property (copy, nonatomic) NSString *publishTitle;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *videoUrlList;
@property (copy, nonatomic) NSArray *videoVidList;
@property (copy, nonatomic) NSString *videoScene;
@property (copy, nonatomic) NSString *shareFromKey;
@property (copy, nonatomic) NSString *shareFromType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double duration;
@property (nonatomic) double fps;
@property (nonatomic) double bitrate;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSArray *backgroundImageUrlList;
@property (nonatomic) BOOL useGradientBackground;
@property (retain, nonatomic) APCDTOLandingStrategy *landingStrategy;
@property (copy, nonatomic) NSString *currentPlayingUrlKey;
@property (copy, nonatomic) NSString *effectPanel;
@property (copy, nonatomic) NSString *effectCategory;
@property (copy, nonatomic) NSString *effectStyleIndex;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *title1;
@property (copy, nonatomic) NSString *title2;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSArray *hashTagStickerConfigs;
@property (retain, nonatomic) APCDTOAnchor *anchor;
@property (copy, nonatomic) NSString *relatedReviewContent;
@property (copy, nonatomic) NSString *stickerText;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSArray *textStickerConfigs;
@property (nonatomic) double musicDuration;
@property (copy, nonatomic) NSString *resourceUri;
@property (copy, nonatomic) NSString *unmodifiablePublishParams;
@property (retain, nonatomic) APCDTOActivity *activity;
@property (retain, nonatomic) APCDTOMusic *music;
@property (retain, nonatomic) APCDTOBizData *bizData;
@property (retain, nonatomic) APCDTOCanvas *canvas;
@property (nonatomic) BOOL showMusicCapsule;
@property (copy, nonatomic) NSString *customLayout;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (copy, nonatomic) NSArray *mentionStickerConfigs;
@property (copy, nonatomic) NSArray *poiStickerConfigs;
@property (copy, nonatomic) NSString *publishTitle;
@property (copy, nonatomic) NSArray *quickFlashSticker;
@property (nonatomic) BOOL asStory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)activityJSONTransformer;
+ (id)quickFlashStickerJSONTransformer;
+ (id)bizDataJSONTransformer;
+ (id)canvasJSONTransformer;
+ (id)landingStrategyJSONTransformer;
+ (id)hashTagStickerConfigsJSONTransformer;
+ (id)textStickerConfigsJSONTransformer;
+ (id)mentionStickerConfigsJSONTransformer;
+ (id)poiStickerConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtraInfo:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (double)musicDuration;
- (id)urlList;
- (void)setUseGradientBackground:(BOOL)arg0;
- (void)setShareFromType:(id)arg0;
- (void)setBackgroundImageUrlList:(id)arg0;
- (void)setPublishTitle:(id)arg0;
- (void)setLandingStrategy:(id)arg0;
- (id)musicModel;
- (void)setIsQuickShare:(BOOL)arg0;
- (void)setShareFromKey:(id)arg0;
- (void)setCustomLayout:(id)arg0;
- (void)setMusicId:(id)arg0;
- (void)setShowMusicCapsule:(BOOL)arg0;
- (void)setUnmodifiablePublishParams:(id)arg0;
- (void)setShootEnterFrom:(id)arg0;
- (void)setBizData:(id)arg0;
- (void)setVideoVidList:(id)arg0;
- (void)setCoverUrl:(id)arg0;
- (void)setVideoUrlList:(id)arg0;
- (id)trackParams;
- (id)publishTitle;
- (id)musicId;
- (id)coverUrl;
- (void)setMusicModel:(id)arg0;
- (void)setTrackParams:(id)arg0;
- (BOOL)showMusicCapsule;
- (id)unmodifiablePublishParams;
- (long long)quickShareType;
- (void)setQuickShareType:(long long)arg0;
- (id)shootEnterFrom;
- (long long)shareToStoryType;
- (id)shareFromKey;
- (id)shareFromType;
- (id)stickerText;
- (void)setStickerText:(id)arg0;
- (id)relatedReviewContent;
- (void)setRelatedReviewContent:(id)arg0;
- (id)customLayout;
- (id)bizData;
- (id)currentPlayingURLKey;
- (id)creationID;
- (void)setCreationID:(id)arg0;
- (void)setQuickFlashSticker:(id)arg0;
- (BOOL)isQuickShare;
- (id)landingStrategy;
- (void)setTitle1:(id)arg0;
- (void)setTitle2:(id)arg0;
- (void)setVideoURI:(id)arg0;
- (id)quickFlashSticker;
- (id)convertToJSONString;
- (void)setAsStory:(BOOL)arg0;
- (BOOL)useGradientBackground;
- (id)backgroundImageUrlList;
- (id)effectCategory;
- (void)setEffectCategory:(id)arg0;
- (id)effectPanel;
- (void)setEffectPanel:(id)arg0;
- (id)effectStyleIndex;
- (void)setEffectStyleIndex:(id)arg0;
- (id)title1;
- (id)title2;
- (id)hashTagStickerConfigs;
- (void)setHashTagStickerConfigs:(id)arg0;
- (id)textStickerConfigs;
- (void)setTextStickerConfigs:(id)arg0;
- (void)setMusicDuration:(double)arg0;
- (id)resourceUri;
- (void)setResourceUri:(id)arg0;
- (id)mentionStickerConfigs;
- (void)setMentionStickerConfigs:(id)arg0;
- (id)poiStickerConfigs;
- (void)setPoiStickerConfigs:(id)arg0;
- (BOOL)asStory;
- (id)currentPlayingUrlKey;
- (id)videoUrlList;
- (id)videoURI;
- (id)videoVidList;
- (id)videoScene;
- (void)setVideoScene:(id)arg0;
- (void)setCurrentPlayingUrlKey:(id)arg0;
- (void)setIsQuickShareSecondPublish:(BOOL)arg0;
- (void)setPreviousCreationID:(id)arg0;
- (void)setOriginalAwemeType:(id)arg0;
- (BOOL)isQuickShareSecondPublish;
- (id)previousCreationID;
- (id)originalAwemeType;
- (id)music;
- (void)setAnchor:(id)arg0;
- (id)anchor;
- (id)init;
- (long long)feedType;
- (void)setFeedType:(long long)arg0;
- (void).cxx_destruct;
- (double)height;
- (id)activity;
- (void)setMusic:(id)arg0;
- (id)itemID;
- (double)bitrate;
- (double)duration;
- (void)setCanvas:(id)arg0;
- (void)setWidth:(double)arg0;
- (void)setActivity:(id)arg0;
- (void)setHeight:(double)arg0;
- (double)fps;
- (double)width;
- (id)canvas;
- (void)setDuration:(double)arg0;
- (void)setBitrate:(double)arg0;
- (void)setFps:(double)arg0;
- (id)effectId;
- (id)extraInfo;
- (void)setEffectId:(id)arg0;

@end
