//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveInteractSeatElementActions;

@interface IESLiveInteractSeatElementMultiCaster : IESLiveInteractComponentMultiCaster <IESLiveInteractSeatElementProvider, IESLiveInteractSeatElementEvents> {
    id<IESLiveInteractSeatElementActions> _outerActions;
}

@property (retain, nonatomic) id<IESLiveInteractSeatElementActions> outerActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)outerActions;
- (void)setOuterActions:(id)arg0;
- (void).cxx_destruct;

@end