//
//     Generated by private class-dump
//

@class NSString, AWEShareWayConfigModel;
@protocol AWEShareChannelConfigProtocol;

@protocol AWEShareChannel <NSObject>

+ (id)channelWithType:(id)arg0;

@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, nonatomic) long long shareCategory;
@property (retain, nonatomic) AWEShareWayConfigModel *configModel;
@property (retain, nonatomic) id<AWEShareChannelConfigProtocol> configDelegate;
@property (readonly, nonatomic) BOOL supportMultipleOperations;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (id)makeItemWithStyle:(unsigned long long)arg0 inView:(id)arg1;
- (long long)shareCategory;
- (void)shareWithCompletion:(id /* block */)arg0;
- (BOOL)supportMultipleOperations;
- (id)shareType;
- (BOOL)prepareWithContext:(id)arg0;
- (id)configDelegate;
- (void)setConfigDelegate:(id)arg0;

@optional

- (BOOL)prepareToShare;
- (void)checkTargetIndexWithContext:(id)arg0;
- (void)updateChannelOriginalIndex:(long long)arg0 realIndex:(long long)arg1;
- (void)prepareToShareWithCompletion:(id /* block */)arg0;
- (id)init;

@end
