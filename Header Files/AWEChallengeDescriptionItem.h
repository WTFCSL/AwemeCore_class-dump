//
//     Generated by private class-dump
//

@class NSString, AWEChallengWechatMiniAppInfo, AWEChallengeDownloadComponent;

@interface AWEChallengeDescriptionItem : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_content;
    AWEChallengeDownloadComponent *_downloadComponent;
    AWEChallengWechatMiniAppInfo *_wechatMiniApp;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEChallengeDownloadComponent *downloadComponent;
@property (retain, nonatomic) AWEChallengWechatMiniAppInfo *wechatMiniApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadComponentJSONTransformer;
+ (id)wechatMiniAppJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)downloadComponent;
- (void)setDownloadComponent:(id)arg0;
- (id)wechatMiniApp;
- (void)setWechatMiniApp:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;

@end
