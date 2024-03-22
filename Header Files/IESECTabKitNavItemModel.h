//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, IESECTabKitBizConfigModel;

@interface IESECTabKitNavItemModel : MTLModel <MTLJSONSerializing> {
    NSString *_jsonString;
    NSString *_name;
    NSString *_text;
    NSString *_clickURL;
    IESECURLModel *_image;
    IESECTabKitBizConfigModel *_bizConfig;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *clickURL;
@property (retain, nonatomic) IESECURLModel *image;
@property (retain, nonatomic) IESECTabKitBizConfigModel *bizConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)clickURL;
- (id)bizConfig;
- (void)setBizConfig:(id)arg0;
- (void)setClickURL:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)image;
- (void)setImage:(id)arg0;
- (void)setName:(id)arg0;
- (id)text;
- (id)name;
- (id)toJSON;

@end