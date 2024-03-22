//
//     Generated by private class-dump
//

@class IESGCPEvaluationItem, RACDisposable, UIImageView, UILabel, IESGCPImageButton, UIButton;

@interface IESGCPEvaluationDetailFunctionView : UIView {
    BOOL _needShowCommentCount;
    BOOL _needShowCommentImage;
    BOOL _needShowBuryButton;
    id /* block */ _likeHandler;
    id /* block */ _buryHandler;
    id /* block */ _commentReplyHandler;
    UIButton *_likeButton;
    UIImageView *_likeImageView;
    UILabel *_likeLabel;
    UIButton *_buryButton;
    UIImageView *_buryImageView;
    UILabel *_buryLabel;
    IESGCPImageButton *_commentButton;
    IESGCPEvaluationItem *_evaluationItem;
    unsigned long long _style;
    RACDisposable *_likeDisposable;
    RACDisposable *_buryDisposable;
}

@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeLabel;
@property (retain, nonatomic) UIButton *buryButton;
@property (retain, nonatomic) UIImageView *buryImageView;
@property (retain, nonatomic) UILabel *buryLabel;
@property (retain, nonatomic) IESGCPImageButton *commentButton;
@property (retain, nonatomic) IESGCPEvaluationItem *evaluationItem;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) RACDisposable *likeDisposable;
@property (retain, nonatomic) RACDisposable *buryDisposable;
@property (nonatomic) BOOL needShowCommentCount;
@property (nonatomic) BOOL needShowCommentImage;
@property (nonatomic) BOOL needShowBuryButton;
@property (copy, nonatomic) id /* block */ likeHandler;
@property (copy, nonatomic) id /* block */ buryHandler;
@property (copy, nonatomic) id /* block */ commentReplyHandler;

- (id)likeImageView;
- (void)setLikeImageView:(id)arg0;
- (id)commentButton;
- (void)setCommentButton:(id)arg0;
- (void)likeButtonDidClicked;
- (id)likeLabel;
- (void)setLikeLabel:(id)arg0;
- (id)evaluationItem;
- (void)setNeedShowBuryButton:(BOOL)arg0;
- (void)setNeedShowCommentCount:(BOOL)arg0;
- (void)setLikeHandler:(id /* block */)arg0;
- (void)setBuryHandler:(id /* block */)arg0;
- (void)setCommentReplyHandler:(id /* block */)arg0;
- (void)makeTrackNode;
- (BOOL)needShowBuryButton;
- (void)setNeedShowCommentImage:(BOOL)arg0;
- (id /* block */)likeHandler;
- (id /* block */)buryHandler;
- (id)likeDisposable;
- (void)setLikeDisposable:(id)arg0;
- (void)updateWithEvaluationItem:(id)arg0 style:(unsigned long long)arg1;
- (void)setEvaluationItem:(id)arg0;
- (void)refreshCommentCount;
- (void)refreshLikeStatus;
- (void)refreshBuryStatus;
- (id)buryButton;
- (id)buryImageView;
- (id)buryLabel;
- (BOOL)needShowCommentImage;
- (BOOL)needShowCommentCount;
- (id)buryDisposable;
- (void)setBuryDisposable:(id)arg0;
- (id /* block */)commentReplyHandler;
- (void)buryButtonDidClicked;
- (void)commentReplyButtonDidClick;
- (void)setBuryButton:(id)arg0;
- (void)setBuryImageView:(id)arg0;
- (void)setBuryLabel:(id)arg0;
- (unsigned long long)style;
- (id)init;
- (void).cxx_destruct;
- (void)config;
- (void)setStyle:(unsigned long long)arg0;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;
- (void)setupLayout;

@end