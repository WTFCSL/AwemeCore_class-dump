//
//     Generated by private class-dump
//

@class NSString, AWEStudioCaptionQueryModel;

@interface AWEStudioCaptionCommitModel : ACCBaseApiModel {
    BOOL _mandarinTranslationDisabled;
    AWEStudioCaptionQueryModel *_videoCaption;
    NSString *_language;
}

@property (retain, nonatomic) AWEStudioCaptionQueryModel *videoCaption;
@property (nonatomic) BOOL mandarinTranslationDisabled;
@property (retain, nonatomic) NSString *language;

+ (id)captionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)videoCaption;
- (BOOL)mandarinTranslationDisabled;
- (void)setVideoCaption:(id)arg0;
- (void)setMandarinTranslationDisabled:(BOOL)arg0;
- (void).cxx_destruct;
- (id)language;
- (void)setLanguage:(id)arg0;

@end
