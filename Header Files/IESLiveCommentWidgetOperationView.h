//
//     Generated by private class-dump
//

@class UIButton;

@interface IESLiveCommentWidgetOperationView : UIView {
    id /* block */ _didClickDelete;
    id /* block */ _didClickSend;
    UIButton *_deleteButton;
    UIButton *_sendButton;
}

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *sendButton;
@property (copy, nonatomic) id /* block */ didClickDelete;
@property (copy, nonatomic) id /* block */ didClickSend;

- (id /* block */)didClickDelete;
- (void)makeSendBtnDisable:(BOOL)arg0;
- (void)makeDeleteBtnVisible:(BOOL)arg0;
- (void)setDidClickDelete:(id /* block */)arg0;
- (void)setDidClickSend:(id /* block */)arg0;
- (void)makeDeleteBtnDisable:(BOOL)arg0;
- (void)clickDelete:(id)arg0;
- (void)clickSend:(id)arg0;
- (id /* block */)didClickSend;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)deleteButton;
- (void)setupViews;
- (id)sendButton;
- (void)setSendButton:(id)arg0;

@end
