//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCLanguageImpl : NSObject <ACCLanguageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formatedNumber:(long long)arg0;
- (id)localizedStringWithFormat:(id)arg0 defaultTranslation:(id)arg1 parameters:(char *)arg2;
- (id)localizedStringWithStr:(id)arg0 defaultTranslation:(id)arg1;
- (id)localizedStringWithFormat:(id)arg0 defaultTranslation:(id)arg1;
- (void)disableLocalizationsOfObj:(id)arg0;
- (id)pluralizedStringWithString:(id)arg0 count:(long long)arg1;

@end
