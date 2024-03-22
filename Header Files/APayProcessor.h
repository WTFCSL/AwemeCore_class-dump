//
//     Generated by private class-dump
//

@interface APayProcessor : NSObject {
    id /* block */ _routeBlock;
    id /* block */ _tidrouteBlock;
    id /* block */ _inforouteBlock;
}

@property (copy, nonatomic) id /* block */ routeBlock;
@property (copy, nonatomic) id /* block */ tidrouteBlock;
@property (copy, nonatomic) id /* block */ inforouteBlock;

- (id)utdid;
- (void)processOrder:(id)arg0 callback:(id /* block */)arg1;
- (void)processGenTid:(id /* block */)arg0;
- (void)processGetConfigInfo:(id /* block */)arg0;
- (void)procBizReqInfo:(id)arg0 reqType:(id)arg1 callback:(id /* block */)arg2;
- (void)procLogReqInfo:(id)arg0 callback:(id /* block */)arg1;
- (void)procMdapLogReqInfo:(id)arg0 callback:(id /* block */)arg1;
- (void)setTidrouteBlock:(id /* block */)arg0;
- (id)gentidActionDic;
- (void)setInforouteBlock:(id /* block */)arg0;
- (id)infoActionDic;
- (void)setRouteBlock:(id /* block */)arg0;
- (id)mainActionDic;
- (id)reqDataWithBizDict:(id)arg0 actDict:(id)arg1 zipType:(long long *)arg2 info:(struct APTaskInfoData { unsigned char x0[30]; })arg3 newApiVer:(BOOL)arg4;
- (BOOL)needUpdatePublicKeyWithJson:(id)arg0;
- (id)processDataWithJson:(id)arg0;
- (void)callbackWithReqType:(id)arg0 result:(id)arg1;
- (void)postReqWithUrl:(id)arg0 showLoading:(BOOL)arg1 isLogReq:(BOOL)arg2 infoData:(struct APTaskInfoData { unsigned char x0[30]; })arg3 headerDict:(id)arg4 requestData:(id)arg5 success:(id /* block */)arg6 fail:(id /* block */)arg7;
- (id /* block */)tidrouteBlock;
- (id /* block */)inforouteBlock;
- (id /* block */)routeBlock;
- (id)reqDataWithLogDict:(id)arg0 zipType:(long long *)arg1 info:(struct APTaskInfoData { unsigned char x0[30]; })arg2;
- (id)gzipCompressWithData:(id)arg0;
- (long long)getZipTypeFromHeader:(id)arg0;
- (id)processRepData:(id)arg0 zipType:(long long)arg1 infoData:(struct APTaskInfoData { unsigned char x0[30]; })arg2 isLogReq:(BOOL)arg3;
- (BOOL)shouldDismissLoading:(id)arg0;
- (id)netUtilDic:(BOOL)arg0;
- (id)reqDataWithProto:(id)arg0 andParam:(id)arg1 andZipType:(long long *)arg2 info:(struct APTaskInfoData { unsigned char x0[30]; })arg3;
- (id)enCryptGzipData:(id)arg0 zipType:(long long *)arg1 info:(struct APTaskInfoData { unsigned char x0[30]; })arg2;
- (BOOL)isActionNotNeedWifiInfo:(id)arg0;
- (id)gzipDecompressWithData:(id)arg0;
- (id)deCryptGzipData:(id)arg0 zipType:(long long)arg1 info:(struct APTaskInfoData { unsigned char x0[30]; })arg2 isLogReq:(BOOL)arg3;
- (id)parseResponseDict:(id)arg0;
- (id)analyseJSCommand:(id)arg0;
- (id)processJSCommand:(id)arg0;
- (void)processAuthInfo:(id)arg0 callback:(id /* block */)arg1;
- (void)processLog:(id)arg0 callback:(id /* block */)arg1;
- (void)processMdapLog:(id)arg0 callback:(id /* block */)arg1;
- (void)setDeviceInfo:(id)arg0;
- (void).cxx_destruct;
- (id)appInfo;

@end
