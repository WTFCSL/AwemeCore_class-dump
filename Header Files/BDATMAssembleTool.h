//
//     Generated by private class-dump
//

@interface BDATMAssembleTool : NSObject

+ (id)addOriginParams:(id)arg0 withExtraParams:(id)arg1;
+ (id)updateOriginParams:(id)arg0 withExtraParams:(id)arg1;
+ (id)removeParams:(id)arg0 withOriginParams:(id)arg1;
+ (id)assembleUnitContentParams:(id)arg0 withDynamicParams:(id)arg1;
+ (id)assembleCopyContentParams:(id)arg0 originalParams:(id)arg1 dynamicParams:(id)arg2;
+ (void)convertDictionaryToStringWithOriginParams:(id)arg0 targetParams:(id)arg1;
+ (id)assembleOriginParams:(id)arg0 withContentParams:(id)arg1;
+ (id)assembleContentParams:(id)arg0 withDynamicParams:(id)arg1;
+ (id)assembleParams:(id)arg0 withCommonParams:(id)arg1 withDynamicParams:(id)arg2;

@end