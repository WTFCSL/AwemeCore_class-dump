//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveComponentContext;
@protocol HTSFormatRoomService;

@interface IESFormatComponentBase : IESLiveComponentBase {
    id<HTSFormatRoomService> _room;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_trackContext;
}

@property (retain, nonatomic) id<HTSFormatRoomService> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)setRoom:(id)arg0 componentContext:(id)arg1 trackContext:(id)arg2;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end