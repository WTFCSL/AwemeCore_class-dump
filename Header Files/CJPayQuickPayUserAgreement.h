//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayQuickPayUserAgreement : JSONModel {
    BOOL _defaultChoose;
    NSString *_contentURL;
    NSString *_title;
}

@property (copy, nonatomic) NSString *contentURL;
@property (nonatomic) BOOL defaultChoose;
@property (copy, nonatomic) NSString *title;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)defaultChoose;
- (void)setDefaultChoose:(BOOL)arg0;
- (void).cxx_destruct;
- (id)contentURL;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setContentURL:(id)arg0;

@end
