//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface AWEIMLiteImageCacheWriteContext : NSObject {
    BOOL _forceCache;
    UIImage *_image;
    NSString *_imageName;
    NSString *_bundleName;
}

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL forceCache;

- (BOOL)forceCache;
- (void)setForceCache:(BOOL)arg0;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (id)image;
- (id)bundleName;
- (void)setBundleName:(id)arg0;
- (void)setImage:(id)arg0;

@end
