//
//     Generated by private class-dump
//

@class NSString, WXStateJumpInfo;

@interface WXStateSceneDataObject : WXSceneDataObject {
    NSString *_stateId;
    NSString *_stateTitle;
    NSString *_token;
    WXStateJumpInfo *_stateJumpDataInfo;
}

@property (copy, nonatomic) NSString *stateId;
@property (copy, nonatomic) NSString *stateTitle;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) WXStateJumpInfo *stateJumpDataInfo;

+ (id)object;

- (void)setStateId:(id)arg0;
- (id)stateTitle;
- (void)setStateTitle:(id)arg0;
- (id)stateJumpDataInfo;
- (void)setStateJumpDataInfo:(id)arg0;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (id)stateId;

@end
