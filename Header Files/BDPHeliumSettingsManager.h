//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDPHeliumSettingsManager : NSObject <HeliumSettings> {
    NSDictionary *_heliumSettings;
}

- (BOOL)getBooleanValueByKey:(id)arg0;
- (long long)getIntegerValueByKey:(id)arg0;
- (id)getStringValueByKey:(id)arg0;
- (id)initWithGettingSettings;
- (void).cxx_destruct;

@end