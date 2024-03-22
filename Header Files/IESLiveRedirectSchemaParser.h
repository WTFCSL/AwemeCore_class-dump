//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveWebViewService, IESLiveURLSchemaHandler;

@interface IESLiveRedirectSchemaParser : NSObject <IESLiveSchemaParser> {
    id<IESLiveURLSchemaHandler> _schemaHandler;
    id<IESLiveWebViewService> _webviewService;
}

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) id<IESLiveWebViewService> webviewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (id)dictFromQueryString:(id)arg0;
- (void)handleSchemeWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)schemaHandler;
- (void)setSchemaHandler:(id)arg0;
- (void)handleSchemeFromConfigWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)isWebcastUrl:(id)arg0;
- (void)transToRealSchemeWith:(id)arg0 parserParams:(id)arg1;
- (void)reportStatusWith:(id)arg0 category:(id)arg1 extra:(id)arg2;
- (void)reportFailWith:(id)arg0 category:(id)arg1 extra:(id)arg2;
- (id)webviewService;
- (void)setWebviewService:(id)arg0;
- (void).cxx_destruct;

@end