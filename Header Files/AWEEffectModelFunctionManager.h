//
//     Generated by private class-dump
//

@class NSString;

@interface AWEEffectModelFunctionManager : NSObject <AWEEffectModelFunctionManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleActionWithTitle:(id)arg0;
+ (void)setEffectCoverWithEffectID:(id)arg0 itemID:(id)arg1 isDelete:(BOOL)arg2 completion:(id /* block */)arg3;
+ (id)removeEffectCoverConfirmSheetViewWithConfirmBlock:(id /* block */)arg0;
+ (void)requestEffectToTop:(id)arg0 needTop:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)requestEffectToHide:(id)arg0 needHide:(BOOL)arg1 completion:(id /* block */)arg2;

@end