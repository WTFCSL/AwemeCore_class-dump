//
//     Generated by private class-dump
//

@interface IESECLiveRoomParamsBuilder : NSObject

+ (id)ecomLiveParamsFromRoomContextParams:(id)arg0;
+ (id)p_validatePassthroughLogData:(id)arg0 fixExtraBusiness:(BOOL)arg1 originRoomParams:(id)arg2;
+ (void)p_refillEComLiveParams:(id)arg0;
+ (id)p_validateEComLiveParams:(id)arg0;
+ (id)jumpSchemaFromEComLiveParams:(id)arg0;
+ (void)p_filterEcomLiveParams:(id)arg0;
+ (id)p_passthroughParamsForOpenPageFromEComLiveParms:(id)arg0;
+ (id)p_jumpSchemaWithType:(unsigned long long)arg0 productID:(id)arg1 promotionID:(id)arg2 passthroughParams:(id)arg3;
+ (id)p_schemaWithHost:(id)arg0 path:(id)arg1 originParams:(id)arg2;
+ (id)p_removeAndReturnExtraBusinessParams:(id)arg0 originRoomParams:(id)arg1;
+ (id)p_removePassthroughLogDataSensitiveParams:(id)arg0;
+ (id)validateRoomParamsBeforeEnter:(id)arg0;

@end
