//
//     Generated by private class-dump
//

@class NSString;

@interface AWECompilationRecommendManager : NSObject <AWECompilationRecommendManagerProtocol>

@property (class, nonatomic) BOOL isCompilationRecommendV3PageUsed;
@property (class, nonatomic) BOOL isImmersiveUserDrag;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNeedImmersiveGuide;
+ (void)recordImmersiveGuideShowCount;
+ (void)setIsImmersiveUserDrag:(BOOL)arg0;
+ (long long)v3GuideShowCount;
+ (BOOL)isImmersiveUserDrag;
+ (long long)immersiveGuideShowCount;
+ (BOOL)isCompilationRecommendV3PageUsed;
+ (void)setIsCompilationRecommendV3PageUsed:(BOOL)arg0;
+ (unsigned long long)abV3PlanType;
+ (unsigned long long)abV3ExitType;
+ (BOOL)isNeedV3Guide;
+ (void)recordV3GuideShowCount;
+ (BOOL)compilationRecommendFloatEnabled;

@end
