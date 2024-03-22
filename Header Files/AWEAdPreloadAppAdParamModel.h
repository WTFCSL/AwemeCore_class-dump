//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEAdPreloadAppAdParamModel : BDXBridgeModel {
    NSString *_adID;
    NSString *_appID;
    NSString *_skan;
    NSString *_creativeID;
    NSString *_logExtra;
    NSNumber *_downloadScene;
    NSString *_webURL;
}

@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *skan;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *downloadScene;
@property (copy, nonatomic) NSString *webURL;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setCreativeID:(id)arg0;
- (id)adID;
- (void)setAdID:(id)arg0;
- (void)setDownloadScene:(id)arg0;
- (id)downloadScene;
- (id)skan;
- (void)setSkan:(id)arg0;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (id)appID;
- (id)creativeID;

@end
