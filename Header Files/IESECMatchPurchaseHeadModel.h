//
//     Generated by private class-dump
//

@class NSArray, IESECURLModel, NSString;

@interface IESECMatchPurchaseHeadModel : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_coverImage;
    NSArray *_anchors;
}

@property (retain, nonatomic) IESECURLModel *coverImage;
@property (retain, nonatomic) NSArray *anchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverImage:(id)arg0;
- (void).cxx_destruct;
- (id)coverImage;
- (id)anchors;
- (void)setAnchors:(id)arg0;

@end
