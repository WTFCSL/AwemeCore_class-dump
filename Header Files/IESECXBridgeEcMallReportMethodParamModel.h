//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECXBridgeEcMallReportMethodParamModel : BDXBridgeModel {
    NSString *_eventName;
    NSString *_btm;
    NSDictionary *_params;
    NSDictionary *_filterInfo;
    NSDictionary *_bcm;
}

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *filterInfo;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)btm;
- (void)setBtm:(id)arg0;
- (id)bcm;
- (void)setBcm:(id)arg0;
- (void).cxx_destruct;
- (void)setEventName:(id)arg0;
- (id)params;
- (id)eventName;
- (id)filterInfo;
- (void)setFilterInfo:(id)arg0;
- (void)setParams:(id)arg0;

@end
