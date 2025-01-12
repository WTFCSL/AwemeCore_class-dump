//
//     Generated by private class-dump
//

@class NSDictionary, UIImageView, UILabel, UIView, AWEVideoPlayDanmakuModel;
@protocol AWEDanmakuOptionBubbleViewDelegate;

@interface AWEDanmakuOptionBubbleView : UIView {
    BOOL _digged;
    UIView *_digView;
    double _currentBubbleWidth;
    id<AWEDanmakuOptionBubbleViewDelegate> _delegate;
    NSDictionary *_elementsMap;
    UILabel *_digLabel;
    UIImageView *_digImageView;
    UIView *_replyView;
    UIImageView *_replyIconView;
    UILabel *_replyLabel;
    UIView *_reportView;
    UILabel *_reportLabel;
    UIImageView *_reportImageView;
    UIView *_deleteView;
    UILabel *_deleteLabel;
    UIImageView *_deleteImageView;
    long long _diggCount;
    AWEVideoPlayDanmakuModel *_danmakuModel;
}

@property (retain, nonatomic) NSDictionary *elementsMap;
@property (retain, nonatomic) UIView *digView;
@property (retain, nonatomic) UILabel *digLabel;
@property (retain, nonatomic) UIImageView *digImageView;
@property (retain, nonatomic) UIView *replyView;
@property (retain, nonatomic) UIImageView *replyIconView;
@property (retain, nonatomic) UILabel *replyLabel;
@property (retain, nonatomic) UIView *reportView;
@property (retain, nonatomic) UILabel *reportLabel;
@property (retain, nonatomic) UIImageView *reportImageView;
@property (retain, nonatomic) UIView *deleteView;
@property (retain, nonatomic) UILabel *deleteLabel;
@property (retain, nonatomic) UIImageView *deleteImageView;
@property (nonatomic) BOOL digged;
@property (nonatomic) long long diggCount;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmakuModel;
@property (nonatomic) double currentBubbleWidth;
@property (weak, nonatomic) id<AWEDanmakuOptionBubbleViewDelegate> delegate;

- (long long)diggCount;
- (void)setDiggCount:(long long)arg0;
- (void)setupGestureRecognizer;
- (id)replyLabel;
- (void)setReplyLabel:(id)arg0;
- (id)deleteView;
- (void)setDeleteView:(id)arg0;
- (id)deleteImageView;
- (void)setDeleteImageView:(id)arg0;
- (id)digImageView;
- (id)digLabel;
- (void)setDigImageView:(id)arg0;
- (void)setDigLabel:(id)arg0;
- (id)elementsMap;
- (void)setElementsMap:(id)arg0;
- (void)setDeleteLabel:(id)arg0;
- (id)replyView;
- (void)setReplyView:(id)arg0;
- (void)setReportLabel:(id)arg0;
- (id)digView;
- (BOOL)digged;
- (id)initWithElements:(id)arg0 digged:(BOOL)arg1 danmakuModel:(id)arg2;
- (void)setDigged:(BOOL)arg0;
- (double)currentBubbleWidth;
- (id)danmakuModel;
- (void)setDanmakuModel:(id)arg0;
- (void)setupWithElementTypes:(id)arg0;
- (void)updateDigImageView;
- (void)updateDiggViewAccessibilityLabelIfNeed;
- (void)layoutElement:(id)arg0 lastElement:(id)arg1 forType:(id)arg2;
- (void)setupSeparatorForElement:(id)arg0;
- (double)elementWidthForType:(id)arg0;
- (void)setCurrentBubbleWidth:(double)arg0;
- (double)getDiggLabelWidth;
- (id)replyIconView;
- (BOOL)shouldUpdateDiggViewWidth;
- (double)diggLabelWidthDiff;
- (void)onBubbleViewTouchEvent:(id)arg0;
- (void)didTapElementType:(id)arg0;
- (id)getDigLabelText;
- (void)setDigView:(id)arg0;
- (void)setReplyIconView:(id)arg0;
- (void)setReportImageView:(id)arg0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)delegate;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)setDelegate:(id)arg0;
- (id)createElement:(id)arg0;
- (void)setReportView:(id)arg0;
- (id)reportView;
- (id)deleteLabel;
- (id)reportLabel;
- (id)reportImageView;
- (id)createSeparator;

@end
