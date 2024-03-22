//
//     Generated by private class-dump
//

@class IESECLiveAtomicServerActionJump, IESECLiveAtomicServerActionDialog, NSDictionary, IESECLiveAtomicServerActionBiz;

@protocol IESECLiveAtomicServerActionProtocol <NSObject, MTLJSONSerializing>

@property (nonatomic) long long actionType;
@property (retain, nonatomic) IESECLiveAtomicServerActionDialog *dialog;
@property (retain, nonatomic) IESECLiveAtomicServerActionBiz *bizAction;
@property (retain, nonatomic) IESECLiveAtomicServerActionJump *jumpAction;
@property (retain, nonatomic) id goodsModel;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void)setExtraInfo:(id)arg0;
- (id)jumpAction;
- (void)setJumpAction:(id)arg0;
- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (id)bizAction;
- (void)setBizAction:(id)arg0;
- (void)setActionType:(long long)arg0;
- (long long)actionType;
- (id)dialog;
- (void)setDialog:(id)arg0;
- (id)extraInfo;

@end
