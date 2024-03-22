//
//     Generated by private class-dump
//

@class IESLiveAnchorAdminPromptView, HTSLivePromptMessage, HTSEventContext, UIView, NSMutableArray;
@protocol IESLiveRoomService, IESLiveAnchorAdminPromptViewHandleDelegate;

@interface IESLiveAnchorAdminPromptViewHandle : NSObject {
    BOOL _animating;
    id<IESLiveAnchorAdminPromptViewHandleDelegate> _delegate;
    HTSEventContext *_trackContext;
    id<IESLiveRoomService> _room;
    UIView *_container;
    IESLiveAnchorAdminPromptView *_promptView;
    NSMutableArray *_messages;
    HTSLivePromptMessage *_currentMessage;
}

@property (weak, nonatomic) UIView *container;
@property (retain, nonatomic) IESLiveAnchorAdminPromptView *promptView;
@property (copy, nonatomic) NSMutableArray *messages;
@property (nonatomic) BOOL animating;
@property (retain, nonatomic) HTSLivePromptMessage *currentMessage;
@property (weak, nonatomic) id<IESLiveAnchorAdminPromptViewHandleDelegate> delegate;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)enQueue:(id)arg0;
- (void)addCloseButton;
- (void)closePromptView;
- (void)removePromptView;
- (void)promptMessageFinishShow:(id)arg0;
- (void)handleTracker:(id)arg0 promptMessage:(id)arg1;
- (id)deQueue;
- (void)addPromptView:(id)arg0;
- (void)transformPromptView:(id)arg0;
- (void)setupPromptViewContent:(id)arg0;
- (void)emitMessageIfNeeded;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)setAnimating:(BOOL)arg0;
- (id)messages;
- (id)delegate;
- (id)currentMessage;
- (id)promptView;
- (void)setDelegate:(id)arg0;
- (id)initWithContainer:(id)arg0;
- (void)setPromptView:(id)arg0;
- (void)setMessages:(id)arg0;
- (void)setLineSpacing:(id)arg0;
- (BOOL)animating;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setCurrentMessage:(id)arg0;

@end