//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEMusicDetailPromotionModel : MTLModel <MTLJSONSerializing> {
    NSString *_desc;
    NSString *_schemaURL;
    AWEURLModel *_imageURL;
    AWEURLModel *_darkImageURL;
}

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) AWEURLModel *darkImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaURL;
- (void)setSchemaURL:(id)arg0;
- (id)darkImageURL;
- (void)setDarkImageURL:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setImageURL:(id)arg0;
- (id)imageURL;
- (void)setDesc:(id)arg0;

@end
