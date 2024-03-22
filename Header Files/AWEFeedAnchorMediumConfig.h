//
//     Generated by private class-dump
//

@class AWEMarkView;

@interface AWEFeedAnchorMediumConfig : AWEFeedAnchorBaseConfig {
    BOOL _isExpand;
    AWEMarkView *_mediumButton;
}

@property (retain, nonatomic) AWEMarkView *mediumButton;
@property (nonatomic) BOOL isExpand;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)arg0 extraInfo:(id)arg1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg0 extraInfo:(id)arg1;
+ (id)anchorType;

- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg0;
- (id)anchorViewWithModel:(id)arg0;
- (void)anchorViewWillShowOnSuperview;
- (id)mediumButton;
- (void)handleAnchorViewTapped;
- (void)trackEventWithEventName:(id)arg0;
- (void)updateWithAwemeModel:(id)arg0 needPerformOnDisplay:(BOOL)arg1;
- (id)commonParams;
- (id /* block */)layoutWithAwemeModel:(id)arg0 commonLayoutInfo:(id)arg1;
- (void)setAdTagLabelAttributedText:(id)arg0 tailText:(id)arg1;
- (void)setMarkLabelAttributedText:(id)arg0 tailText:(id)arg1;
- (id)attributeStringForNewStyleWithText:(id)arg0 tailText:(id)arg1;
- (id)attributeStringWithText:(id)arg0 tailText:(id)arg1;
- (void)updateAnchorWithPlayBackTime:(double)arg0;
- (void)setMediumButton:(id)arg0;
- (void).cxx_destruct;
- (void)reset;

@end