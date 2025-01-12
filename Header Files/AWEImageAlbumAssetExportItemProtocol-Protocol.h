//
//     Generated by private class-dump
//

@class NSString, ACCImageAlbumImageMediaInfo;

@protocol AWEImageAlbumAssetExportItemProtocol <NSObject>

@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) double imageScale;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) ACCImageAlbumImageMediaInfo *imageTrackInfo;

- (id)imageTrackInfo;
- (double)imageScale;
- (struct CGSize { double x0; double x1; })imageSize;
- (id)identifier;
- (long long)index;

@end
