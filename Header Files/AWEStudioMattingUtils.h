//
//     Generated by private class-dump
//

@class IESEffectModel;

@interface AWEStudioMattingUtils : NSObject

@property (class, retain, nonatomic) IESEffectModel *effectModel;

+ (id)effectModel;
+ (void)setEffectModel:(id)arg0;
+ (BOOL)currentEffectModelNeedMatting:(id)arg0 atIndex:(long long)arg1;
+ (unsigned long long)convertMattingType:(id)arg0;
+ (id)checkPathHasExistAndDeleteOld:(id)arg0;

@end