//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveScreenModule;

@interface IESECLiveScreenModuleIESECBridger : NSObject <IESECLiveScreenModule> {
    id<IESLiveScreenModule> _protoObj;
}

@property (retain, nonatomic) id<IESLiveScreenModule> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (long long)clearCardStatus;
- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;
- (BOOL)isClear;

@end
