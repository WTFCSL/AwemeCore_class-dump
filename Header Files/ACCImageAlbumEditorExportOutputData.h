//
//     Generated by private class-dump
//

@class NSString, UIImage, ACCImageAlbumImageMediaInfo, ACCImageAlbumExportTrackerModel;

@interface ACCImageAlbumEditorExportOutputData : NSObject {
    NSString *_filePath;
    UIImage *_image;
    long long _index;
    double _imageScale;
    double _compressionQuality;
    ACCImageAlbumImageMediaInfo *_trackInfo;
    ACCImageAlbumExportTrackerModel *_exportTrackerInfo;
    unsigned long long _exportImageType;
    struct CGSize { double width; double height; } _imageSize;
}

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long index;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageScale;
@property (nonatomic) double compressionQuality;
@property (retain, nonatomic) ACCImageAlbumImageMediaInfo *trackInfo;
@property (retain, nonatomic) ACCImageAlbumExportTrackerModel *exportTrackerInfo;
@property (nonatomic) unsigned long long exportImageType;

- (id)exportTrackerInfo;
- (unsigned long long)exportImageType;
- (void)setExportImageType:(unsigned long long)arg0;
- (void)setExportTrackerInfo:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void)setImageScale:(double)arg0;
- (double)imageScale;
- (struct CGSize { double x0; double x1; })imageSize;
- (id)filePath;
- (void).cxx_destruct;
- (id)image;
- (void)setFilePath:(id)arg0;
- (long long)index;
- (void)setImage:(id)arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCompressionQuality:(double)arg0;
- (double)compressionQuality;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;

@end
