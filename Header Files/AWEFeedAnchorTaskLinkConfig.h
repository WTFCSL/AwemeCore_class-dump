//
//     Generated by private class-dump
//

@class AWEAdLinkSponsorshipView;

@interface AWEFeedAnchorTaskLinkConfig : AWEFeedAnchorBaseConfig {
    AWEAdLinkSponsorshipView *_linkAdButton;
}

@property (retain, nonatomic) AWEAdLinkSponsorshipView *linkAdButton;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg0 extraInfo:(id)arg1;
+ (id)anchorType;

- (id)anchorViewWithModel:(id)arg0;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (id)linkAdButton;
- (void)setLinkAdButton:(id)arg0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;

@end
