//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveDisplayTemplateServiceImpl : NSObject <HTSLiveTemplateProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)templateForKey:(id)arg0 defaultPattern:(id)arg1;
- (id)parseDisplayText:(id)arg0 withDIContext:(id)arg1;
- (id)parseDisplayText:(id)arg0 configuration:(id)arg1 diContext:(id)arg2;
- (id)parsePiecesFromDisplayText:(id)arg0 configuration:(id)arg1 diContext:(id)arg2;
- (id)parseEnableSchemaInfoDisplayText:(id)arg0 configuration:(id)arg1 diContext:(id)arg2;
- (id)parseCombinedText:(id)arg0 configuration:(id)arg1 diContext:(id)arg2;
- (id)init;

@end