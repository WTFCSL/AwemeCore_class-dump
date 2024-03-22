//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWESpecialRichAwemeProductLabelModel : AWEBaseApiModel {
    NSString *_commentPrefix;
    NSString *_productName;
    NSString *_productAttitude;
    AWEURLModel *_attitudeIcon;
    NSString *_anchorSchema;
}

@property (copy, nonatomic) NSString *commentPrefix;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *productAttitude;
@property (retain, nonatomic) AWEURLModel *attitudeIcon;
@property (copy, nonatomic) NSString *anchorSchema;

+ (id)attitudeIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)attitudeIcon;
- (void)setAttitudeIcon:(id)arg0;
- (id)commentPrefix;
- (void)setCommentPrefix:(id)arg0;
- (id)productAttitude;
- (void)setProductAttitude:(id)arg0;
- (id)anchorSchema;
- (void)setAnchorSchema:(id)arg0;
- (id)productName;
- (void)setProductName:(id)arg0;
- (void).cxx_destruct;

@end
