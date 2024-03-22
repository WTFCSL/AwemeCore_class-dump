//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface AWEDoubleColumnSearchMerchandiseUpdateQueryModel : AWEBaseApiModel {
    NSArray *_renderInfo;
    NSDictionary *_businessInfo;
    NSDictionary *_styleInfo;
    NSDictionary *_rebackParams;
}

@property (copy, nonatomic) NSArray *renderInfo;
@property (copy, nonatomic) NSDictionary *businessInfo;
@property (copy, nonatomic) NSDictionary *styleInfo;
@property (copy, nonatomic) NSDictionary *rebackParams;

+ (id)styleInfoJSONTransformer;
+ (id)renderInfoJSONTransformer;
+ (id)businessInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)businessInfo;
- (void)setBusinessInfo:(id)arg0;
- (void)setRenderInfo:(id)arg0;
- (id)rebackParams;
- (void)setRebackParams:(id)arg0;
- (void).cxx_destruct;
- (id)renderInfo;
- (void)setStyleInfo:(id)arg0;
- (id)styleInfo;

@end
