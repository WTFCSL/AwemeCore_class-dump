//
//     Generated by private class-dump
//

@class NSString, NSArray, APCDTODyliteRedPacket, APCDTOTmpChunJieConfig, APCDTOActivity, NSDictionary, APCDTOPoiInfo, NSNumber;

@interface APCDTOBizData : MTLModel <MTLJSONSerializing> {
    BOOL _needUploadOriginalFrames;
    BOOL _needUploadAudioFrames;
    BOOL _fromSpecialPlus;
    NSString *_enterFrom;
    NSString *_shootWay;
    NSString *_contentType;
    long long _categoryDa;
    APCDTOActivity *_activity;
    NSString *_creationId;
    NSString *_enterMethod;
    NSDictionary *_passThrough;
    NSString *_contentSource;
    NSString *_momentCameraFrameRatio;
    NSArray *_originalFramesArray;
    NSString *_framesTaskID;
    long long _videoAwemeType;
    long long _imageAwemeType;
    NSDictionary *_publishTrackJson;
    NSString *_shootEnterFrom;
    NSString *_reactId;
    NSString *_fromGroupId;
    APCDTOPoiInfo *_poi;
    NSDictionary *_createAwemeParams;
    APCDTOTmpChunJieConfig *_chunJieConfig;
    APCDTODyliteRedPacket *_dyLiteRedPacket;
}

@property (nonatomic) long long videoSource;
@property (nonatomic) long long draftSavePolicy;
@property (retain, nonatomic) NSDictionary *unmodifiablePublishParams;
@property (nonatomic) long long videoType;
@property (nonatomic) BOOL imagePreferred;
@property (retain, nonatomic) NSNumber *nowPostType;
@property (copy, nonatomic) NSString *momentCameraFrameRatio;
@property (copy, nonatomic) NSArray *originalFramesArray;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (copy, nonatomic) NSString *framesTaskID;
@property (nonatomic) BOOL needUniqueTaskID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) long long categoryDa;
@property (retain, nonatomic) APCDTOActivity *activity;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *passThrough;
@property (copy, nonatomic) NSString *contentSource;
@property (copy, nonatomic) NSString *momentCameraFrameRatio;
@property (copy, nonatomic) NSArray *originalFramesArray;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (copy, nonatomic) NSString *framesTaskID;
@property (nonatomic) long long videoAwemeType;
@property (nonatomic) long long imageAwemeType;
@property (copy, nonatomic) NSDictionary *publishTrackJson;
@property (nonatomic) BOOL needUploadAudioFrames;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (nonatomic) BOOL fromSpecialPlus;
@property (copy, nonatomic) NSString *reactId;
@property (copy, nonatomic) NSString *fromGroupId;
@property (retain, nonatomic) APCDTOPoiInfo *poi;
@property (copy, nonatomic) NSDictionary *createAwemeParams;
@property (retain, nonatomic) APCDTOTmpChunJieConfig *chunJieConfig;
@property (retain, nonatomic) APCDTODyliteRedPacket *dyLiteRedPacket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poiJSONTransformer;
+ (id)activityJSONTransformer;
+ (id)chunJieConfigJSONTransformer;
+ (id)dyLiteRedPacketJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)reactId;
- (void)setReactId:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)setShootWay:(id)arg0;
- (void)setFromGroupId:(id)arg0;
- (void)setCategoryDa:(long long)arg0;
- (void)setDraftSavePolicy:(long long)arg0;
- (void)setUnmodifiablePublishParams:(id)arg0;
- (void)setShootEnterFrom:(id)arg0;
- (void)setPublishTrackJson:(id)arg0;
- (long long)categoryDa;
- (id)nowPostType;
- (id)creationId;
- (void)setCreationId:(id)arg0;
- (id)createAwemeParams;
- (void)setCreateAwemeParams:(id)arg0;
- (id)unmodifiablePublishParams;
- (id)shootWay;
- (id)shootEnterFrom;
- (id)publishTrackJson;
- (id)fromGroupId;
- (BOOL)needUploadAudioFrames;
- (void)setNeedUploadAudioFrames:(BOOL)arg0;
- (id)poi;
- (void)setPoi:(id)arg0;
- (void)setNeedUploadOriginalFrames:(BOOL)arg0;
- (void)setNeedUploadOriginalFrames:(BOOL)arg0;
- (void)setNowPostType:(id)arg0;
- (id)momentCameraFrameRatio;
- (id)momentCameraFrameRatio;
- (void)setMomentCameraFrameRatio:(id)arg0;
- (void)setMomentCameraFrameRatio:(id)arg0;
- (id)originalFramesArray;
- (id)originalFramesArray;
- (void)setOriginalFramesArray:(id)arg0;
- (void)setOriginalFramesArray:(id)arg0;
- (BOOL)needUploadOriginalFrames;
- (BOOL)needUploadOriginalFrames;
- (id)framesTaskID;
- (id)framesTaskID;
- (void)setFramesTaskID:(id)arg0;
- (void)setFramesTaskID:(id)arg0;
- (void)setDyLiteRedPacket:(id)arg0;
- (id)dyLiteRedPacket;
- (void)setImagePreferred:(BOOL)arg0;
- (void)setNeedUniqueTaskID:(BOOL)arg0;
- (long long)draftSavePolicy;
- (BOOL)imagePreferred;
- (BOOL)needUniqueTaskID;
- (long long)videoAwemeType;
- (void)setVideoAwemeType:(long long)arg0;
- (long long)imageAwemeType;
- (void)setImageAwemeType:(long long)arg0;
- (BOOL)fromSpecialPlus;
- (void)setFromSpecialPlus:(BOOL)arg0;
- (id)chunJieConfig;
- (void)setChunJieConfig:(id)arg0;
- (void)syncToPublishViewModel:(id)arg0;
- (void)p_activityInfoConfigurationWithPublishViewModel:(id)arg0;
- (void)setContentType:(id)arg0;
- (id)contentType;
- (id)init;
- (void).cxx_destruct;
- (void)setContentSource:(id)arg0;
- (id)activity;
- (id)contentSource;
- (long long)videoType;
- (void)setActivity:(id)arg0;
- (void)setVideoType:(long long)arg0;
- (long long)videoSource;
- (void)setVideoSource:(long long)arg0;
- (id)passThrough;
- (void)setPassThrough:(id)arg0;

@end
