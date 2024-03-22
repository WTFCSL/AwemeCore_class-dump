//
//     Generated by private class-dump
//

@class RTVChatInteractiveEmojiPlayViewLayout, NSString, RTVChatInteractiveEmojiViewModelValueTransform, NSMutableSet, NSMutableArray;
@protocol RTVChatController, RTVInteractionRecorder, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVEffectEmojiAnimationController;

@interface RTVChatInteractiveEmojiPlayViewController : UIViewController <RTVChatControllerObserver, RTVChatInteractiveEmojiPlayViewController> {
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVChatController> _chatController;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    RTVChatInteractiveEmojiViewModelValueTransform *_valueTransform;
    id<RTVEffectEmojiAnimationController> _effectEmojiAnimationController;
    RTVChatInteractiveEmojiPlayViewLayout *_layout;
    NSMutableSet *_displayingEmojis;
    id<RTVInteractionRecorder> _interactionStateRecorder;
    NSMutableArray *_stateRecorderTokens;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _safeArea;
}

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVChatController> chatController;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeArea;
@property (readonly, nonatomic) RTVChatInteractiveEmojiViewModelValueTransform *valueTransform;
@property (readonly, nonatomic) id<RTVEffectEmojiAnimationController> effectEmojiAnimationController;
@property (retain, nonatomic) RTVChatInteractiveEmojiPlayViewLayout *layout;
@property (retain, nonatomic) NSMutableSet *displayingEmojis;
@property (readonly, weak, nonatomic) id<RTVInteractionRecorder> interactionStateRecorder;
@property (readonly, nonatomic) NSMutableArray *stateRecorderTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)deactive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })safeArea;
- (void)setSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)__createComponents;
- (void)__configComponents;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (void)changeEmojiPlayAnimationEnable:(BOOL)arg0;
- (id)roomController;
- (void)__bindStateRecorder;
- (id)stateRecorderTokens;
- (id)interactionStateRecorder;
- (void)didReceiveNewMessages:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__insetSafeArea;
- (id)effectEmojiAnimationController;
- (id)__generateEmojiPlayViewWithMessageViewModel:(id)arg0;
- (id)displayingEmojis;
- (id)valueTransform;
- (void)receiveInteractiveEmojiMessage:(id)arg0;
- (void)setDisplayingEmojis:(id)arg0;
- (void)setLayout:(id)arg0;
- (void)active;
- (void).cxx_destruct;
- (id)layout;
- (void)dealloc;
- (void)viewDidLoad;
- (id)chatController;

@end