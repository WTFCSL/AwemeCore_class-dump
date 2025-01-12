//
//     Generated by private class-dump
//

@class NSString, AWEGeckoCDNConfig;

@interface AWEGeckoCDNManager : NSObject {
    BOOL _geckoImageUsingPreferredTheme;
    AWEGeckoCDNConfig *_config;
    NSString *_resourcePrefix;
}

@property (retain, nonatomic) AWEGeckoCDNConfig *config;
@property (copy, nonatomic) NSString *resourcePrefix;
@property (nonatomic) BOOL geckoImageUsingPreferredTheme;

+ (id)getCDNDomain;

- (void)themeDidChangeNoti:(id)arg0;
- (void)memoryWarningNoti:(id)arg0;
- (id)getImageWithName:(id)arg0 forTheme:(long long)arg1 block:(id /* block */)arg2;
- (id)p_getImageWithName:(id)arg0 forTheme:(long long)arg1 block:(id /* block */)arg2;
- (id)getImageWithName:(id)arg0 block:(id /* block */)arg1;
- (id)getImageFromGeckoWithName:(id)arg0 forTheme:(long long)arg1;
- (id)getResourceCDNUrlWithName:(id)arg0;
- (void)imageDownloadWithURL:(id)arg0 complete:(id /* block */)arg1;
- (void)downloadFinshForSkinWithImage:(id)arg0 imageName:(id)arg1 imageFileName:(id)arg2 urlStr:(id)arg3 image:(id)arg4 error1:(id)arg5 error2:(id)arg6 themeStyle:(long long)arg7;
- (id)resourcePrefix;
- (BOOL)geckoImageUsingPreferredTheme;
- (id)getImageWithName:(id)arg0 forTheme:(long long)arg1;
- (id)getImageWithName:(id)arg0;
- (id)convertFileNameFromImageName:(id)arg0;
- (void)setResourcePrefix:(id)arg0;
- (void)setGeckoImageUsingPreferredTheme:(BOOL)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;

@end
