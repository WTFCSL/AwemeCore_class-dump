//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEToutiaoReadingBarModel : AWEBaseApiModel {
    NSString *_articleID;
    AWEURLModel *_iconURLModel;
    NSString *_articleTitle;
    NSString *_articleOpenURL;
    NSString *_webOpenURL;
    NSString *_extraParamsStr;
    NSString *_openAppSchema;
    NSString *_tag;
    NSString *_abParam;
}

@property (copy, nonatomic) NSString *articleID;
@property (retain, nonatomic) AWEURLModel *iconURLModel;
@property (copy, nonatomic) NSString *articleTitle;
@property (copy, nonatomic) NSString *articleOpenURL;
@property (copy, nonatomic) NSString *webOpenURL;
@property (copy, nonatomic) NSString *extraParamsStr;
@property (copy, nonatomic) NSString *openAppSchema;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *abParam;

+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)articleOpenURL;
- (id)abParam;
- (void)setAbParam:(id)arg0;
- (id)iconURLModel;
- (void)setIconURLModel:(id)arg0;
- (void)setArticleOpenURL:(id)arg0;
- (id)webOpenURL;
- (void)setWebOpenURL:(id)arg0;
- (id)extraParamsStr;
- (void)setExtraParamsStr:(id)arg0;
- (id)openAppSchema;
- (void)setOpenAppSchema:(id)arg0;
- (void).cxx_destruct;
- (id)articleID;
- (void)setArticleID:(id)arg0;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)articleTitle;
- (void)setArticleTitle:(id)arg0;

@end
