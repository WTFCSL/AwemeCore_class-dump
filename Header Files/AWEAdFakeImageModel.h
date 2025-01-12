//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEURLModel;

@interface AWEAdFakeImageModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_imageType;
    AWEURLModel *_imageURL;
}

@property (copy, nonatomic) NSNumber *imageType;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setImageURL:(id)arg0;
- (id)imageType;
- (id)imageURL;
- (void)setImageType:(id)arg0;

@end
