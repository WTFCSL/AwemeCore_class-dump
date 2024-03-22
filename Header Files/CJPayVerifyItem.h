//
//     Generated by private class-dump
//

@class NSString, CJPayBaseVerifyManager;

@interface CJPayVerifyItem : NSObject <CJPayTrackerProtocol> {
    CJPayBaseVerifyManager *_manager;
    unsigned long long _verifyType;
    NSString *_verifySource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CJPayBaseVerifyManager *manager;
@property (nonatomic) unsigned long long verifyType;
@property (copy, nonatomic) NSString *verifySource;

- (void)event:(id)arg0 params:(id)arg1;
- (id)checkType;
- (void)bindManager:(id)arg0;
- (id)getLatestCacheData;
- (void)requestVerifyWithCreateOrderResponse:(id)arg0 event:(id)arg1;
- (BOOL)shouldHandleVerifyResponse:(id)arg0;
- (void)handleVerifyResponse:(id)arg0;
- (id)checkTypeName;
- (void)setVerifySource:(id)arg0;
- (id)p_buildRetainInfoV2Config;
- (id)buildRetainUtilModel;
- (void)notifyWakeVerifyItemFail;
- (void)notifyVerifyCancel;
- (id)verifySource;
- (id)handleSourceType;
- (BOOL)lastConfirmVerifyItemTypeEqualToSelf;
- (void).cxx_destruct;
- (void)receiveEvent:(id)arg0;
- (void)setManager:(id)arg0;
- (id)manager;
- (unsigned long long)verifyType;
- (void)setVerifyType:(unsigned long long)arg0;

@end
