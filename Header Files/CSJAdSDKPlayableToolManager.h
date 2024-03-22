//
//     Generated by private class-dump
//

@class NSString;

@interface CSJAdSDKPlayableToolManager : NSObject {
    BOOL _isLandScape;
    NSString *_playableURL;
    NSString *_downloadUrl;
    NSString *_deeplinkUrl;
}

@property (copy, nonatomic) NSString *playableURL;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSString *deeplinkUrl;
@property (nonatomic) BOOL isLandScape;

+ (void)setPlayableURL:(id)arg0;
+ (void)setDeeplinkUrl:(id)arg0;
+ (void)setIsLandScape:(BOOL)arg0;
+ (id)sharedInstance;
+ (void)clearAll;
+ (void)setDownloadUrl:(id)arg0;

- (void)setPlayableURL:(id)arg0;
- (id)playableURL;
- (void)setDeeplinkUrl:(id)arg0;
- (void)setIsLandScape:(BOOL)arg0;
- (id)deeplinkUrl;
- (BOOL)isLandScape;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg0;

@end