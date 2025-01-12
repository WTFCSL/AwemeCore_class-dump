//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface ACCMVTemplateInfo : NSObject {
    NSArray *_videoCoverURLs;
    NSArray *_photoCoverURLs;
    long long _minMaterial;
    long long _maxMaterial;
    long long _photoInputWidth;
    long long _photoInputHeight;
    NSString *_photoFillMode;
    long long _templateType;
}

@property (copy, nonatomic) NSArray *videoCoverURLs;
@property (copy, nonatomic) NSArray *photoCoverURLs;
@property (nonatomic) long long minMaterial;
@property (nonatomic) long long maxMaterial;
@property (nonatomic) long long photoInputWidth;
@property (nonatomic) long long photoInputHeight;
@property (copy, nonatomic) NSString *photoFillMode;
@property (nonatomic) long long templateType;

+ (id)MVTemplateInfoFromEffect:(id)arg0 coverURLPrefixs:(id)arg1;

- (long long)photoInputWidth;
- (long long)photoInputHeight;
- (id)photoFillMode;
- (void)setVideoCoverURLs:(id)arg0;
- (void)setPhotoCoverURLs:(id)arg0;
- (void)setMinMaterial:(long long)arg0;
- (void)setMaxMaterial:(long long)arg0;
- (void)setPhotoInputWidth:(long long)arg0;
- (void)setPhotoInputHeight:(long long)arg0;
- (void)setPhotoFillMode:(id)arg0;
- (id)videoCoverURLs;
- (id)photoCoverURLs;
- (long long)minMaterial;
- (long long)maxMaterial;
- (void).cxx_destruct;
- (void)setTemplateType:(long long)arg0;
- (long long)templateType;

@end
