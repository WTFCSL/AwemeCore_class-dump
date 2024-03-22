//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveComponentContext;
@protocol IESLiveRoomService;

@protocol IESLiveCommonCardStoreProtocol <NSObject>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) id<IESLiveRoomService> room;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)fetchCommonCardInfo:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@optional

- (void)handleOrientationTranstionBegin:(long long)arg0;
- (void)handleOrientationTranstionEnd:(long long)arg0;

@end