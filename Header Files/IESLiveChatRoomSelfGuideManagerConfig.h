//
//     Generated by private class-dump
//

@class HTSEventContext;

@interface IESLiveChatRoomSelfGuideManagerConfig : NSObject {
    BOOL _guideEnable;
    unsigned long long _scene;
    HTSEventContext *_eventContext;
}

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL guideEnable;

- (void)setEventContext:(id)arg0;
- (BOOL)guideEnable;
- (void)setGuideEnable:(BOOL)arg0;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)eventContext;
- (unsigned long long)scene;

@end
