//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchNoResultModel : AWEBaseApiModel {
    NSString *_title;
    NSString *_redirectTitle;
    NSString *_schema;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *redirectTitle;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (id)redirectTitle;
- (void)setRedirectTitle:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)schema;
- (void)setTitle:(id)arg0;

@end
