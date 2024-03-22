//
//     Generated by private class-dump
//

@class IESLiveLinkmicCanvasSlotLayoutConfig, NSString;
@protocol IESLiveInteractUserModel;

@interface IESLiveLinkmicCanvasViewCellModel : NSObject {
    IESLiveLinkmicCanvasSlotLayoutConfig *_slotConfig;
    id<IESLiveInteractUserModel> _user;
    id /* block */ _onUserUpdateBlock;
    id /* block */ _onSessionViewUpdatedBlock;
}

@property (copy, nonatomic) id /* block */ onUserUpdateBlock;
@property (copy, nonatomic) id /* block */ onSessionViewUpdatedBlock;
@property (retain, nonatomic) IESLiveLinkmicCanvasSlotLayoutConfig *slotConfig;
@property (readonly, copy, nonatomic) NSString *cellIdentifier;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;

- (id)slotConfig;
- (void)setSlotConfig:(id)arg0;
- (void)onUserUpdated:(id /* block */)arg0;
- (void)onSessionViewUpdated:(id /* block */)arg0;
- (void)setOnUserUpdateBlock:(id /* block */)arg0;
- (void)setOnSessionViewUpdatedBlock:(id /* block */)arg0;
- (id /* block */)onUserUpdateBlock;
- (id /* block */)onSessionViewUpdatedBlock;
- (void)insertRTCSessionView:(id)arg0 isLocalPreview:(BOOL)arg1;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)cellIdentifier;

@end