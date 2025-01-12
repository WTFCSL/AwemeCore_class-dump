//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEShareLinkModel : NSObject {
    BOOL _shouldGetPersistentShortURL;
    NSString *_textForCopy;
    NSString *_textFormatForCopy;
    NSString *_reportUrl;
    NSString *_belong;
    NSString *_descriptionPrefix;
    NSDictionary *_activityInfo;
    NSDictionary *_extraParams;
}

@property (copy, nonatomic) NSString *textForCopy;
@property (copy, nonatomic) NSString *textFormatForCopy;
@property (copy, nonatomic) NSString *reportUrl;
@property (copy, nonatomic) NSString *belong;
@property (copy, nonatomic) NSString *descriptionPrefix;
@property (nonatomic) BOOL shouldGetPersistentShortURL;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setActivityInfo:(id)arg0;
- (id)reportUrl;
- (void)setTextFormatForCopy:(id)arg0;
- (id)textForCopy;
- (void)setReportUrl:(id)arg0;
- (id)textFormatForCopy;
- (void)setBelong:(id)arg0;
- (void)setTextForCopy:(id)arg0;
- (void)setShouldGetPersistentShortURL:(BOOL)arg0;
- (id)belong;
- (BOOL)shouldGetPersistentShortURL;
- (id)descriptionPrefix;
- (void).cxx_destruct;
- (void)setDescriptionPrefix:(id)arg0;
- (id)activityInfo;

@end
