//
//     Generated by private class-dump
//

@class NSDate, RxTwoTuple, RTVVoipFlowerModel, RTVBehaviorOptions, RTVVoipInvokeExternBusinessInfo, NSDictionary, RTVVoipModel, RTVFinishForwardModel, RTVVoipInitialAction;

@interface RTVVoipInvokeOperation : NSObject {
    BOOL _complete;
    long long _operationType;
    long long _voipType;
    long long _callType;
    unsigned long long _enterFrom;
    RTVVoipModel *_voip;
    unsigned long long _operationState;
    NSDate *_createDate;
    RTVVoipFlowerModel *_flowerModel;
    RTVFinishForwardModel *_finishForwardModel;
    RTVVoipInitialAction *_initialAction;
    long long _interactionAction;
    NSDictionary *_trackDictionary;
    RxTwoTuple *_customEnterFromInfo;
    RTVVoipInvokeExternBusinessInfo *_externBusinessInfo;
    NSDictionary *_localExtInfo;
    RTVBehaviorOptions *_behaviorOptions;
}

@property (nonatomic) BOOL checked;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) long long operationType;
@property (readonly, nonatomic) long long voipType;
@property (readonly, nonatomic) long long callType;
@property (readonly, nonatomic) unsigned long long enterFrom;
@property (readonly, nonatomic) RTVVoipModel *voip;
@property (readonly, nonatomic) unsigned long long operationState;
@property (readonly, nonatomic) NSDate *createDate;
@property (readonly, nonatomic) RTVVoipFlowerModel *flowerModel;
@property (readonly, nonatomic) RTVFinishForwardModel *finishForwardModel;
@property (readonly, nonatomic) RTVVoipInitialAction *initialAction;
@property (readonly, nonatomic) long long interactionAction;
@property (readonly, copy, nonatomic) NSDictionary *trackDictionary;
@property (retain, nonatomic) RxTwoTuple *customEnterFromInfo;
@property (readonly, nonatomic) RTVVoipInvokeExternBusinessInfo *externBusinessInfo;
@property (readonly, copy, nonatomic) NSDictionary *localExtInfo;
@property (readonly, nonatomic) RTVBehaviorOptions *behaviorOptions;

- (unsigned long long)enterFrom;
- (id)businessModel;
- (id)trackDictionary;
- (void)mergeInitialActions:(long long)arg0;
- (long long)interactionAction;
- (void)updateTrackDictionary:(id)arg0;
- (void)updateLocalExtInfo:(id)arg0;
- (void)updateBehaviorOptions:(id)arg0;
- (void)updateExternBusinessInfo:(id)arg0;
- (id)localExtInfo;
- (id)externBusinessInfo;
- (void)updateFinishForwardModel:(id)arg0;
- (long long)voipType;
- (id)customEnterFromInfo;
- (void)updateCustomEnterFromInfo:(id)arg0;
- (void)updateInitialAction:(id)arg0;
- (void)udapteInteractionAction:(long long)arg0;
- (void)updateFlowerModel:(id)arg0;
- (id)finishForwardModel;
- (id)flowerModel;
- (void)updateOperationState:(unsigned long long)arg0;
- (void)updateVoip:(id)arg0;
- (id)initWithCallType:(long long)arg0 voipType:(long long)arg1 enterFrom:(unsigned long long)arg2;
- (void)markRequestComplete;
- (void)setCustomEnterFromInfo:(id)arg0;
- (long long)operationType;
- (BOOL)isComplete;
- (unsigned long long)operationState;
- (BOOL)checked;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (void)setComplete:(BOOL)arg0;
- (void)setChecked:(BOOL)arg0;
- (id)behaviorOptions;
- (long long)callType;
- (id)createDate;
- (id)initialAction;
- (id)voip;

@end
