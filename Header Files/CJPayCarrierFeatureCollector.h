//
//     Generated by private class-dump
//

@class NSDictionary, NSString;
@protocol CJPayFeatureRecord;

@interface CJPayCarrierFeatureCollector : NSObject <CJPayFeatureCollector> {
    id<CJPayFeatureRecord> recordManager;
    NSDictionary *_carrierTypeNameDict;
}

@property (retain, nonatomic) NSDictionary *carrierTypeNameDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recordManager;
- (void)setRecordManager:(id)arg0;
- (id)carrierNameForCarrierType:(unsigned long long)arg0;
- (id)getCarrier;
- (void)beginCollect;
- (void)endCollect;
- (id)buildDeviceParams;
- (id)carrierTypeNameDict;
- (void)setCarrierTypeNameDict:(id)arg0;
- (id)carrierName;
- (void).cxx_destruct;

@end