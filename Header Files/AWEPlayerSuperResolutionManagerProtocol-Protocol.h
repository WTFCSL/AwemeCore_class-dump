//
//     Generated by private class-dump
//

@protocol AWEPlayerSuperResolutionManagerProtocol <NSObject>

@property (readonly, nonatomic) BOOL enableSuperResolution;
@property (nonatomic) long long superResolution720Count_preload;
@property (nonatomic) long long unSuperResolution720Count_preload;

- (BOOL)enableSuperResolution;
- (void)configSuperResolutionWithVC:(id)arg0;
- (long long)superResolution720Count_preload;
- (void)setSuperResolution720Count_preload:(long long)arg0;
- (long long)unSuperResolution720Count_preload;
- (void)setUnSuperResolution720Count_preload:(long long)arg0;
- (void)checkSuperResolutionWithVC:(id)arg0;

@end
