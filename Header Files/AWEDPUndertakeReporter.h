//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEDPUndertakeReporter : NSObject {
    NSArray *_advertisedSchemaScenes;
}

@property (copy, nonatomic) NSArray *advertisedSchemaScenes;

+ (id)sharedInstance;

- (void)reportSchemaIfNeeded:(id)arg0;
- (void)setAdvertisedSchemaScenes:(id)arg0;
- (void)p_reportEcomcfWithQueryParams:(id)arg0;
- (void)p_reportSummerConcertAdvertisedSchema:(id)arg0 path:(id)arg1 queryParams:(id)arg2;
- (void)p_reportRegularAdvertisedSchema:(id)arg0 path:(id)arg1 queryParams:(id)arg2;
- (void)p_reportToAdvertisedUndertake:(id)arg0;
- (id)advertisedSchemaScenes;
- (BOOL)checkMatchedOfKeys:(id)arg0 values:(id)arg1 queryParams:(id)arg2;
- (id)init;
- (void).cxx_destruct;

@end
