//
//     Generated by private class-dump
//

@class NSArray, YYTextLayout, AWEAwemeModel, AWENewHotSpotFeedCardModel, NSMutableArray, NSMutableAttributedString;

@interface AWENewHotSpotContentFrame : NSObject {
    BOOL _shouldShowHotSpotTag;
    BOOL _shouldShowFullTextButton;
    BOOL _isShowFullTextButton;
    BOOL _shouldShowFoldButton;
    BOOL _hasCalculateNumberOfRows;
    YYTextLayout *_descriptionLayout;
    NSArray *_linkRangeArray;
    NSMutableAttributedString *_displayDescription;
    long long _contentLabelStyle;
    id /* block */ _attachmentDidLoad;
    AWEAwemeModel *_aweme;
    AWENewHotSpotFeedCardModel *_cardModel;
    double _containerWidth;
    long long _currentContentNumberOfRows;
    NSMutableArray *_rangeArray;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hotSpotTagFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _descriptionFrame;
}

@property (nonatomic) double containerWidth;
@property (nonatomic) long long currentContentNumberOfRows;
@property (nonatomic) BOOL hasCalculateNumberOfRows;
@property (retain, nonatomic) NSMutableArray *rangeArray;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hotSpotTagFrame;
@property (nonatomic) BOOL shouldShowHotSpotTag;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } descriptionFrame;
@property (retain, nonatomic) YYTextLayout *descriptionLayout;
@property (retain, nonatomic) NSArray *linkRangeArray;
@property (retain, nonatomic) NSMutableAttributedString *displayDescription;
@property (nonatomic) BOOL shouldShowFullTextButton;
@property (nonatomic) BOOL isShowFullTextButton;
@property (nonatomic) BOOL shouldShowFoldButton;
@property (nonatomic) long long contentLabelStyle;
@property (copy, nonatomic) id /* block */ attachmentDidLoad;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWENewHotSpotFeedCardModel *cardModel;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })replaceHotSpotFlameIfNeededInAttributedString:(id)arg0 atPostion:(long long)arg1 withColor:(id)arg2 size:(double)arg3 jumpLink:(id)arg4 alignTofont:(id)arg5;
+ (BOOL)enableMixVideo:(id)arg0;

- (id)referString;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (void)setShouldShowFoldButton:(BOOL)arg0;
- (BOOL)shouldShowFoldButton;
- (id)descriptionStringForAweme:(id)arg0;
- (void)configFrameWithCardModel:(id)arg0 containerWidth:(double)arg1;
- (BOOL)shouldShowHotSpotTag;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hotSpotTagFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })descriptionFrame;
- (void)setShouldShowFullTextButton:(BOOL)arg0;
- (void)setDescriptionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
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
- (long long)currentContentNumberOfRows;
- (id)linkRangeArray;
- (void)generalDescriptionWithAttributedString:(id)arg0 maxDisplayWidth:(double)arg1 paragraphStyle:(id)arg2;
- (void)setHotSpotTagFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setShouldShowHotSpotTag:(BOOL)arg0;
- (id)textExtraArrayForAweme:(id)arg0;
- (void)appendPlayTagPlaceholderIfNeededWithAweme:(id)arg0 attributedString:(id)arg1;
- (void)appendMixVideoTagIfNeededWithAweme:(id)arg0 attributedString:(id)arg1;
- (void)setIsShowFullTextButton:(BOOL)arg0;
- (id)formattedJumpTimeForTime:(id)arg0;
- (id)p_resizeImage:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (id)addJumpTimeTextWithModel:(id)arg0 attributes:(id)arg1 authorName:(id)arg2;
- (void)replacePlayTagIfNeeded;
- (BOOL)isShowFullTextButton;
- (id /* block */)attachmentDidLoad;
- (void)setAttachmentDidLoad:(id /* block */)arg0;
- (void)setRangeArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)rangeArray;
- (id)displayDescription;
- (id)descriptionLayout;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;
- (double)maxNumberOfRows;

@end