//
//     Generated by private class-dump
//

@protocol IESLiveInteractionLinkerLinkService, IESLiveInteractionLinkerUserService, IESLiveInteractionLinkSession, IESLiveInteractionLinkerMediaService;

@protocol IESLiveInteractionLinkerService <NSObject>

@property (readonly, nonatomic) long long userState;
@property (readonly, nonatomic) id<IESLiveInteractionLinkerMediaService> mediaManager;
@property (readonly, nonatomic) id<IESLiveInteractionLinkerUserService> usersManager;
@property (readonly, nonatomic) id<IESLiveInteractionLinkerLinkService> linkManager;
@property (readonly, nonatomic) id<IESLiveInteractionLinkSession> linkSession;

- (id)linkSession;
- (id)usersManager;
- (id)linkManager;
- (long long)userState;
- (id)mediaManager;

@end
