//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWELiveSelectMediaVideoInfoModel;

@interface AWELiveSelectMediaMediaListModel : IESLiveBridgeModel {
    NSString *_fileName;
    NSNumber *_fileSize;
    NSString *_absolutePath;
    NSString *_fileUri;
    long long _mediaType;
    AWELiveSelectMediaVideoInfoModel *_videoInfo;
    NSNumber *_height;
    NSNumber *_width;
}

@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSNumber *fileSize;
@property (copy, nonatomic) NSString *absolutePath;
@property (copy, nonatomic) NSString *fileUri;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) AWELiveSelectMediaVideoInfoModel *videoInfo;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;

+ (id)modelCustomPropertyMapper;

- (id)videoInfo;
- (void)setVideoInfo:(id)arg0;
- (BOOL)modelCustomTransformToDictionary:(id)arg0;
- (id)fileUri;
- (void)setFileUri:(id)arg0;
- (void)setMediaType:(long long)arg0;
- (void).cxx_destruct;
- (id)height;
- (id)fileName;
- (long long)mediaType;
- (void)setFileName:(id)arg0;
- (id)fileSize;
- (void)setFileSize:(id)arg0;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (id)absolutePath;
- (void)setAbsolutePath:(id)arg0;

@end