//
//     Generated by private class-dump
//

@class FurionCostRecord, NSMutableDictionary;

@interface FurionSmartServiceMonitorRunDataItem : NSObject {
    FurionCostRecord *_costRunTotal;
    FurionCostRecord *_costRunData;
    long long _runRetCode;
    long long _runSdkRetCode;
    NSMutableDictionary *_runExtData;
}

@property (retain, nonatomic) FurionCostRecord *costRunTotal;
@property (retain, nonatomic) FurionCostRecord *costRunData;
@property (nonatomic) long long runRetCode;
@property (nonatomic) long long runSdkRetCode;
@property (retain, nonatomic) NSMutableDictionary *runExtData;

- (id)costRunTotal;
- (void)setCostRunTotal:(id)arg0;
- (id)costRunData;
- (void)setCostRunData:(id)arg0;
- (long long)runRetCode;
- (void)setRunRetCode:(long long)arg0;
- (long long)runSdkRetCode;
- (void)setRunSdkRetCode:(long long)arg0;
- (id)runExtData;
- (void)setRunExtData:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
