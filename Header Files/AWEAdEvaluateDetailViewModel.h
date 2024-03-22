//
//     Generated by private class-dump
//

@class NSString, AWEAdEvaluateDataController, NSURL, NSAttributedString, AWEAdEvaluateDetailModel;

@interface AWEAdEvaluateDetailViewModel : NSObject {
    BOOL _normalCommentContentExpand;
    BOOL _isDigged;
    BOOL _hasReply;
    BOOL _hasImgList;
    AWEAdEvaluateDetailModel *_normalComment;
    double _normalCommentContentHeight;
    double _replyCommentContentHeight;
    double _cellHeight;
    NSURL *_replayTitleAvatarURL;
    NSString *_replyTitleName;
    NSAttributedString *_rateCommentContentAttrText;
    NSAttributedString *_replayCommentContentAttrText;
    NSAttributedString *_normalCommentContentAttrText;
    id /* block */ _cellLayoutUpdate;
    AWEAdEvaluateDataController *_dataController;
    NSString *_shrinkedCommetString;
    long long _DiggedCount;
    AWEAdEvaluateDetailModel *_replyComment;
}

@property (retain, nonatomic) AWEAdEvaluateDetailModel *normalComment;
@property (copy, nonatomic) NSAttributedString *normalCommentContentAttrText;
@property (copy, nonatomic) NSString *shrinkedCommetString;
@property (copy, nonatomic) NSAttributedString *rateCommentContentAttrText;
@property (copy, nonatomic) NSAttributedString *replayCommentContentAttrText;
@property (retain, nonatomic) NSURL *replayTitleAvatarURL;
@property (copy, nonatomic) NSString *replyTitleName;
@property (nonatomic) double normalCommentContentHeight;
@property (nonatomic) double replyCommentContentHeight;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL normalCommentContentExpand;
@property (nonatomic) BOOL isDigged;
@property (nonatomic) BOOL hasReply;
@property (nonatomic) BOOL hasImgList;
@property (nonatomic) long long DiggedCount;
@property (retain, nonatomic) AWEAdEvaluateDetailModel *replyComment;
@property (copy, nonatomic) id /* block */ cellLayoutUpdate;
@property (weak, nonatomic) AWEAdEvaluateDataController *dataController;

- (void)setDataController:(id)arg0;
- (void)setReplyComment:(id)arg0;
- (id)replyComment;
- (BOOL)hasReply;
- (void)setDiggedCount:(long long)arg0;
- (id)initWithDetailModel:(id)arg0;
- (void)setNormalComment:(id)arg0;
- (void)preCalculateCommentRow;
- (id)normalComment;
- (void)setIsDigged:(BOOL)arg0;
- (void)setHasImgList:(BOOL)arg0;
- (void)setHasReply:(BOOL)arg0;
- (double)calculateNormalCommentContentHeightWithExpand;
- (void)setNormalCommentContentHeight:(double)arg0;
- (BOOL)hasImgList;
- (double)getImageCollectionViewCellHeight;
- (double)calculateReplyCommentContentHeight;
- (void)setReplyCommentContentHeight:(double)arg0;
- (double)normalCommentContentHeight;
- (double)replyCommentContentHeight;
- (long long)takeImgCount;
- (BOOL)normalCommentContentExpand;
- (id)normalCommentContentAttrText;
- (void)setNormalCommentContentExpand:(BOOL)arg0;
- (id)getContentString;
- (void)setShrinkedCommetString:(id)arg0;
- (BOOL)isDigged;
- (long long)DiggedCount;
- (id)getCommentContentAttrText;
- (id)replayCommentContentAttrText;
- (void)packUpNormalCommentContent;
- (void)setNormalCommentContentAttrText:(id)arg0;
- (id)generateContentAttrWithExpand;
- (id)shrinkedCommetString;
- (void)expandNormalCommentContent;
- (double)takeRateScore;
- (id /* block */)cellLayoutUpdate;
- (BOOL)shouldImgShow;
- (BOOL)shouldExpand;
- (BOOL)shouldDigged;
- (long long)takeDiggedCount;
- (BOOL)shouldReply;
- (void)updateDiggWithType:(id)arg0;
- (BOOL)shouldShowTag;
- (id)formateTimestamp:(double)arg0;
- (id)replayTitleAvatarURL;
- (id)replyTitleName;
- (id)rateCommentContentAttrText;
- (void)setReplayTitleAvatarURL:(id)arg0;
- (void)setReplyTitleName:(id)arg0;
- (void)setRateCommentContentAttrText:(id)arg0;
- (void)setReplayCommentContentAttrText:(id)arg0;
- (void)setCellLayoutUpdate:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (id)dataController;
- (void)calculateLayout;

@end
