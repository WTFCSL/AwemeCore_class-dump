//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveADPopupSchemaParser : NSObject <IESLiveSchemaParser> {
    id<IESLiveURLSchemaHandler> _urlSchemaHandler;
}

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)urlSchemaHandler;
- (void)setUrlSchemaHandler:(id)arg0;
- (void).cxx_destruct;

@end
