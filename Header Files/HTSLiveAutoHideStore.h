//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveRoomServiceAdapter, HTSLiveAutoHideReaction;

@interface HTSLiveAutoHideStore : NSObject <HTSLiveAutoHideAction, IESLiveTapAction, IESLiveUserInteractActions> {
    BOOL _isUserInteracting;
    id<IESLiveRoomServiceAdapter> _mixedRoomModel;
    id<HTSLiveAutoHideReaction> _reaction;
}

@property (nonatomic) BOOL isUserInteracting;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> mixedRoomModel;
@property (weak, nonatomic) id<HTSLiveAutoHideReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoomModel:(id)arg0;
- (void)hideComponentsForPortrait;
- (void)forceHide;
- (id)mixedRoomModel;
- (void)forceShow;
- (void)zoneClicked:(struct CGPoint { double x0; double x1; })arg0;
- (void)setMixedRoomModel:(id)arg0;
- (void)setIsUserInteracting:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setup;
- (BOOL)isUserInteracting;
- (id)reaction;
- (void)setReaction:(id)arg0;

@end
