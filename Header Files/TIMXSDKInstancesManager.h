//
//     Generated by private class-dump
//

@class NSMutableDictionary, TIMXSDKInstance;

@interface TIMXSDKInstancesManager : NSObject

@property (class, readonly, weak, nonatomic) TIMXSDKInstance *iesim_TIMXSDKInstance;
@property (class, readonly, weak, nonatomic) TIMXSDKInstance *iesim_TIMXSDKInstance_Nullable;
@property (class, readonly, nonatomic) NSMutableDictionary *p_instanceDict;

+ (id)instanceWithToken:(id)arg0;
+ (id)iesim_TIMXSDKInstance;
+ (id)iesim_TIMXSDKInstance_Nullable;
+ (void)iesim_PrepareInstanceIfNecessary;
+ (void)iesim_DestoryCurrentSDKInstance;
+ (void)p_fillExtraParamToConfig:(id)arg0;
+ (void)removeInstanceWithToken:(id)arg0;
+ (id)p_instanceDict;
+ (void)addInstance:(id)arg0;

@end
