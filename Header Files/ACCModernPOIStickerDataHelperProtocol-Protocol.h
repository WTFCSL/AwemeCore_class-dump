//
//     Generated by private class-dump
//

@protocol ACCModernPOIStickerDataHelperProtocol <NSObject>

+ (void)prefetchDefaultPOIStyleResourceIfNeeded;
+ (id)basicEffectIds;
+ (id)commonEffectIds;
+ (id)standardEffectIds;
+ (void)fetchEffectWithEffectIds:(id)arg0 defaultIndex:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
+ (void)fetchEffectWithModel:(id)arg0 completionBlock:(id /* block */)arg1;
+ (id)generateTextParamsWithPOIName:(id)arg0 effectPath:(id)arg1 effectModel:(id)arg2;
+ (id)optimizeTextParams:(id)arg0;
+ (void)saveBasicEffects:(id)arg0;

@end
