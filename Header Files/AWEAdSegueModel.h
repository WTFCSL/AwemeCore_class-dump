//
//     Generated by private class-dump
//

@class NSString, AWEAdWeChatMiniAppInfo;

@interface AWEAdSegueModel : MTLModel <MTLJSONSerializing> {
    BOOL _isFromLandingPage;
    NSString *_webUrl;
    NSString *_imageUrl;
    NSString *_openUrl;
    NSString *_mpUrl;
    NSString *_lynxUrl;
    NSString *_event;
    NSString *_refer;
    AWEAdWeChatMiniAppInfo *_wechatMpInfo;
    NSString *_webTitle;
}

@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) AWEAdWeChatMiniAppInfo *wechatMpInfo;
@property (nonatomic) BOOL isFromLandingPage;
@property (copy, nonatomic) NSString *webTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)wechatMpInfoJSONTransformer;

- (id)lynxUrl;
- (void)setWebTitle:(id)arg0;
- (void)setRefer:(id)arg0;
- (void)setOpenUrl:(id)arg0;
- (id)webTitle;
- (void)setWebUrl:(id)arg0;
- (id)refer;
- (id)wechatMpInfo;
- (void)setWechatMpInfo:(id)arg0;
- (id)openUrl;
- (void)setLynxUrl:(id)arg0;
- (id)webUrl;
- (id)mpUrl;
- (void)setMpUrl:(id)arg0;
- (void)setIsFromLandingPage:(BOOL)arg0;
- (BOOL)isFromLandingPage;
- (void)setEvent:(id)arg0;
- (id)event;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;

@end
