//
//     Generated by private class-dump
//

@class NSString, TTTAttributedLabel, UILabel, UIGestureRecognizer, UIView;

@interface AWEPostPageCoCreatorAlert : UIView <UIGestureRecognizerDelegate, TTTAttributedLabelDelegate> {
    BOOL _cancleByBlankSpace;
    TTTAttributedLabel *_content;
    id /* block */ _detailBlock;
    UIView *_container;
    UILabel *_title;
    UIView *_splitLine;
    UILabel *_actionLabel;
    UIGestureRecognizer *_tap;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIGestureRecognizer *tap;
@property (retain, nonatomic) TTTAttributedLabel *content;
@property (copy, nonatomic) id /* block */ detailBlock;
@property (nonatomic) BOOL cancleByBlankSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)arg0 didSelectLinkWithURL:(id)arg1;
- (void)showOnView:(id)arg0 animated:(BOOL)arg1;
- (id)splitLine;
- (void)setSplitLine:(id)arg0;
- (id /* block */)detailBlock;
- (void)setDetailBlock:(id /* block */)arg0;
- (void)mainButtonTapped:(id)arg0;
- (id)initWithTitle:(id)arg0 attributedContent:(id)arg1;
- (void)setCancleByBlankSpace:(BOOL)arg0;
- (BOOL)cancleByBlankSpace;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)content;
- (id)title;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)dismiss:(BOOL)arg0;
- (void)setupUI;
- (id)actionLabel;
- (id)tap;
- (void)setTap:(id)arg0;
- (void)setActionLabel:(id)arg0;
- (id)initWithTitle:(id)arg0 content:(id)arg1;
- (void)updateTitle:(id)arg0;

@end
