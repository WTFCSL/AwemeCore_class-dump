//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEUGPendantAdapterProtocol <NSObject>

+ (id)sharedInstance;

@property (readonly, nonatomic) NSString *identify;
@property (nonatomic) long long pendantVersion;

- (id)splitActivityFromRawData:(id)arg0;
- (id)getActivityController;
- (long long)pendantVersion;
- (void)setPendantVersion:(long long)arg0;
- (id)identify;

@optional

- (void)setupObservation;
- (void)clearTaskInfo;

@end