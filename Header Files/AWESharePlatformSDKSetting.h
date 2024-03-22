//
//     Generated by private class-dump
//

@class NSDictionary, NSString, AWEShareSpecifiedPlatformSDKSetting;

@interface AWESharePlatformSDKSetting : MTLModel <MTLJSONSerializing> {
    AWEShareSpecifiedPlatformSDKSetting *_qqShareSDK;
    AWEShareSpecifiedPlatformSDKSetting *_wechatShareSDK;
    AWEShareSpecifiedPlatformSDKSetting *_weiboShareSDK;
}

@property (retain, nonatomic) AWEShareSpecifiedPlatformSDKSetting *qqShareSDK;
@property (retain, nonatomic) AWEShareSpecifiedPlatformSDKSetting *wechatShareSDK;
@property (retain, nonatomic) AWEShareSpecifiedPlatformSDKSetting *weiboShareSDK;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)qqShareSDKJSONTransformer;
+ (id)wechatShareSDKJSONTransformer;
+ (id)weiboShareSDKJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)wechatShareSDK;
- (id)qqShareSDK;
- (id)weiboShareSDK;
- (void)setQqShareSDK:(id)arg0;
- (void)setWechatShareSDK:(id)arg0;
- (void)setWeiboShareSDK:(id)arg0;
- (void).cxx_destruct;

@end