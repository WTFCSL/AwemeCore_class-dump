//
//     Generated by private class-dump
//

@class NSString;

@interface AWELinkNoticeModel : AWEBaseApiModel {
    NSString *_title;
    NSString *_content;
    NSString *_schemaURL;
    double _contentW;
    double _contentH;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;

+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaURL;
- (void)setSchemaURL:(id)arg0;
- (void)setContentH:(double)arg0;
- (double)contentH;
- (double)contentW;
- (void)setContentW:(double)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;

@end
