//
//     Generated by private class-dump
//

@class NSString;

@interface BDPOrderCommentServiceImpl : NSObject <BDPOrderCommentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)showOrderCommentIfNeed:(id)arg0 userId:(id)arg1 uniqueId:(id)arg2 parentView:(id)arg3 dismissBlock:(id /* block */)arg4;
- (BOOL)_shouldShowOrderCommentGuideWithUserId:(id)arg0;
- (void)_showOrderCommentGuideWithOrderData:(id)arg0 userId:(id)arg1 uniqueId:(id)arg2 parentView:(id)arg3 dismissBlock:(id /* block */)arg4;
- (void)_getCanCommentOrderWithOrderId:(id)arg0 appId:(id)arg1 uniqueId:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)_shouldShowOrderCommnetGuideWithOrderId:(id)arg0 canoCommentTime:(long long)arg1 uniqueId:(id)arg2;
- (id)_getCanCommentOrderWithOrderList:(id)arg0 uniqueId:(id)arg1 count:(long long)arg2;
- (void)_updateOrderCommentFrequencyControlWithOrderId:(id)arg0 uniqueId:(id)arg1;
- (void)_updateUserFrequencyWithUserId:(id)arg0;
- (id)_userOrderStartTimeKeyWithUserId:(id)arg0;
- (id)_userOrderCloseCountKeyWithUserId:(id)arg0;
- (id)_orderCommentKeyWithOrderId:(id)arg0;

@end
