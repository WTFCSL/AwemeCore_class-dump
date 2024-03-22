//
//     Generated by private class-dump
//

@class NSString, BDPInterstitialAdvertisementImpl;

@interface BDPAppInterstitialAdvertisementImpl : NSObject <BDPPluginAppAdvertisementInterstitialImplProtocol> {
    BDPInterstitialAdvertisementImpl *_adImpl;
}

@property (retain, nonatomic) BDPInterstitialAdvertisementImpl *adImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)operateInterstitialAdWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)adImpl;
- (void)setAdImpl:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end