//
//     Generated by private class-dump
//

@class NSString;

@interface IESAdLandingChannelInterceptor : NSObject <IESFalconCustomInterceptor> {
    BOOL _enable;
    NSString *_channelQueryKey;
    NSString *_gurdAccessKey;
}

@property (copy, nonatomic) NSString *gurdAccessKey;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *channelQueryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gurdAccessKey;
- (id)falconMetaDataForURLRequest:(id)arg0;
- (id)initWithGurdAccessKey:(id)arg0;
- (id)channelQueryKey;
- (id)adLandingChannelForURLRequest:(id)arg0;
- (void)setChannelQueryKey:(id)arg0;
- (void)setGurdAccessKey:(id)arg0;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;

@end