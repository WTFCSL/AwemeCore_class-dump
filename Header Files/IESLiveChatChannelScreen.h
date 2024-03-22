//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESLivePublicScreenComponent;

@interface IESLiveChatChannelScreen : IESLivePublicScreenView <IESLiveMessageInteractionModuleCommentAction> {
    BOOL _hasTrace;
    UIView<IESLivePublicScreenComponent> *_topList;
    struct CGSize { double width; double height; } _lastContentSize;
}

@property (weak, nonatomic) UIView<IESLivePublicScreenComponent> *topList;
@property (nonatomic) BOOL hasTrace;
@property (nonatomic) struct CGSize { double width; double height; } lastContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)hasTrace;
- (id)publicScreenID;
- (void)didAddToContainer;
- (void)tapUnreadTipView;
- (void)showMentionView:(BOOL)arg0;
- (id)chatChannelViewModel;
- (void)tapMentionViewWithNode:(id)arg0;
- (void)scrollToCurrentBottom;
- (void)addChatChannelTopListView;
- (void)setHasTrace:(BOOL)arg0;
- (void)setTopList:(id)arg0;
- (id)topList;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })lastContentSize;
- (void)setLastContentSize:(struct CGSize { double x0; double x1; })arg0;

@end
