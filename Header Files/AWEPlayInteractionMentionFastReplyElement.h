//
//     Generated by private class-dump
//

@class NSString, AFDMentionFastReplyView;

@interface AWEPlayInteractionMentionFastReplyElement : AWEPlayInteractionLeftElement {
    AFDMentionFastReplyView *_fastReplyView;
    NSString *_referString;
}

@property (retain, nonatomic) AFDMentionFastReplyView *fastReplyView;
@property (copy, nonatomic) NSString *referString;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)initializeElement;
- (void)setAppear:(BOOL)arg0;
- (id)activateInfoWithData:(id)arg0;
- (void)p_replyMention:(id)arg0;
- (void)viewController_viewWillAppear;
- (void)layoutElementView;
- (id)fastReplyView;
- (void)setFastReplyView:(id)arg0;
- (void)viewController_viewWillDisappear;
- (void)p_hideIfNeeded:(id)arg0;
- (BOOL)p_shouldShow:(id)arg0;
- (void)p_sendComment:(id)arg0 completion:(id /* block */)arg1;
- (void)p_hideWithAnimated:(BOOL)arg0;
- (id)fastReplyDataSource;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;

@end
