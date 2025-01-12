//
//     Generated by private class-dump
//

@class BDPSchema, BDPUniqueID, BDPTimorLaunchParam;

@interface BDPAheadBooter : NSObject {
    BDPUniqueID *_uniqueID;
    BDPTimorLaunchParam *_launchParam;
    BDPSchema *_schema;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPTimorLaunchParam *launchParam;
@property (retain, nonatomic) BDPSchema *schema;

- (void)setLaunchParam:(id)arg0;
- (id)launchParam;
- (id)initWithUniqueID:(id)arg0 schema:(id)arg1 launchParam:(id)arg2;
- (void)prepareEnvironment;
- (void)aheadBoot;
- (void)prepareLocationWithCommon:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)schema;

@end
