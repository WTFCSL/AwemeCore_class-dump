//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface TMBPEAHybridContextValidator : NSObject <BDHybridCertContextValidator> {
    NSArray *_shouldValidatePageTypes;
}

@property (copy, nonatomic) NSArray *shouldValidatePageTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldContextValidationEnabledFor:(id)arg0;
- (void)setShouldValidatePageTypes:(id)arg0;
- (id)shouldValidatePageTypes;
- (id)defaultValidatePageTypes;
- (void).cxx_destruct;

@end
