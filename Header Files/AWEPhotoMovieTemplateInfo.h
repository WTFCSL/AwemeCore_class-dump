//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPhotoMovieTemplateInfo : NSObject {
    NSArray *_templateVideoCoverURL;
    NSArray *_templatePictureCoverURL;
    long long _templateMinMaterial;
    long long _templateMaxMaterial;
    long long _templatePicInputWidth;
    long long _templatePicInputHeight;
    NSString *_templatePicFillMode;
    long long _templateType;
}

@property (copy, nonatomic) NSArray *templateVideoCoverURL;
@property (copy, nonatomic) NSArray *templatePictureCoverURL;
@property (nonatomic) long long templateMinMaterial;
@property (nonatomic) long long templateMaxMaterial;
@property (nonatomic) long long templatePicInputWidth;
@property (nonatomic) long long templatePicInputHeight;
@property (copy, nonatomic) NSString *templatePicFillMode;
@property (nonatomic) long long templateType;

- (void)setTemplateMaxMaterial:(long long)arg0;
- (void)setTemplateMinMaterial:(long long)arg0;
- (long long)templateMaxMaterial;
- (long long)templateMinMaterial;
- (id)templateVideoCoverURL;
- (void)setTemplateVideoCoverURL:(id)arg0;
- (id)templatePictureCoverURL;
- (void)setTemplatePictureCoverURL:(id)arg0;
- (long long)templatePicInputWidth;
- (void)setTemplatePicInputWidth:(long long)arg0;
- (long long)templatePicInputHeight;
- (void)setTemplatePicInputHeight:(long long)arg0;
- (id)templatePicFillMode;
- (void)setTemplatePicFillMode:(id)arg0;
- (void).cxx_destruct;
- (void)setTemplateType:(long long)arg0;
- (long long)templateType;

@end
