//
//     Generated by private class-dump
//

@class UIImage;

@interface CECAlbumIconService : NSObject {
    UIImage *_image;
}

@property (retain, nonatomic) UIImage *image;

+ (id)p_getLatestImageAsset;
+ (id)p_getUIImageWithPHAsset:(id)arg0;
+ (id)getAlbumPlaceHolder;
+ (void)updateAlbumFirstImageViewUI:(id)arg0;
+ (unsigned long long)p_getResourceType;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg0;

@end
