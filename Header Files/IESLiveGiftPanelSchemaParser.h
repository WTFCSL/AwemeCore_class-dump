//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGiftPanelSchemaParser : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)roomService;
- (BOOL)p_isVsModule;
- (BOOL)p_isVSRoom;

@end
