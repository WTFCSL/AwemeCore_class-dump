//
//     Generated by private class-dump
//

@class NSURL, NSNumber, NSString;

@interface AWEMediaDownloadResultInnerItem : AWEMediaDownloadResultItem {
    BOOL _hasUploadCache;
    BOOL _hasPlayerCache;
    unsigned long long _itemType;
    NSURL *_livePhotoImageFileURL;
    NSURL *_downloadResponseURL;
    NSNumber *_downloadHttpCode;
    double _downloadStartTime;
    double _watermarkStartTime;
    NSString *_downloadUUID;
}

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSURL *livePhotoImageFileURL;
@property (retain, nonatomic) NSURL *downloadResponseURL;
@property (retain, nonatomic) NSNumber *downloadHttpCode;
@property (nonatomic) double downloadStartTime;
@property (nonatomic) double watermarkStartTime;
@property (copy, nonatomic) NSString *downloadUUID;
@property (nonatomic) BOOL hasUploadCache;
@property (nonatomic) BOOL hasPlayerCache;

- (BOOL)hasUploadCache;
- (BOOL)hasPlayerCache;
- (void)setDownloadResponseURL:(id)arg0;
- (void)setDownloadHttpCode:(id)arg0;
- (void)setHasUploadCache:(BOOL)arg0;
- (void)setHasPlayerCache:(BOOL)arg0;
- (id)livePhotoImageFileURL;
- (void)setLivePhotoImageFileURL:(id)arg0;
- (void)setWatermarkStartTime:(double)arg0;
- (double)watermarkStartTime;
- (id)downloadResponseURL;
- (id)downloadHttpCode;
- (void)setDownloadUUID:(id)arg0;
- (id)downloadUUID;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (double)downloadStartTime;
- (void)setDownloadStartTime:(double)arg0;

@end
