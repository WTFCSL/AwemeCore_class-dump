//
//     Generated by private class-dump
//

@class NSDictionary, NSArray, NSString;

@interface IESECListKitItemTrackDataModel : MTLModel <MTLJSONSerializing> {
    NSDictionary *_commonData;
    NSArray *_exposureDatas;
    NSDictionary *_adActionData;
}

@property (copy, nonatomic) NSDictionary *commonData;
@property (copy, nonatomic) NSArray *exposureDatas;
@property (copy, nonatomic) NSDictionary *adActionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exposureDatasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCommonData:(id)arg0;
- (id)commonData;
- (id)exposureDatas;
- (id)adActionData;
- (void)setExposureDatas:(id)arg0;
- (void)setAdActionData:(id)arg0;
- (void).cxx_destruct;

@end
