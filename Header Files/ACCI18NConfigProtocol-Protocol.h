//
//     Generated by private class-dump
//

@class NSString, NSBundle;

@protocol ACCI18NConfigProtocol <NSObject>

@property (copy, nonatomic) NSString *currentLanguage;
@property (copy, nonatomic) NSString *currentRegion;
@property (copy, nonatomic) NSString *defaultLanguage;
@property (retain, nonatomic) NSBundle *languageBundle;

- (void)setCurrentRegion:(id)arg0;
- (id)currentRegion;
- (id)currentLanguage;
- (void)setCurrentLanguage:(id)arg0;

@optional

- (id)defaultLanguage;
- (void)setDefaultLanguage:(id)arg0;
- (id)languageBundle;
- (void)setLanguageBundle:(id)arg0;

@end
