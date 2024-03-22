//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveMessageInteractionModuleFixedCardInterface;

@interface IESECLivePublicScreenFixedCardInterfaceIESECBridger : NSObject <IESECLivePublicScreenFixedCardInterface> {
    id<IESLiveMessageInteractionModuleFixedCardInterface> _protoObj;
}

@property (retain, nonatomic) id<IESLiveMessageInteractionModuleFixedCardInterface> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (void)registerCardWithItemBuilder:(id /* block */)arg0;
- (void)showFixedCardView:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 forCardItem:(id)arg2;
- (void)dismissFixedCardWithName:(id)arg0;
- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;

@end