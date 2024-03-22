//
//     Generated by private class-dump
//

@class NSString;

@interface BDWebImageAllowLogTypeConfig : NSObject <BDModelCustom> {
    double _monitorRate;
    double _errorMonitorRate;
    double _largeSizeRate;
    double _sensibleRate;
}

@property (nonatomic) double monitorRate;
@property (nonatomic) double errorMonitorRate;
@property (nonatomic) double largeSizeRate;
@property (nonatomic) double sensibleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (double)monitorRate;
- (void)setMonitorRate:(double)arg0;
- (double)errorMonitorRate;
- (void)setErrorMonitorRate:(double)arg0;
- (double)largeSizeRate;
- (void)setLargeSizeRate:(double)arg0;
- (double)sensibleRate;
- (void)setSensibleRate:(double)arg0;

@end