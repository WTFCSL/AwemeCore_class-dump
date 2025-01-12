//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedContactPermissionCardUIConfigModel : MTLModel <MTLJSONSerializing> {
    NSString *_backgroundUrl;
    NSString *_imageUrl;
    NSString *_title;
    NSString *_subTitle;
    NSString *_positiveBtnText;
    NSString *_negativeBtnText;
}

@property (copy, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *positiveBtnText;
@property (copy, nonatomic) NSString *negativeBtnText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)backgroundUrl;
- (void)setBackgroundUrl:(id)arg0;
- (id)positiveBtnText;
- (void)setPositiveBtnText:(id)arg0;
- (id)negativeBtnText;
- (void)setNegativeBtnText:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;

@end
