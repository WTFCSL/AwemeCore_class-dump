//
//     Generated by private class-dump
//

@class AWEMarkView;

@interface AWEFeedAnchorARConfig : AWEFeedAnchorBaseConfig {
    AWEMarkView *_arButton;
}

@property (retain, nonatomic) AWEMarkView *arButton;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)arg0 extraInfo:(id)arg1;
+ (id)anchorType;

- (id)anchorViewWithModel:(id)arg0;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (id)arButton;
- (void)setArButton:(id)arg0;
- (void).cxx_destruct;
- (void)reset;

@end
