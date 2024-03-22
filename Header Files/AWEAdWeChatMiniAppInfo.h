//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEAdWeChatMiniAppInfo : MTLModel <MTLJSONSerializing> {
    BOOL _isOpenWechatMiniAppFailed;
    NSString *_advID;
    NSString *_siteID;
    NSString *_wechatMiniAppSdk;
    NSString *_wechatMiniAppLink;
    NSNumber *_wechatSkipType;
    NSNumber *_wechatOpenMethod;
    NSNumber *_wechatAppType;
    NSString *_userName;
    NSString *_path;
    NSNumber *_openErrorType;
}

@property (copy, nonatomic) NSString *advID;
@property (copy, nonatomic) NSString *siteID;
@property (copy, nonatomic) NSString *wechatMiniAppSdk;
@property (copy, nonatomic) NSString *wechatMiniAppLink;
@property (retain, nonatomic) NSNumber *wechatSkipType;
@property (retain, nonatomic) NSNumber *wechatOpenMethod;
@property (retain, nonatomic) NSNumber *wechatAppType;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL isOpenWechatMiniAppFailed;
@property (retain, nonatomic) NSNumber *openErrorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)advID;
- (id)siteID;
- (void)setAdvID:(id)arg0;
- (void)setSiteID:(id)arg0;
- (id)wechatSkipType;
- (void)setWechatSkipType:(id)arg0;
- (id)wechatOpenMethod;
- (void)setWechatOpenMethod:(id)arg0;
- (BOOL)isOpenWechatMiniAppFailed;
- (id)wechatMiniAppSdk;
- (void)setWechatMiniAppSdk:(id)arg0;
- (id)wechatMiniAppLink;
- (void)setWechatMiniAppLink:(id)arg0;
- (id)wechatAppType;
- (void)setWechatAppType:(id)arg0;
- (void)setOpenErrorType:(id)arg0;
- (void)setIsOpenWechatMiniAppFailed:(BOOL)arg0;
- (id)openErrorType;
- (void)setPath:(id)arg0;
- (id)userName;
- (void).cxx_destruct;
- (id)path;
- (void)setUserName:(id)arg0;

@end