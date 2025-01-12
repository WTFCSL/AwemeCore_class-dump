//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECMallInnerFeedProductCoverInfoModel : MTLModel <MTLJSONSerializing> {
    NSArray *_images;
    NSArray *_coverVideo;
}

@property (retain, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *coverVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverVideoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (id)coverVideo;
- (void)setCoverVideo:(id)arg0;
- (id)images;
- (void).cxx_destruct;
- (void)setImages:(id)arg0;

@end
