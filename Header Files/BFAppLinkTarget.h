//
//     Generated by private class-dump
//

@class NSURL, NSString;

@interface BFAppLinkTarget : NSObject {
    NSURL *_URL;
    NSString *_appStoreId;
    NSString *_appName;
}

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *appStoreId;
@property (copy, nonatomic) NSString *appName;

+ (id)appLinkTargetWithURL:(id)arg0 appStoreId:(id)arg1 appName:(id)arg2;

- (void)setAppStoreId:(id)arg0;
- (id)appStoreId;
- (void)setAppName:(id)arg0;
- (id)appName;
- (void).cxx_destruct;
- (void)setURL:(id)arg0;
- (id)URL;

@end