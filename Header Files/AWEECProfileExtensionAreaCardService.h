//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECProfileExtensionAreaCardService : HTSService <AWEECProfileExtensionAreaCardService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)profilePersonalCenterEntryViewClass;
- (Class)newProfileExtensionAreaCardControllerClass;
- (id)storeSourceParamsWithExtraInfoDic:(id)arg0;
- (void)handleProfileExtensionAreaActionWithType:(unsigned long long)arg0 userModel:(id)arg1 schema:(id)arg2;
- (Class)newProfileExtensionAreaMyOrderListCardControllerClass;
- (Class)profilePersonalCenterShopViewClass;
- (id)commonTrackParamsByExtraInfoDic:(id)arg0 userModel:(id)arg1 cardData:(id)arg2 cardModel:(id)arg3 cardIndex:(unsigned long long)arg4 isDotViewShow:(BOOL)arg5 userIsMaster:(BOOL)arg6;
- (void)handleProfileExtensionAreaActionWithType:(unsigned long long)arg0 userModel:(id)arg1 schema:(id)arg2 cardModel:(id)arg3 extraInfo:(id)arg4 cardIndex:(unsigned long long)arg5 isDotViewShow:(BOOL)arg6 cardData:(id)arg7 shouldTrackAppearEvent:(BOOL)arg8;

@end