//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface APCDTOImageAlbum : MTLModel <MTLJSONSerializing> {
    BOOL _autoPlay;
    BOOL _shouldForceRecodeImage;
    NSArray *_contents;
    long long _currentIndex;
}

@property (copy, nonatomic) NSArray *selectedUploadAssets;
@property (copy, nonatomic) NSArray *assetsLocalIdentifiers;
@property (copy, nonatomic) NSArray *contents;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL shouldForceRecodeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)appendImageWithPathList:(id)arg0;
- (void)appendImageWithImage:(id)arg0;
- (id)selectedUploadAssets;
- (void)appendImageList:(id)arg0;
- (void)appendImageWithPath:(id)arg0 originPath:(id)arg1;
- (void)appendImageWithResourceModel:(id)arg0;
- (void)setSelectedUploadAssets:(id)arg0;
- (void)setAssetsLocalIdentifiers:(id)arg0;
- (id)assetsLocalIdentifiers;
- (void)appendImages:(id)arg0;
- (BOOL)shouldForceRecodeImage;
- (void)setShouldForceRecodeImage:(BOOL)arg0;
- (void)syncToPublishViewModel:(id)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)contents;
- (void)setContents:(id)arg0;
- (void)setCurrentIndex:(long long)arg0;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;

@end