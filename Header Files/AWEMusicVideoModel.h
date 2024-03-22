//
//     Generated by private class-dump
//

@class NSString, AWEMusicVideoEngineModel, AWEMusicVideoModelPreview, NSNumber;

@interface AWEMusicVideoModel : NSObject {
    NSString *_mediaID;
    AWEMusicVideoEngineModel *_videoEngineModel;
    NSNumber *_expireTime;
    NSString *_url;
    AWEMusicVideoModelPreview *_preview;
    long long _preRiskResult;
    NSString *_preRiskResultLogId;
    long long _riskResult;
    NSString *_riskResultLogId;
}

@property (copy, nonatomic) NSString *mediaID;
@property (retain, nonatomic) AWEMusicVideoEngineModel *videoEngineModel;
@property (retain, nonatomic) NSNumber *expireTime;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) AWEMusicVideoModelPreview *preview;
@property (nonatomic) long long preRiskResult;
@property (copy, nonatomic) NSString *preRiskResultLogId;
@property (nonatomic) long long riskResult;
@property (copy, nonatomic) NSString *riskResultLogId;

- (long long)riskResult;
- (void)setRiskResult:(long long)arg0;
- (id)videoEngineModel;
- (void)setVideoEngineModel:(id)arg0;
- (void)setPreRiskResult:(long long)arg0;
- (id)initWithMediaID:(id)arg0 videoModel:(id)arg1 url:(id)arg2 expireTime:(long long)arg3 preivew:(id)arg4;
- (long long)preRiskResult;
- (id)preRiskResultLogId;
- (void)setPreRiskResultLogId:(id)arg0;
- (id)riskResultLogId;
- (void)setRiskResultLogId:(id)arg0;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (id)preview;
- (void)setUrl:(id)arg0;
- (void)setPreview:(id)arg0;
- (id)url;
- (id)expireTime;
- (BOOL)isVerified;
- (void)setExpireTime:(id)arg0;
- (void)setMediaID:(id)arg0;
- (id)mediaID;

@end
