//
//     Generated by private class-dump
//

@class BDXBridgeShowActionSheetDetail;

@interface BDXBridgeShowActionSheetMethodResultModel : BDXBridgeModel {
    BDXBridgeShowActionSheetDetail *_detail;
    long long _action;
}

@property (retain, nonatomic) BDXBridgeShowActionSheetDetail *detail;
@property (nonatomic) long long action;

+ (id)actionJSONTransformer;
+ (id)detailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (id)detail;
- (void)setAction:(long long)arg0;
- (long long)action;

@end