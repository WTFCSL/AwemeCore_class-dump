//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, UIImage;

@interface ACCNLEImageWrapperNLEResourceManager : NSObject <ResourceHandlerDelegate> {
    NSString *_unzipPath;
    NSString *_userSelectedImagePath;
    UIImage *_currentEditImage;
    NSMutableDictionary *_allCachedResources;
}

@property (retain, nonatomic) NSMutableDictionary *allCachedResources;
@property (retain, nonatomic) NSString *unzipPath;
@property (retain, nonatomic) NSString *userSelectedImagePath;
@property (retain, nonatomic) UIImage *currentEditImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getFontFromDirectory:(id)arg0;
+ (BOOL)isBuildinResource:(id)arg0;
+ (id)templateCacheDir;
+ (id)getRemoteDownloadedFilePathForBuildinResource:(id)arg0 templateZipPath:(id)arg1;

- (id)getResource:(id)arg0;
- (id)getUIImage:(id)arg0;
- (id)userSelectedImagePath;
- (void)addTemplateResourceCache:(id)arg0;
- (void)setUnzipPath:(id)arg0;
- (void)setUserSelectedImagePath:(id)arg0;
- (void)setCurrentEditImage:(id)arg0;
- (void)setAllCachedResources:(id)arg0;
- (id)allCachedResources;
- (id)currentEditImage;
- (id)init;
- (void).cxx_destruct;
- (id)unzipPath;

@end