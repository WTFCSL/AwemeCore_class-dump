//
//     Generated by private class-dump
//

@interface BDSCRecommendUtil : NSObject {
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;

+ (id)recommendDeviceTVName;
+ (id)recommendDeviceName;
+ (id)sharedInstance;

- (void)updateRecommendDeviceType:(unsigned long long)arg0;
- (id)recommendDeviceName;
- (unsigned long long)recommendDeviceType;
- (id)recommendDeviceList;
- (id)init;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;

@end
