//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveKTVCommonOuterService;

@interface IESECLiveKTVRouterIESECBridger : NSObject <IESECLiveKTVRouter> {
    id<IESLiveKTVCommonOuterService> _protoObj;
}

@property (retain, nonatomic) id<IESLiveKTVCommonOuterService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (BOOL)canShowFlashSaleEntrance;
- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;

@end
