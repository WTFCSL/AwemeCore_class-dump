//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayGeneralParamsManager : NSObject <CJPayGeneralParamsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)i_getGeneralParamsWithQuery:(id)arg0 delegate:(id)arg1;
- (void)p_getLatestParams:(id)arg0 delegate:(id)arg1;

@end
