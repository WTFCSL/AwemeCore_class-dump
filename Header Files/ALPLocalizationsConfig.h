//
//     Generated by private class-dump
//

@class NSString, ALPLanguageModel;

@interface ALPLocalizationsConfig : NSObject <NSCopying> {
    BOOL _autoLocalize;
    ALPLanguageModel *_developmentLanguage;
    NSString *_defaultLocale;
    NSString *_languagePackageInitialPath;
    long long _languagePackageInitialVersion;
    NSString *_extensionAppGroupIdentifier;
    id /* block */ _languageFilterBlock;
}

@property (retain, nonatomic) ALPLanguageModel *developmentLanguage;
@property (retain, nonatomic) NSString *defaultLocale;
@property (retain, nonatomic) NSString *languagePackageInitialPath;
@property (nonatomic) long long languagePackageInitialVersion;
@property (retain, nonatomic) NSString *extensionAppGroupIdentifier;
@property (nonatomic) BOOL autoLocalize;
@property (copy, nonatomic) id /* block */ languageFilterBlock;

- (void)setAutoLocalize:(BOOL)arg0;
- (void)setLanguagePackageInitialPath:(id)arg0;
- (void)setExtensionAppGroupIdentifier:(id)arg0;
- (void)setLanguagePackageInitialVersion:(long long)arg0;
- (void)setDefaultLocale:(id)arg0;
- (void)setLanguageFilterBlock:(id /* block */)arg0;
- (id)developmentLanguage;
- (void)setDevelopmentLanguage:(id)arg0;
- (id)defaultLocale;
- (id)languagePackageInitialPath;
- (long long)languagePackageInitialVersion;
- (id)extensionAppGroupIdentifier;
- (BOOL)autoLocalize;
- (id /* block */)languageFilterBlock;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end