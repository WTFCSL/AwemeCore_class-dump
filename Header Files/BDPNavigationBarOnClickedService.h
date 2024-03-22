//
//     Generated by private class-dump
//

@class NSDictionary, BDPUniqueID, NSString;

@interface BDPNavigationBarOnClickedService : NSObject <BDPNavigationBarOnClickedService, BDPAppRouteChangeMessage> {
    BOOL _isShowModel;
    BDPUniqueID *_uniqueID;
    NSDictionary *_param;
    long long _enablePageID;
    long long _disablePageID;
    NSString *_title;
    NSString *_content;
    NSString *_cancelText;
    NSString *_confirmText;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSDictionary *param;
@property (nonatomic) BOOL isShowModel;
@property (nonatomic) long long enablePageID;
@property (nonatomic) long long disablePageID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)setCancelText:(id)arg0;
- (id)cancelText;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2;
- (void)onAppRouteChangePageDidLeaveWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2;
- (id)initService;
- (void)navigationBarOnClickedWithCompletion:(id /* block */)arg0 navigationController:(id)arg1 pageID:(long long)arg2 type:(long long)arg3;
- (void)enableAlertWithParam:(id)arg0 uniqueID:(id)arg1 pageID:(long long)arg2;
- (void)disableAlertWithUniqueID:(id)arg0 pageID:(long long)arg1;
- (BOOL)isShowModel;
- (void)checkAndSubscribeWithType:(id)arg0 pageID:(long long)arg1;
- (void)setIsShowModel:(BOOL)arg0;
- (void)setEnablePageID:(long long)arg0;
- (void)setDisablePageID:(long long)arg0;
- (long long)enablePageID;
- (long long)disablePageID;
- (void)setParam:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)param;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)confirmText;
- (void)setConfirmText:(id)arg0;

@end
