//
//     Generated by private class-dump
//

@class IESLiveMessageReplyTreeManager, NSString;

@interface IESLivePublicScreenReplyTreeAttachment : NSObject <IESLivePublicScreenReplyTreeFunctionProtocol> {
    BOOL _commentReplyLinkEnable;
    IESLiveMessageReplyTreeManager *_replyTreeManager;
}

@property (retain, nonatomic) IESLiveMessageReplyTreeManager *replyTreeManager;
@property (nonatomic) BOOL commentReplyLinkEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)replyTreeViewWithMessage:(id)arg0;
- (BOOL)commentReplyLinkEnable;
- (void)setCommentReplyLinkEnable:(BOOL)arg0;
- (void)setupWithDIContext:(id)arg0 room:(id)arg1 trackContext:(id)arg2;
- (void)checkAndCreateReplyTreeViewWithNode:(id)arg0;
- (id)buildCommetPanelConfigWithNode:(id)arg0 config:(id)arg1;
- (void)highlightCellWithNode:(id)arg0 bgView:(id)arg1 isHighlighted:(BOOL)arg2;
- (id)replyTreeManager;
- (void)setReplyTreeManager:(id)arg0;
- (void).cxx_destruct;

@end
