//
//     Generated by private class-dump
//

@class CJPayRetainInfoV2Config, NSString, CJPayBDRetainInfoModel, NSDictionary, CJPayVoucherRetainInfoModel;
@protocol CJPayTrackerProtocol;

@interface CJPayRetainUtilModel : NSObject {
    BOOL _isHasVoucher;
    BOOL _isBonusPath;
    BOOL _isTransform;
    BOOL _isUseClearBGColor;
    BOOL _notSumbitServerEvent;
    BOOL _hasInputHistory;
    BOOL _isOnlyShowNormalRetainStyle;
    CJPayBDRetainInfoModel *_retainInfo;
    CJPayRetainInfoV2Config *_retainInfoV2Config;
    NSString *_intergratedTradeNo;
    NSDictionary *_processInfoDic;
    NSString *_intergratedMerchantID;
    unsigned long long _positionType;
    id /* block */ _confirmActionBlock;
    id /* block */ _otherVerifyActionBlock;
    id /* block */ _closeActionBlock;
    id /* block */ _lynxRetainActionBlock;
    id<CJPayTrackerProtocol> _trackDelegate;
    NSString *_eventNameForPopUpClick;
    NSString *_eventNameForPopUpShow;
    NSDictionary *_extraParamForConfirm;
    NSDictionary *_extraParamForOtherVerify;
    NSDictionary *_extraParamForClose;
    NSDictionary *_extraParamForPopUpShow;
    CJPayVoucherRetainInfoModel *_voucherRetainInfoModel;
    id /* block */ _continuePayBlock;
    id /* block */ _cancelPayBlock;
}

@property (retain, nonatomic) CJPayBDRetainInfoModel *retainInfo;
@property (retain, nonatomic) CJPayRetainInfoV2Config *retainInfoV2Config;
@property (copy, nonatomic) NSString *intergratedTradeNo;
@property (copy, nonatomic) NSDictionary *processInfoDic;
@property (copy, nonatomic) NSString *intergratedMerchantID;
@property (nonatomic) BOOL isHasVoucher;
@property (nonatomic) unsigned long long positionType;
@property (nonatomic) BOOL isBonusPath;
@property (nonatomic) BOOL isTransform;
@property (nonatomic) BOOL isUseClearBGColor;
@property (nonatomic) BOOL notSumbitServerEvent;
@property (nonatomic) BOOL hasInputHistory;
@property (nonatomic) BOOL isOnlyShowNormalRetainStyle;
@property (copy, nonatomic) id /* block */ confirmActionBlock;
@property (copy, nonatomic) id /* block */ otherVerifyActionBlock;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (copy, nonatomic) id /* block */ lynxRetainActionBlock;
@property (readonly, nonatomic) unsigned long long retainType;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (copy, nonatomic) NSString *eventNameForPopUpClick;
@property (copy, nonatomic) NSString *eventNameForPopUpShow;
@property (copy, nonatomic) NSDictionary *extraParamForConfirm;
@property (copy, nonatomic) NSDictionary *extraParamForOtherVerify;
@property (copy, nonatomic) NSDictionary *extraParamForClose;
@property (copy, nonatomic) NSDictionary *extraParamForPopUpShow;
@property (retain, nonatomic) CJPayVoucherRetainInfoModel *voucherRetainInfoModel;
@property (copy, nonatomic) id /* block */ continuePayBlock;
@property (copy, nonatomic) id /* block */ cancelPayBlock;

- (BOOL)isTransform;
- (void)setIsTransform:(BOOL)arg0;
- (id)trackDelegate;
- (void)setTrackDelegate:(id)arg0;
- (unsigned long long)positionType;
- (void)setPositionType:(unsigned long long)arg0;
- (id /* block */)closeActionBlock;
- (void)setCloseActionBlock:(id /* block */)arg0;
- (void)setConfirmActionBlock:(id /* block */)arg0;
- (id /* block */)confirmActionBlock;
- (id)retainInfo;
- (void)setRetainInfo:(id)arg0;
- (id)voucherRetainInfoModel;
- (unsigned long long)retainType;
- (id)processInfoDic;
- (void)setIntergratedTradeNo:(id)arg0;
- (void)setLynxRetainActionBlock:(id /* block */)arg0;
- (void)setRetainInfoV2Config:(id)arg0;
- (void)setVoucherRetainInfoModel:(id)arg0;
- (void)setCancelPayBlock:(id /* block */)arg0;
- (void)setContinuePayBlock:(id /* block */)arg0;
- (id)retainInfoV2Config;
- (void)setHasInputHistory:(BOOL)arg0;
- (BOOL)isHasVoucher;
- (void)setIsOnlyShowNormalRetainStyle:(BOOL)arg0;
- (void)setIntergratedMerchantID:(id)arg0;
- (void)setProcessInfoDic:(id)arg0;
- (void)setNotSumbitServerEvent:(BOOL)arg0;
- (void)setIsHasVoucher:(BOOL)arg0;
- (void)setIsBonusPath:(BOOL)arg0;
- (void)setEventNameForPopUpClick:(id)arg0;
- (void)setEventNameForPopUpShow:(id)arg0;
- (void)buildTrackEventNormalSetting;
- (BOOL)hasInputHistory;
- (BOOL)isOnlyShowNormalRetainStyle;
- (id)intergratedTradeNo;
- (id /* block */)continuePayBlock;
- (id /* block */)cancelPayBlock;
- (id)eventNameForPopUpClick;
- (id)extraParamForConfirm;
- (id)extraParamForOtherVerify;
- (id /* block */)otherVerifyActionBlock;
- (id)extraParamForClose;
- (BOOL)isUseClearBGColor;
- (BOOL)notSumbitServerEvent;
- (id)eventNameForPopUpShow;
- (id)extraParamForPopUpShow;
- (unsigned long long)obtainEventType:(id)arg0;
- (id /* block */)lynxRetainActionBlock;
- (id)intergratedMerchantID;
- (BOOL)isBonusPath;
- (void)setExtraParamForPopUpShow:(id)arg0;
- (void)setExtraParamForConfirm:(id)arg0;
- (void)setExtraParamForOtherVerify:(id)arg0;
- (unsigned long long)recommendChannelType:(id)arg0;
- (void)setIsUseClearBGColor:(BOOL)arg0;
- (void)setOtherVerifyActionBlock:(id /* block */)arg0;
- (void)setExtraParamForClose:(id)arg0;
- (void).cxx_destruct;

@end
