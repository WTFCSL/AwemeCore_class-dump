//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeShowLunaDiversionPopupMethodResultModel : BDXBridgeModel {
    NSString *_click_area;
    long long _active_pop_status;
}

@property (copy, nonatomic) NSString *click_area;
@property (nonatomic) long long active_pop_status;

+ (id)active_pop_statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setActive_pop_status:(long long)arg0;
- (long long)active_pop_status;
- (void)setClick_area:(id)arg0;
- (id)click_area;
- (void).cxx_destruct;

@end