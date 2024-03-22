//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary, NSArray, NSMutableArray, AFDMomentCameraContext;

@interface AFDMomentCameraDraftModel : MTLModel <MTLJSONSerializing> {
    BOOL _isPainted;
    BOOL _isTextMode;
    BOOL _isHasTextSticker;
    BOOL _isUpload;
    BOOL _isMomentLivePhoto;
    BOOL _isRandomAlbumUpload;
    BOOL _isPublishSuccess;
    BOOL _isLargeRatio;
    BOOL _needUploadOriginalFrames;
    BOOL _isShootToMomentCamera;
    BOOL _isMomentNewUserPublishedFirstWork;
    NSString *_draftID;
    unsigned long long _type;
    long long _brushContentType;
    AFDMomentCameraContext *_cameraContext;
    NSDictionary *_locationInfo;
    double _timeStamp;
    double _canvasWidth;
    double _canvasHeight;
    NSString *_filterID;
    NSString *_relativeImagePath;
    NSString *_relativeOriginalImagePath;
    NSString *_momentText;
    NSArray *_relativeMultiImagePathArray;
    NSString *_relativeCoverPath;
    NSString *_relativeVideoPath;
    NSNumber *_activityVideoType;
    NSString *_activityExtraJson;
    NSNumber *_partOfVisibleStatus;
    NSNumber *_privacyType;
    NSString *_partOfVisibleUsersJSON;
    NSString *_imageText;
    NSDictionary *_closeFriendsTrackInfo;
    NSArray *_samplingFrames;
    NSString *_framesTaskID;
    NSString *_enterFrom;
    NSString *_shootWay;
    NSString *_enterMethod;
    NSString *_shootEnterFrom;
    NSString *_maskShootWay;
    NSString *_tick;
    NSMutableArray *_relativeMultiImagePathMutableArray;
}

