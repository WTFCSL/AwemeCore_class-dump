//
//     Generated by private class-dump
//

@class NSString;

@interface AWECampaignKPopupButtonItem : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_color;
    NSString *_imageURL;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *imageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)color;
- (void).cxx_destruct;
- (void)setImageURL:(id)arg0;
- (id)imageURL;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setColor:(id)arg0;

@end