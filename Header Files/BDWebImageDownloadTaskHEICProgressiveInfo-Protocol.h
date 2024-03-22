//
//     Generated by private class-dump
//

@protocol BDWebImageDownloadTaskHEICProgressiveInfo <NSObject>

@property (nonatomic) BOOL needHeicProgressDownloadForThumbnail;
@property (nonatomic) long long isThumbnailExist;
@property (nonatomic) long long minDataLengthForThumbnail;
@property (nonatomic) BOOL isHeicThumbDecodeFired;

- (BOOL)needHeicProgressDownloadForThumbnail;
- (long long)isThumbnailExist;
- (long long)minDataLengthForThumbnail;
- (void)setNeedHeicProgressDownloadForThumbnail:(BOOL)arg0;
- (void)setIsThumbnailExist:(long long)arg0;
- (void)setMinDataLengthForThumbnail:(long long)arg0;
- (BOOL)isHeicThumbDecodeFired;
- (void)setIsHeicThumbDecodeFired:(BOOL)arg0;

@end