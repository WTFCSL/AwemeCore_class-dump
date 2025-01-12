//
//     Generated by private class-dump
//

@class RACSignal;

@protocol IESLiveLanguageService <NSObject>

@property (readonly, nonatomic) RACSignal *languageChanged;
@property (readonly, nonatomic) RACSignal *interfaceLC;

- (id)currentInterfaceLC;
- (id)interfaceLC;
- (id)currentLanguageCode;
- (id)locale;
- (id)currentRegion;
- (id)languageChanged;

@optional

- (id)hostCurrentLanguageCode;
- (void)disableHostLocalizations:(id)arg0;
- (void)enableHostRTLFlipForView:(id)arg0;

@end
