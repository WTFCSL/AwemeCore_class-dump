//
//     Generated by private class-dump
//

@class NSString;

@interface ATSIllegalCertValidator : NSObject <BDAbnormalCertStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)strategyToHandleAbnormalCert:(id)arg0 inEntryContext:(id)arg1;
- (BOOL)canHandleCert:(id)arg0 inEntryContext:(id)arg1;

@end
