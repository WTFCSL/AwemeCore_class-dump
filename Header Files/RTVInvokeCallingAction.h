//
//     Generated by private class-dump
//

@class NSDictionary, RTVVoipModel;

@interface RTVInvokeCallingAction : RTVVoipStateMachineResetAction {
    RTVVoipModel *_voip;
    NSDictionary *_trackDictionary;
}

@property (readonly, nonatomic) RTVVoipModel *voip;
@property (readonly, copy, nonatomic) NSDictionary *trackDictionary;

- (id)trackDictionary;
- (id)initWithVoip:(id)arg0 trackDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)voip;

@end