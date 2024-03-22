//
//     Generated by private class-dump
//

@class AWEMarkView;

@interface AWEFeedAnchorGreenScreenConfig : AWEFeedAnchorBaseConfig {
    AWEMarkView *_greenScreenButton;
}

@property (retain, nonatomic) AWEMarkView *greenScreenButton;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (id)anchorType;

- (id)anchorViewWithModel:(id)arg0;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (id)greenScreenButton;
- (void)updateButtonMarkText:(id)arg0;
- (void)setGreenScreenButton:(id)arg0;
- (void).cxx_destruct;

@end
