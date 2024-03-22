//
//     Generated by private class-dump
//

@class NSString;
@protocol HMDNetworkProvider;

@interface HMDPerformanceReporterURLPathProvider : NSObject <HMDURLPathProvider> {
    id<HMDNetworkProvider> _provider;
}

@property (weak, nonatomic) id<HMDNetworkProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLPathProviderURLPath:(id)arg0;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (id)initWithProvider:(id)arg0;

@end
