//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEBatManOperationModel : MTLModel <MTLJSONSerializing> {
    NSString *_appId;
    NSString *_title;
    NSString *_buttonTitle;
    NSString *_imageUrl;
    NSString *_buttonBgColor;
    NSDictionary *_appData;
    long long _direction;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *buttonBgColor;
@property (copy, nonatomic) NSDictionary *appData;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setButtonBgColor:(id)arg0;
- (id)buttonBgColor;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (long long)direction;
- (id)title;
- (id)buttonTitle;
- (id)appId;
- (void)setDirection:(long long)arg0;
- (void)setTitle:(id)arg0;
- (void)setButtonTitle:(id)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (void)setAppData:(id)arg0;
- (id)appData;

@end