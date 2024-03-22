//
//     Generated by private class-dump
//

@class IESECHeadVideoExtraInfoModel, NSString, NSDictionary, IESECImageModel, NSNumber;

@interface IESECHeadVideoModel : MTLModel <MTLJSONSerializing> {
    BOOL _preventContinuePlay;
    NSString *_vid;
    NSString *_itemId;
    NSString *_mainVideoPlayURL;
    NSString *_backupVideoPlayURL;
    NSNumber *_videoWidth;
    NSNumber *_videoHeight;
    NSNumber *_duration;
    NSNumber *_startTime;
    NSNumber *_autoPlay;
    NSNumber *_expireTime;
    NSString *_coverImageURL;
    IESECImageModel *_coverImage;
    NSNumber *_sourceType;
    double _continuePlayTime;
    NSDictionary *_playOptModel;
    long long _tabType;
    IESECHeadVideoExtraInfoModel *_extraInfo;
}

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *mainVideoPlayURL;
@property (copy, nonatomic) NSString *backupVideoPlayURL;
@property (retain, nonatomic) NSNumber *videoWidth;
@property (retain, nonatomic) NSNumber *videoHeight;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *autoPlay;
@property (retain, nonatomic) NSNumber *expireTime;
@property (retain, nonatomic) NSString *coverImageURL;
@property (retain, nonatomic) IESECImageModel *coverImage;
@property (retain, nonatomic) NSNumber *sourceType;
@property (nonatomic) double continuePlayTime;
@property (nonatomic) BOOL preventContinuePlay;
@property (copy, nonatomic) NSDictionary *playOptModel;
@property (nonatomic) long long tabType;
@property (retain, nonatomic) IESECHeadVideoExtraInfoModel *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtraInfo:(id)arg0;
- (id)vid;
- (void)setVid:(id)arg0;
- (long long)tabType;
- (void)setCoverImage:(id)arg0;
- (void)setTabType:(long long)arg0;
- (id)mainVideoPlayURL;
- (void)setMainVideoPlayURL:(id)arg0;
- (id)backupVideoPlayURL;
- (void)setBackupVideoPlayURL:(id)arg0;
- (double)continuePlayTime;
- (void)setContinuePlayTime:(double)arg0;
- (BOOL)preventContinuePlay;
- (void)setPreventContinuePlay:(BOOL)arg0;
- (id)playOptModel;
- (void)setPlayOptModel:(id)arg0;
- (void)setSourceType:(id)arg0;
- (id)sourceType;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (void)setVideoHeight:(id)arg0;
- (id)duration;
- (id)startTime;
- (id)videoHeight;
- (void)setVideoWidth:(id)arg0;
- (id)videoWidth;
- (void)setDuration:(id)arg0;
- (id)expireTime;
- (void)setExpireTime:(id)arg0;
- (id)itemId;
- (void)setCoverImageURL:(id)arg0;
- (id)coverImageURL;
- (id)coverImage;
- (id)autoPlay;
- (void)setAutoPlay:(id)arg0;
- (void)setItemId:(id)arg0;
- (id)extraInfo;

@end
