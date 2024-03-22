//
//     Generated by private class-dump
//

@class AWEAIMusicRecommendTask, NSArray, NSString, NSMutableArray, AWEVideoImageGenerator;
@protocol ACCVideoConfigProtocol, ACCEditServiceProtocol;

@interface AWEAIMusicRecommendManager : NSObject {
    BOOL _usedAIRecommendDefaultMusicList;
    BOOL _isRequesting;
    BOOL _clipVideoModified;
    long long _maxNumForUpload;
    long long _frameSizeForUpload;
    unsigned long long _recordFrameType;
    NSArray *_recommedMusicList;
    unsigned long long _musicFetchType;
    NSString *_requestID;
    id<ACCEditServiceProtocol> _editService;
    NSMutableArray *_recordFramePahts;
    NSArray *_originFramesPathArray;
    NSString *_lastCreateId;
    NSMutableArray *_lastAssetsDurationArray;
    NSArray *_lastSelectedAssets;
    long long _lastClipRotateType;
    id<ACCVideoConfigProtocol> _videoConfig;
    AWEVideoImageGenerator *_imageGenerator;
    NSArray *_timeArray;
    AWEAIMusicRecommendTask *_currentTask;
    NSString *_enterFrom;
    double _startFetchTime;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _lastClipRange;
}

@property (retain, nonatomic) NSMutableArray *recordFramePahts;
@property (copy, nonatomic) NSArray *originFramesPathArray;
@property (nonatomic) long long maxNumForUpload;
@property (nonatomic) long long frameSizeForUpload;
@property (nonatomic) unsigned long long recordFrameType;
@property (copy, nonatomic) NSString *lastCreateId;
@property (retain, nonatomic) NSMutableArray *lastAssetsDurationArray;
@property (copy, nonatomic) NSArray *lastSelectedAssets;
@property (nonatomic) long long lastClipRotateType;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } lastClipRange;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) AWEVideoImageGenerator *imageGenerator;
@property (copy, nonatomic) NSArray *timeArray;
@property (retain, nonatomic) AWEAIMusicRecommendTask *currentTask;
@property (copy, nonatomic) NSArray *recommedMusicList;
@property (nonatomic) BOOL usedAIRecommendDefaultMusicList;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) unsigned long long musicFetchType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double startFetchTime;
@property (nonatomic) BOOL clipVideoModified;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;

+ (id)recommendedBachZipUriWithPublishViewModel:(id)arg0;
+ (BOOL)isCachedDefaultRecommendMusicListExpired;
+ (void)updateCachedDefaultRecommendMusicLisSaveTime;
+ (id)sharedInstance;

- (id)videoConfig;
- (void)setVideoConfig:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (id)timeArray;
- (void)setTimeArray:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)p_reset;
- (BOOL)clipVideoModified;
- (void)setClipVideoModified:(BOOL)arg0;
- (void)cleanRecommedMusicList;
- (BOOL)serviceOnWithEnterFrom:(id)arg0 referString:(id)arg1;
- (void)setFrameRecordType:(unsigned long long)arg0;
- (void)updateClipVideoStatusWithVideo:(id)arg0 createId:(id)arg1 rotateType:(long long)arg2 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg3;
- (BOOL)aiRecommendMusicEnabledForModel:(id)arg0;
- (void)jarvisTrackWithEvent:(id)arg0 params:(id)arg1 publishModel:(id)arg2;
- (BOOL)serviceOnWithModel:(id)arg0;
- (void)updateClipVideoStatusWithModel:(id)arg0 rotateType:(long long)arg1 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg2;
- (unsigned long long)musicFetchType;
- (void)fetchAIRecommendMusicWithURI:(id)arg0 otherParam:(id)arg1 laodMoreCallback:(id /* block */)arg2;
- (BOOL)usedAIRecommendDefaultMusicList;
- (void)deleteMusicModelIfNeeded:(id)arg0;
- (unsigned long long)recordFrameType;
- (void)appendFramePaths:(id)arg0;
- (long long)frameSizeForUpload;
- (long long)maxNumForUpload;
- (id)recommedMusicList;
- (void)startFetchFramsAndUploadWithPublishModel:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchAIRecommendMusicWithURI:(id)arg0 callback:(id /* block */)arg1;
- (void)prepareDefaultMusicListInfoWithModel:(id)arg0;
- (void)p_fetchAIRecommendDefaultData;
- (void)setRecordFrameType:(unsigned long long)arg0;
- (id)lastCreateId;
- (id)lastAssetsDurationArray;
- (long long)lastClipRotateType;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })lastClipRange;
- (void)setLastClipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (void)setLastClipRotateType:(long long)arg0;
- (id)recordFramePahts;
- (void)setRecommedMusicList:(id)arg0;
- (void)setMusicFetchType:(unsigned long long)arg0;
- (void)setMaxNumForUpload:(long long)arg0;
- (void)setStartFetchTime:(double)arg0;
- (void)setOriginFramesPathArray:(id)arg0;
- (BOOL)isSameAssets:(id)arg0;
- (id)originFramesPathArray;
- (void)setLastSelectedAssets:(id)arg0;
- (void)setLastCreateId:(id)arg0;
- (void)p_readCacheAndFetchRemoteDataWithModel:(id)arg0 callback:(id /* block */)arg1;
- (void)p_new_fetchFramesWithModel:(id)arg0 callback:(id /* block */)arg1;
- (void)setUsedAIRecommendDefaultMusicList:(BOOL)arg0;
- (void)fetchSlidesImageFramesWithWorkspace:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchAlbumImageFramesWithModel:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchSlidesMixFramesWithWorkspace:(id)arg0 callback:(id /* block */)arg1;
- (double)startFetchTime;
- (void)p_trackWithModel:(id)arg0 fetchDuration:(long long)arg1;
- (id)lastSelectedAssets;
- (void)fetchDefaultMusicListFromTOSWithURLGoup:(id)arg0 callback:(id /* block */)arg1;
- (void)setFrameSizeForUpload:(long long)arg0;
- (void)setRecordFramePahts:(id)arg0;
- (void)setLastAssetsDurationArray:(id)arg0;
- (id)init;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (id)currentTask;
- (id)imageGenerator;
- (void)setCurrentTask:(id)arg0;
- (void)setImageGenerator:(id)arg0;

@end
