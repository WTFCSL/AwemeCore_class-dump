//
//     Generated by private class-dump
//

@class IESGCPCommentReplyModel, UIView, IESGCPCommentReplyInputView, IESGCPCommentReplyTextView;

@interface IESGCPCommentReplyView : UIView {
    id /* block */ _replyConfirmAction;
    id /* block */ _backgroundClickedHandler;
    id /* block */ _didInactivedHandler;
    IESGCPCommentReplyTextView *_displayTextView;
    UIView *_textBackgroundView;
    UIView *_replyInputBackgroundView;
    IESGCPCommentReplyInputView *_replyInputView;
    IESGCPCommentReplyModel *_model;
}

@property (retain, nonatomic) IESGCPCommentReplyTextView *displayTextView;
@property (retain, nonatomic) UIView *textBackgroundView;
@property (retain, nonatomic) UIView *replyInputBackgroundView;
@property (retain, nonatomic) IESGCPCommentReplyInputView *replyInputView;
@property (retain, nonatomic) IESGCPCommentReplyModel *model;
@property (copy, nonatomic) id /* block */ replyConfirmAction;
@property (copy, nonatomic) id /* block */ backgroundClickedHandler;
@property (copy, nonatomic) id /* block */ didInactivedHandler;

- (id)displayTextView;
- (void)inactiveInputView;
- (id)replyInputView;
- (id /* block */)replyConfirmAction;
- (void)trackReplyCommentPublishClickEventV2;
- (id)replyInputBackgroundView;
- (id /* block */)didInactivedHandler;
- (void)trackReplyCommentKeyboardShowEventV2;
- (void)activeInputViewWithPlaceholder:(id)arg0;
- (id /* block */)backgroundClickedHandler;
- (void)tapTextBackgroundView:(id)arg0;
- (void)tapInputViewBackgroundView:(id)arg0;
- (void)updateViewModelWithCommentId:(id)arg0 commentOrder:(id)arg1 commentKeyword:(id)arg2 commentCount:(id)arg3 replyCommentLevel:(id)arg4 enterFrom:(id)arg5;
- (void)configTrackParamsV2;
- (void)setReplyConfirmAction:(id /* block */)arg0;
- (void)setBackgroundClickedHandler:(id /* block */)arg0;
- (void)setDidInactivedHandler:(id /* block */)arg0;
- (void)setDisplayTextView:(id)arg0;
- (void)setReplyInputBackgroundView:(id)arg0;
- (void)setReplyInputView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupViews;
- (void)addObservers;
- (id)textBackgroundView;
- (void)setTextBackgroundView:(id)arg0;

@end