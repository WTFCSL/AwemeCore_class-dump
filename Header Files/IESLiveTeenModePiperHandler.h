//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveCustomConfig;

@interface IESLiveTeenModePiperHandler : NSObject <IESLivePiperHandlerProtocol> {
    id<IESLiveCustomConfig> _customConfig;
}

@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)customConfig;
- (void)setCustomConfig:(id)arg0;
- (void)registerHandlerWithBridge:(id)arg0;
- (void).cxx_destruct;

@end