//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface HybridWebSecureLinkConfig : NSObject {
    BOOL _switchOnFirstRequestSecureCheck;
    int _aid;
    NSString *_scene;
    NSString *_language;
    unsigned long long _secureLinkCheckRedirectType;
    NSArray *_secureCheckHostAllowList;
}

@property (nonatomic) int aid;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) BOOL switchOnFirstRequestSecureCheck;
@property (nonatomic) unsigned long long secureLinkCheckRedirectType;
@property (copy, nonatomic) NSArray *secureCheckHostAllowList;

+ (id)configWithAid:(int)arg0 scene:(id)arg1 language:(id)arg2 switchOnFirstRequestSecureCheck:(BOOL)arg3 secureLinkCheckRedirectType:(unsigned long long)arg4;

- (void)setSecureLinkCheckRedirectType:(unsigned long long)arg0;
- (void)setSwitchOnFirstRequestSecureCheck:(BOOL)arg0;
- (BOOL)switchOnFirstRequestSecureCheck;
- (unsigned long long)secureLinkCheckRedirectType;
- (id)secureCheckHostAllowList;
- (void)setSecureCheckHostAllowList:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)language;
- (void)setLanguage:(id)arg0;
- (id)scene;
- (void)setAid:(int)arg0;
- (int)aid;

@end