//
//     Generated by private class-dump
//

@interface AWEFeedStickerAndRiskTipsReverseManager : NSObject

+ (id)awemeListWithStickerFilteredIfNeeded:(id)arg0;
+ (id)awemeListWithRiskTipsFilteredIfNeeded:(id)arg0;
+ (id)albumHandlersWithPluginStickersFilteredIfNeeded:(id)arg0 referString:(id)arg1 model:(id)arg2;
+ (BOOL)riskTipsReverseConfig;
+ (BOOL)isBasicConditionSatisfiedForReverse;
+ (BOOL)shouldFilterModelForRiskTipsReverse:(id)arg0;
+ (long long)stickerReverseType;
+ (BOOL)shouldFilterModelForSticker:(id)arg0;
+ (BOOL)shouldFilterHandlerWithModel:(id)arg0 referString:(id)arg1;
+ (id)handlersWithPluginStickersFilteredIfNeeded:(id)arg0 referString:(id)arg1 model:(id)arg2;

@end
