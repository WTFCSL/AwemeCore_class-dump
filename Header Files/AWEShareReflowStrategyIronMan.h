//
//     Generated by private class-dump
//

@class NSString, AWEShareTokenHandlerResponseModel;

@interface AWEShareReflowStrategyIronMan : NSObject <AWEShareReflowStrategy> {
    unsigned long long _schemaType;
    AWEShareTokenHandlerResponseModel *_model;
    NSString *_longURL;
}

@property (nonatomic) unsigned long long schemaType;
@property (retain, nonatomic) AWEShareTokenHandlerResponseModel *model;
@property (copy, nonatomic) NSString *longURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSchemaType:(unsigned long long)arg0;
- (id)exchangeAvailableSchemaWithOriginSchema:(id)arg0;
- (BOOL)shouldAvoidSamePageWithModel:(id)arg0;
- (BOOL)enableTransferDirectly;
- (BOOL)shouldDelayTokenFind;
- (void)transferWithModel:(id)arg0 params:(id)arg1 longURL:(id)arg2 tokenFromType:(long long)arg3;
- (void)configReflowCardWithModel:(id)arg0 tokenFromType:(long long)arg1 trackParams:(id)arg2 reportParams:(id)arg3 turnToShareBlock:(id /* block */)arg4 reshowCardViewBlock:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)initWithModel:(id)arg0 longURL:(id)arg1;
- (void)setLongURL:(id)arg0;
- (id)longURL;
- (void)showIronManAlertWithAppInfo:(id)arg0 URL:(id)arg1 platformType:(id)arg2 tokenParams:(id)arg3;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)descriptionText;
- (unsigned long long)schemaType;
- (id)tokenType;

@end
