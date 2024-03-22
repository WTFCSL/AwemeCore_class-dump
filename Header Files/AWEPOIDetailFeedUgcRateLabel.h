//
//     Generated by private class-dump
//

@class AWEPOIDetailFeedUgcRateLabelConfig, UIView, NSAttributedString, YYLabel;
@protocol AWEPOIDetailFeedUgcRateLabelDelegate;

@interface AWEPOIDetailFeedUgcRateLabel : UIView {
    AWEPOIDetailFeedUgcRateLabelConfig *_config;
    id<AWEPOIDetailFeedUgcRateLabelDelegate> _delegate;
    YYLabel *_contentLabel;
    UIView *_expandTruncationView;
    NSAttributedString *_expandToken;
    NSAttributedString *_collapseToken;
}

@property (retain, nonatomic) AWEPOIDetailFeedUgcRateLabelConfig *config;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *expandTruncationView;
@property (retain, nonatomic) NSAttributedString *expandToken;
@property (retain, nonatomic) NSAttributedString *collapseToken;
@property (weak, nonatomic) id<AWEPOIDetailFeedUgcRateLabelDelegate> delegate;

+ (void)emoticonForAttributedString:(id)arg0 font:(id)arg1;
+ (id)calculateContentHeightWithModel:(id)arg0 config:(id)arg1;

- (void)updateWithConfig:(id)arg0 string:(id)arg1 hasExpandTruncation:(BOOL)arg2 didExpand:(BOOL)arg3;
- (void)didClickContentTextArea;
- (void)setupExpandTruncationView;
- (void)didClickExpandToken;
- (void)setExpandTruncationView:(id)arg0;
- (id)expandTruncationView;
- (id)collapseToken;
- (id)expandToken;
- (void)didClickCollapseToken;
- (void)updateWithString:(id)arg0 expandedStatus:(unsigned long long)arg1 didExpand:(BOOL)arg2;
- (void)updateGradientTokenWithExpandStatus:(BOOL)arg0 content:(id)arg1;
- (void)updateTruncationTokenWithExpandStatus:(unsigned long long)arg0 didExpand:(BOOL)arg1 content:(id)arg2;
- (void)refreshCollapseTokenWithTruncationText:(id)arg0;
- (void)setExpandToken:(id)arg0;
- (void)setCollapseToken:(id)arg0;
- (id)attributedText;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)updateWithConfig:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end