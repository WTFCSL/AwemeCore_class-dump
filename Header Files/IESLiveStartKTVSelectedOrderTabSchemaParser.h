//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveStartKTVSelectedOrderTabSchemaParser : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)checkScene:(long long)arg0;
- (void)fastStartWithModel:(id)arg0;
- (BOOL)checkRoomTypeWithModel:(id)arg0;
- (BOOL)checkLiveType:(id)arg0;
- (BOOL)isAnchor;
- (BOOL)isConnected;
- (unsigned long long)currentScene;

@end
