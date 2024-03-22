//
//     Generated by private class-dump
//

@class NSURL;

@interface BDBackFill : NSObject {
    unsigned long long _imageType;
    NSURL *_thumbImageURL;
    NSURL *_previewImageURL;
    NSURL *_originalImageURL;
}

@property (nonatomic) unsigned long long imageType;
@property (retain, nonatomic) NSURL *thumbImageURL;
@property (retain, nonatomic) NSURL *previewImageURL;
@property (retain, nonatomic) NSURL *originalImageURL;

- (id)thumbImageURL;
- (void)setThumbImageURL:(id)arg0;
- (void)setPreviewImageURL:(id)arg0;
- (id)originalImageURL;
- (void)setOriginalImageURL:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)imageType;
- (void)setImageType:(unsigned long long)arg0;
- (id)previewImageURL;

@end