@property (copy, nonatomic) NSString *tick;
@property (retain, nonatomic) NSMutableArray *relativeMultiImagePathMutableArray;
@property (readonly, nonatomic) NSString *draftID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long brushContentType;
@property (nonatomic) BOOL isPainted;
@property (nonatomic) BOOL isTextMode;
@property (nonatomic) BOOL isHasTextSticker;
@property (nonatomic) BOOL isUpload;
@property (nonatomic) BOOL isMomentLivePhoto;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (copy, nonatomic) NSDictionary *locationInfo;
@property (nonatomic) BOOL isRandomAlbumUpload;
@property (nonatomic) BOOL isPublishSuccess;
@property (nonatomic) double timeStamp;
@property (nonatomic) double canvasWidth;
@property (nonatomic) double canvasHeight;
@property (copy, nonatomic) NSString *filterID;
@property (readonly, nonatomic) NSString *relativeImagePath;
@property (readonly, nonatomic) NSString *relativeOriginalImagePath;
@property (copy, nonatomic) NSString *momentText;
@property (readonly, nonatomic) NSArray *relativeMultiImagePathArray;
@property (readonly, nonatomic) NSString *relativeCoverPath;
@property (readonly, nonatomic) NSString *relativeVideoPath;
@property (retain, nonatomic) NSNumber *activityVideoType;
@property (copy, nonatomic) NSString *activityExtraJson;
@property (retain, nonatomic) NSNumber *partOfVisibleStatus;
@property (retain, nonatomic) NSNumber *privacyType;
@property (retain, nonatomic) NSString *partOfVisibleUsersJSON;
@property (nonatomic) BOOL isLargeRatio;
@property (copy, nonatomic) NSString *imageText;
@property (copy, nonatomic) NSDictionary *closeFriendsTrackInfo;
@property (retain, nonatomic) NSArray *samplingFrames;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (copy, nonatomic) NSString *framesTaskID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (copy, nonatomic) NSString *maskShootWay;
@property (nonatomic) BOOL isShootToMomentCamera;
@property (nonatomic) BOOL isMomentNewUserPublishedFirstWork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_createDraftID;
+ (id)p_tick;
+ (id)p_dateFormatter;
+ (id)draftsRootPath;
+ (id)liteCameraRootPath;
+ (void)p_clearCacheImpl;
+ (void)clearCacheIfNeeded;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)setFilterID:(id)arg0;
- (void)setShootWay:(id)arg0;
- (void)setShootEnterFrom:(id)arg0;
- (id)privacyType;
- (id)cameraContext;
- (void)setCameraContext:(id)arg0;
- (void)setActivityVideoType:(id)arg0;
- (id)activityVideoType;
- (id)shootWay;
- (id)shootEnterFrom;
- (id)activityExtraJson;
- (void)setActivityExtraJson:(id)arg0;
- (void)setIsTextMode:(BOOL)arg0;
- (id)draftFolder;
- (id)draftID;
- (void)setPrivacyType:(id)arg0;
- (id)partOfVisibleStatus;
- (void)setPartOfVisibleStatus:(id)arg0;
- (id)imageText;
- (void)setImageText:(id)arg0;
- (id)momentText;
- (BOOL)isPublishSuccess;
- (id)transformPublishModelWithisFormDraft:(BOOL)arg0;
- (double)canvasHeight;
- (BOOL)isMomentNewUserPublishedFirstWork;
- (BOOL)isRandomAlbumUpload;
- (long long)brushContentType;
- (BOOL)isHasTextSticker;
- (id)closeFriendsTrackInfo;
- (void)setIsShootToMomentCamera:(BOOL)arg0;
- (void)setIsPublishSuccess:(BOOL)arg0;
- (void)setPartOfVisibleUsersJSON:(id)arg0;
- (void)setSamplingFrames:(id)arg0;
- (void)setNeedUploadOriginalFrames:(BOOL)arg0;
- (BOOL)isMomentLivePhoto;
- (void)setCloseFriendsTrackInfo:(id)arg0;
- (void)setIsHasTextSticker:(BOOL)arg0;
- (BOOL)isShootToMomentCamera;
- (void)setMomentText:(id)arg0;
- (void)setIsMomentLivePhoto:(BOOL)arg0;
- (void)setCanvasWidth:(double)arg0;
- (void)setCanvasHeight:(double)arg0;
- (BOOL)needUploadOriginalFrames;
- (id)framesTaskID;
- (void)setFramesTaskID:(id)arg0;
- (id)partOfVisibleUsersJSON;
- (id)samplingFrames;
- (void)setIsMomentNewUserPublishedFirstWork:(BOOL)arg0;
- (BOOL)isPainted;
- (void)setIsPainted:(BOOL)arg0;
- (void)setBrushContentType:(long long)arg0;
- (void)setIsRandomAlbumUpload:(BOOL)arg0;
- (id)relativeImagePath;
- (id)relativeOriginalImagePath;
- (id)relativeMultiImagePathArray;
- (id)relativeMultiImagePathArray;
- (id)relativeCoverPath;
- (id)relativeVideoPath;
- (BOOL)isLargeRatio;
- (void)setIsLargeRatio:(BOOL)arg0;
- (id)maskShootWay;
- (void)setMaskShootWay:(id)arg0;
- (id)relativeMultiImagePathMutableArray;
- (void)setRelativeMultiImagePathMutableArray:(id)arg0;
- (id)absoluteImagePath;
- (id)absoluteMultiImagePathArray;
- (id)absoluteVideoPath;
- (id)absoluteOriginalImagePath;
- (id)awe_currentMomentType;
- (id)absoluteCoverPath;
- (id)multiImageArray;
- (BOOL)updateImageWithImage:(id)arg0;
- (void)updateImageArrayWithImageArray:(id)arg0;
- (BOOL)updateOriginalImageWithImage:(id)arg0;
- (BOOL)updateCoverWithImage:(id)arg0;
- (BOOL)updateVideoWithPath:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)image;
- (double)timeStamp;
- (unsigned long long)type;
- (id)locationInfo;
- (BOOL)isValid;
- (double)fileSize;
- (void)setType:(unsigned long long)arg0;
- (void)setLocationInfo:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (BOOL)isUpload;
- (void)setIsUpload:(BOOL)arg0;
- (void)setTimeStamp:(double)arg0;
- (id)filterID;
- (id)tick;
- (BOOL)isTextMode;
- (double)canvasWidth;
- (void)setTick:(id)arg0;

@end