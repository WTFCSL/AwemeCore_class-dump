//
//     Generated by private class-dump
//

@class AWEMarkView;

@interface AWEFeedAnchorMusicBeatTemplateConfig : AWEFeedAnchorBaseConfig {
    AWEMarkView *_musicBeatTemplateButton;
}

@property (retain, nonatomic) AWEMarkView *musicBeatTemplateButton;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)p_featureBitsCheckWithExtra:(id)arg0;
+ (id)p_extractNLESummaryFromExtra:(id)arg0;
+ (id)anchorType;

- (id)anchorViewWithModel:(id)arg0;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (id)musicBeatTemplateButton;
- (void)setMusicBeatTemplateButton:(id)arg0;
- (void).cxx_destruct;

@end
