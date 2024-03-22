//
//     Generated by private class-dump
//

@interface CJPayBaseRequest : NSObject

+ (id)apiPath;
+ (void)startRequestWithUrl:(id)arg0 serializeType:(unsigned long long)arg1 requestParams:(id)arg2 callback:(id /* block */)arg3;
+ (id)bdpayDeskServerUrlString;
+ (id)apiMethod;
+ (id)bdpayH5DeskServerHostString;
+ (id)deskServerHostString;
+ (id)buildBaseParams;
+ (id)buildServerUrl;
+ (void)startRequestWithUrl:(id)arg0 requestParams:(id)arg1 callback:(id /* block */)arg2;
+ (id)deskServerUrlString;
+ (id)getGBDPayConfigHost;
+ (void)setGBDPayConfigHost:(id)arg0;
+ (id)intergratedConfigHost;
+ (id)cashierServerUrlString;
+ (id)gConfigHost;
+ (id)customDeskServerUrlString;
+ (id)jhHostString;
+ (id)superPayServerUrlString;
+ (id)getDyPayConfigHost;
+ (id)dypayDeskServerUrlString;
+ (id)dypayH5DeskServerHostString;
+ (id)buildDyPayServerUrl;
+ (void)setDyPayConfigHost:(id)arg0;
+ (id)getOuterConfigHost;
+ (id)outerDeskServerUrlString;
+ (id)outerH5DeskServerHostString;
+ (id)buildOuterServerUrl;
+ (void)setOuterConfigHost:(id)arg0;
+ (id)buildBaseParamsWithVersion:(id)arg0 needTimestamp:(BOOL)arg1;
+ (void)startRequestWithUrl:(id)arg0 method:(id)arg1 requestParams:(id)arg2 headerFields:(id)arg3 serializeType:(unsigned long long)arg4 callback:(id /* block */)arg5;
+ (void)startRequestWithUrl:(id)arg0 method:(id)arg1 requestParams:(id)arg2 headerFields:(id)arg3 serializeType:(unsigned long long)arg4 callback:(id /* block */)arg5 needCommonParams:(BOOL)arg6;
+ (void)startRequestWithUrl:(id)arg0 method:(id)arg1 requestParams:(id)arg2 headerFields:(id)arg3 serializeType:(unsigned long long)arg4 callback:(id /* block */)arg5 needCommonParams:(BOOL)arg6 highPriority:(BOOL)arg7 enableHttpCache:(BOOL)arg8;
+ (void)monitor:(id)arg0 error:(id)arg1 response:(id)arg2;
+ (void)eventTrack:(id)arg0 costTime:(double)arg1 error:(id)arg2 response:(id)arg3;
+ (void)monitorRequestBizResult:(id)arg0 costTime:(double)arg1 error:(id)arg2 response:(id)arg3 responseJsonDic:(id)arg4;
+ (void)startRequestWithUrl:(id)arg0 type:(id)arg1 requestParams:(id)arg2 header:(id)arg3 callback:(id /* block */)arg4;
+ (id)p_buildMonitorDataWith:(id)arg0 error:(id)arg1 response:(id)arg2;
+ (id)p_analyseBizResult:(id)arg0;
+ (void)exampleMonitor:(id)arg0 error:(id)arg1 response:(id)arg2;
+ (void)setGConfigHost:(id)arg0;

@end