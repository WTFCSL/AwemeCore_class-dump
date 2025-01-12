//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AFDMomentCameraDraftModel, NSArray, NSDictionary, NSNumber, AFDMomentCameraContext;

@interface CMCPublishModel : NSObject {
    BOOL _isRandomAlbumUpload;
    BOOL _isShootToMomentCamera;
    BOOL _isBrushPainted;
    BOOL _isHasTextSticker;
    BOOL _needUploadOriginalFrames;
    BOOL _isFromDraft;
    BOOL _isMomentLivePhoto;
    BOOL _isMomentNewUserPublishedFirstWork;
    AFDMomentCameraDraftModel *_draftModel;
    NSString *_publishID;
    double _timeStamp;
    long long _type;
    NSString *_imagePath;
    long long _brushContentType;
    NSArray *_imagePathArray;
    double _canvasWidth;
    double _canvasHeight;
    NSString *_filterID;
    AFDMomentCameraContext *_cameraContext;
    NSDictionary *_locationInfo;
    NSString *_momentText;
    NSString *_originalImagePath;
    NSString *_coverImagePath;
    NSString *_enterFrom;
    NSString *_shootWay;
    NSString *_enterMethod;
    NSString *_shootEnterFrom;
    NSString *_maskShootWay;
    NSString *_contentType;
    NSString *_contentSource;
    NSString *_momentCameraFrameRatio;
    long long _state;
    NSNumber *_partOfVisibleStatus;
    NSNumber *_privacyType;
    NSString *_partOfVisibleUsersJSON;
    NSNumber *_activityVideoType;
    NSString *_activityExtraJson;
    NSDictionary *_closeFriendsTrackInfo;
    NSArray *_originalFramesArray;
    NSString *_framesTaskID;
    NSString *_imageText;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) AFDMomentCameraDraftModel *draftModel;
@property (copy, nonatomic) NSString *publishID;
@property (nonatomic) double timeStamp;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *imagePath;
@property (nonatomic) long long brushContentType;
@property (copy, nonatomic) NSArray *imagePathArray;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (nonatomic) double canvasWidth;
@property (nonatomic) double canvasHeight;
@property (copy, nonatomic) NSString *filterID;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (copy, nonatomic) NSDictionary *locationInfo;
@property (nonatomic) BOOL isRandomAlbumUpload;
@property (copy, nonatomic) NSString *momentText;
@property (copy, nonatomic) NSString *originalImagePath;
@property (copy, nonatomic) NSString *coverImagePath;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (copy, nonatomic) NSString *maskShootWay;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *contentSource;
@property (copy, nonatomic) NSString *momentCameraFrameRatio;
@property (nonatomic) long long state;
@property (nonatomic) BOOL isShootToMomentCamera;
@property (nonatomic) BOOL isBrushPainted;
@property (nonatomic) BOOL isHasTextSticker;
@property (retain, nonatomic) NSNumber *partOfVisibleStatus;
@property (retain, nonatomic) NSNumber *privacyType;
@property (retain, nonatomic) NSString *partOfVisibleUsersJSON;
@property (retain, nonatomic) NSNumber *activityVideoType;
@property (copy, nonatomic) NSString *activityExtraJson;
@property (copy, nonatomic) NSDictionary *closeFriendsTrackInfo;
@property (copy, nonatomic) NSArray *originalFramesArray;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (copy, nonatomic) NSString *framesTaskID;
@property (copy, nonatomic) NSString *imageText;
@property (nonatomic) BOOL isFromDraft;
@property (nonatomic) BOOL isMomentLivePhoto;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isMomentNewUserPublishedFirstWork;

- (id)awemeModel;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setAwemeModel:(id)arg0;
- (id)enterFrom;
- (void)setFilterID:(id)arg0;
- (void)setShootWay:(id)arg0;
- (void)setShootEnterFrom:(id)arg0;
- (id)privacyType;
- (id)imagePathArray;
- (id)cameraContext;
- (void)setCameraContext:(id)arg0;
- (id)originalImagePath;
- (void)setOriginalImagePath:(id)arg0;
- (void)setActivityVideoType:(id)arg0;
- (id)activityVideoType;
- (id)shootWay;
- (id)shootEnterFrom;
- (id)activityExtraJson;
- (void)setActivityExtraJson:(id)arg0;
- (void)setImagePathArray:(id)arg0;
- (void)setPrivacyType:(id)arg0;
- (id)partOfVisibleStatus;
- (void)setPartOfVisibleStatus:(id)arg0;
- (void)setDraftModel:(id)arg0;
- (id)imageText;
- (void)setImageText:(id)arg0;
- (id)momentText;
- (double)canvasHeight;
- (unsigned long long)publishPartOfVisibleStatus;
- (BOOL)isMomentNewUserPublishedFirstWork;
- (id)draftModel;
- (BOOL)isRandomAlbumUpload;
- (long long)brushContentType;
- (BOOL)isHasTextSticker;
- (id)closeFriendsTrackInfo;
- (void)setIsShootToMomentCamera:(BOOL)arg0;
- (BOOL)isFromDraft;
- (void)setPartOfVisibleUsersJSON:(id)arg0;
- (void)setNeedUploadOriginalFrames:(BOOL)arg0;
- (BOOL)isMomentLivePhoto;
- (void)setCloseFriendsTrackInfo:(id)arg0;
- (BOOL)isBrushPainted;
- (void)setIsBrushPainted:(BOOL)arg0;
- (void)setIsHasTextSticker:(BOOL)arg0;
- (BOOL)isShootToMomentCamera;
- (void)setMomentText:(id)arg0;
- (void)setIsMomentLivePhoto:(BOOL)arg0;
- (id)momentCameraFrameRatio;
- (void)setMomentCameraFrameRatio:(id)arg0;
- (void)setCanvasWidth:(double)arg0;
- (void)setCanvasHeight:(double)arg0;
- (id)originalFramesArray;
- (void)setOriginalFramesArray:(id)arg0;
- (BOOL)needUploadOriginalFrames;
- (id)framesTaskID;
- (void)setFramesTaskID:(id)arg0;
- (id)partOfVisibleUsersJSON;
- (void)setIsMomentNewUserPublishedFirstWork:(BOOL)arg0;
- (void)setIsFromDraft:(BOOL)arg0;
- (void)setBrushContentType:(long long)arg0;
- (void)setIsRandomAlbumUpload:(BOOL)arg0;
- (id)maskShootWay;
- (void)setMaskShootWay:(id)arg0;
- (void)setPublishID:(id)arg0;
- (void)setContentType:(id)arg0;
- (id)imagePath;
- (id)contentType;
- (void).cxx_destruct;
- (long long)state;
- (void)setContentSource:(id)arg0;
- (double)timeStamp;
- (void)setState:(long long)arg0;
- (id)contentSource;
- (void)setImagePath:(id)arg0;
- (long long)type;
- (id)locationInfo;
- (void)setType:(long long)arg0;
- (void)setLocationInfo:(id)arg0;
- (void)setTimeStamp:(double)arg0;
- (id)videoPath;
- (id)filterID;
- (id)publishID;
- (id)coverImagePath;
- (void)setCoverImagePath:(id)arg0;
- (double)canvasWidth;

@end
