//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESLiveAnchorFunctionRegistry : NSObject <IESLiveAnchorFunctionRegistryInterface> {
    NSMutableDictionary *_registerMap;
}

@property (retain, nonatomic) NSMutableDictionary *registerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)registerMap;
- (void)setRegisterMap:(id)arg0;
- (void)registerHandler:(id)arg0 forInteractID:(unsigned long long)arg1;
- (void)registerHandler:(id)arg0 forInteractIDs:(id)arg1;
- (id)handlerWithInteractID:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setup;

@end