//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveNetworkConfig;

@interface IESLiveNetworkConfig : NSObject <IESLiveNetworkConfig> {
    id<IESLiveNetworkConfig> _delegate;
}

@property (retain, nonatomic) id<IESLiveNetworkConfig> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)requestCommonParams;
- (id)commonPath;
- (id)newPathByPathMapWithOriginalPath:(id)arg0;
- (void)configBOEEnvWithRequestModel:(id)arg0;
- (void)configRequestHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end