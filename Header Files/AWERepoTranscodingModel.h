//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSURL, NSNumber;
@protocol ACCPublishRepository;

@interface AWERepoTranscodingModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryCompareProtocol, ACCRepositoryTrackContextDeprecated, NSCopying, ACCRepositoryContextDeprecated, ACCRepositoryRequestParamsDeprecated> {
    BOOL _isReencode;
    BOOL _isByteVC1;
    int _encodeBitsType;
    int _encodeHdrType;
    id<ACCPublishRepository> repoDeprecated;
    unsigned long long _bitRate;
    unsigned long long _outputWidth;
    unsigned long long _outputHeight;
    NSURL *_uploadURL;
    long long _uploadFileSize;
    double _exportVideoDuration;
    NSNumber *_uploadSpeedIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isReencode;
@property (nonatomic) BOOL isByteVC1;
@property (nonatomic) unsigned long long bitRate;
@property (nonatomic) unsigned long long outputWidth;
@property (nonatomic) unsigned long long outputHeight;
@property (retain, nonatomic) NSURL *uploadURL;
@property (nonatomic) long long uploadFileSize;
@property (readonly, nonatomic) NSMutableDictionary *videoComposeQualityTraceInfo;
@property (readonly, nonatomic) NSMutableDictionary *videoQualityTraceInfo;
@property (nonatomic) double exportVideoDuration;
@property (nonatomic) int encodeBitsType;
@property (nonatomic) int encodeHdrType;
@property (retain, nonatomic) NSNumber *uploadSpeedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

- (void)setEncodeBitsType:(int)arg0;
- (void)setEncodeHdrType:(int)arg0;
- (id)initWithDraft:(id)arg0;
- (int)encodeBitsType;
- (int)encodeHdrType;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)acc_publishTrackEventParams:(id)arg0;
- (id)repoDeprecated;
- (void)setRepoDeprecated:(id)arg0;
- (void)setIsReencode:(BOOL)arg0;
- (void)setIsByteVC1:(BOOL)arg0;
- (BOOL)isReencode;
- (id)videoComposeQualityTraceInfo;
- (id)videoQualityTraceInfo;
- (void)setUploadSpeedIndex:(id)arg0;
- (id)uploadSpeedIndex;
- (double)exportVideoDuration;
- (void)setExportVideoDuration:(double)arg0;
- (id)customEidtStatusCompareParams:(id)arg0 scene:(long long)arg1;
- (BOOL)isByteVC1;
- (unsigned long long)bitRate;
- (void).cxx_destruct;
- (void)setOutputWidth:(unsigned long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setUploadURL:(id)arg0;
- (void)setOutputHeight:(unsigned long long)arg0;
- (id)uploadURL;
- (unsigned long long)outputHeight;
- (unsigned long long)outputWidth;
- (void)setBitRate:(unsigned long long)arg0;
- (long long)uploadFileSize;
- (void)setUploadFileSize:(long long)arg0;

@end