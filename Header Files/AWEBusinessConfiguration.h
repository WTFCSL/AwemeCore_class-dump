//
//     Generated by private class-dump
//

@class NSString, AWEPerfResourceCleanConfiguration;

@interface AWEBusinessConfiguration : NSObject {
    BOOL _generalCleaningEnable;
    long long _version;
    NSString *_topBusinessLine;
    NSString *_businessLine;
    long long _thresholdSize;
    NSString *_resourceHostingPlatform;
    unsigned long long _inDomain;
    AWEPerfResourceCleanConfiguration *_cleaningConfig;
}

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *topBusinessLine;
@property (copy, nonatomic) NSString *businessLine;
@property (nonatomic) long long thresholdSize;
@property (copy, nonatomic) NSString *resourceHostingPlatform;
@property (nonatomic) unsigned long long inDomain;
@property (nonatomic) BOOL generalCleaningEnable;
@property (retain, nonatomic) AWEPerfResourceCleanConfiguration *cleaningConfig;

- (long long)thresholdSize;
- (void)setThresholdSize:(long long)arg0;
- (id)topBusinessLine;
- (void)setTopBusinessLine:(id)arg0;
- (id)businessLine;
- (void)setBusinessLine:(id)arg0;
- (id)resourceHostingPlatform;
- (void)setResourceHostingPlatform:(id)arg0;
- (unsigned long long)inDomain;
- (void)setInDomain:(unsigned long long)arg0;
- (BOOL)generalCleaningEnable;
- (void)setGeneralCleaningEnable:(BOOL)arg0;
- (id)cleaningConfig;
- (void)setCleaningConfig:(id)arg0;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (long long)version;

@end
