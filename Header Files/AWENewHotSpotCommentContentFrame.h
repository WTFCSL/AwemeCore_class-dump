//
//     Generated by private class-dump
//

@class YYTextLayout, NSArray, NSMutableAttributedString;

@interface AWENewHotSpotCommentContentFrame : NSObject {
    BOOL _unlimitedMaxNumberOfRows;
    BOOL _shouldShowFullTextButton;
    BOOL _isShowingFullTextButton;
    BOOL _shouldShowFoldButton;
    BOOL _isCommentPanelHeader;
    BOOL _hasCalculateNumberOfRows;
    YYTextLayout *_descriptionLayout;
    NSArray *_linkRangeArray;
    NSMutableAttributedString *_displayDescription;
    long long _contentLabelStyle;
    double _containerWidth;
    long long _currentContentNumberOfRows;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _descriptionFrame;
}

@property (nonatomic) double containerWidth;
@property (nonatomic) long long currentContentNumberOfRows;
@property (nonatomic) BOOL hasCalculateNumberOfRows;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } descriptionFrame;
@property (retain, nonatomic) YYTextLayout *descriptionLayout;
@property (retain, nonatomic) NSArray *linkRangeArray;
@property (retain, nonatomic) NSMutableAttributedString *displayDescription;
@property (nonatomic) BOOL unlimitedMaxNumberOfRows;
@property (nonatomic) BOOL shouldShowFullTextButton;
@property (nonatomic) BOOL isShowingFullTextButton;
@property (nonatomic) BOOL shouldShowFoldButton;
@property (nonatomic) long long contentLabelStyle;
@property (nonatomic) BOOL isCommentPanelHeader;

- (void)setShouldShowFoldButton:(BOOL)arg0;
- (void)attributedContentForComment:(id)arg0 displayWidth:(double)arg1;
- (BOOL)shouldShowFoldButton;
- (void)setIsCommentPanelHeader:(BOOL)arg0;
- (BOOL)isCommentPanelHeader;
- (void)configFrameWithCardModel:(id)arg0 containerWidth:(double)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })descriptionFrame;
- (void)setShouldShowFullTextButton:(BOOL)arg0;
- (void)setDescriptionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setUnlimitedMaxNumberOfRows:(BOOL)arg0;
- (long long)contentLabelStyle;
- (void)setContentLabelStyle:(long long)arg0;
- (void)setLinkRangeArray:(id)arg0;
- (void)foldButtonWithAttributedString:(id)arg0;
- (BOOL)hasCalculateNumberOfRows;
- (void)setCurrentContentNumberOfRows:(long long)arg0;
- (void)setHasCalculateNumberOfRows:(BOOL)arg0;
- (void)setDescriptionLayout:(id)arg0;
- (void)setDisplayDescription:(id)arg0;
- (BOOL)shouldShowFullTextButton;
- (BOOL)isAttributedStringTruncated:(id)arg0;
- (void)setIsShowingFullTextButton:(BOOL)arg0;
- (BOOL)unlimitedMaxNumberOfRows;
- (long long)currentContentNumberOfRows;
- (id)linkRangeArray;
- (BOOL)isShowingFullTextButton;
- (id)init;
- (void).cxx_destruct;
- (id)displayDescription;
- (id)descriptionLayout;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;
- (long long)maxNumberOfRows;

@end