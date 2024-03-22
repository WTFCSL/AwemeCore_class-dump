//
//     Generated by private class-dump
//

@class UIFont, NSString, NSTimer, NSAttributedString, NSMutableDictionary, YYTextContainer, NSMutableArray, AWEECShoppingGuideMessageModel, UIColor;
@protocol AWEECShoppingGuideGrowingLabelDelegate;

@interface AWEECShoppingGuideGrowingLabel : YYLabel {
    BOOL _enableTypewriterEffect;
    BOOL _isPrinting;
    BOOL _appendLoading;
    BOOL _isFoldable;
    id<AWEECShoppingGuideGrowingLabelDelegate> _delegate;
    UIFont *_plainTextFont;
    UIColor *_plainTextColor;
    AWEECShoppingGuideMessageModel *_weakMessageModel;
    NSString *_location;
    id /* block */ _retryBlock;
    double _preHeight;
    NSString *_targetText;
    NSTimer *_typewriterTimer;
    unsigned long long _typewriterCursor;
    NSMutableArray *_paragraphs;
    NSMutableDictionary *_paragraphCurrentStyle;
    NSString *_currentParagraphTag;
    NSString *_preParagraphTag;
    NSMutableArray *_tagStack;
    NSAttributedString *_itemPrefix;
    NSAttributedString *_searchPostfix;
    NSAttributedString *_recomPrefix;
    NSAttributedString *_loadingPostfix;
    YYTextContainer *_calcLineContainer;
}

@property (nonatomic) double preHeight;
@property (copy, nonatomic) NSString *targetText;
@property (retain, nonatomic) NSTimer *typewriterTimer;
@property (nonatomic) unsigned long long typewriterCursor;
@property (retain, nonatomic) NSMutableArray *paragraphs;
@property (retain, nonatomic) NSMutableDictionary *paragraphCurrentStyle;
@property (copy, nonatomic) NSString *currentParagraphTag;
@property (copy, nonatomic) NSString *preParagraphTag;
@property (retain, nonatomic) NSMutableArray *tagStack;
@property (copy, nonatomic) NSAttributedString *itemPrefix;
@property (copy, nonatomic) NSAttributedString *searchPostfix;
@property (copy, nonatomic) NSAttributedString *recomPrefix;
@property (copy, nonatomic) NSAttributedString *loadingPostfix;
@property (nonatomic) BOOL isFoldable;
@property (retain, nonatomic) YYTextContainer *calcLineContainer;
@property (weak, nonatomic) id<AWEECShoppingGuideGrowingLabelDelegate> delegate;
@property (nonatomic) BOOL enableTypewriterEffect;
@property (readonly, nonatomic) BOOL isPrinting;
@property (retain, nonatomic) UIFont *plainTextFont;
@property (retain, nonatomic) UIColor *plainTextColor;
@property (nonatomic) BOOL appendLoading;
@property (weak, nonatomic) AWEECShoppingGuideMessageModel *weakMessageModel;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) id /* block */ retryBlock;

+ (id)styleTags;
+ (id)paragraphTags;

- (void)setWeakMessageModel:(id)arg0;
- (void)setPlainTextFont:(id)arg0;
- (void)setPlainTextColor:(id)arg0;
- (void)setEnableTypewriterEffect:(BOOL)arg0;
- (void)enableFullTextPopup;
- (void)resumeTypewriter;
- (void)skipTypewriter;
- (double)preHeight;
- (void)setPreHeight:(double)arg0;
- (id)weakMessageModel;
- (void)setIsFoldable:(BOOL)arg0;
- (void)showFullTextPopup;
- (BOOL)enableTypewriterEffect;
- (id)targetText;
- (void)setTargetText:(id)arg0;
- (void)processTextWithAppendingString:(id)arg0;
- (id)typewriterTimer;
- (void)typewriterPrintCharacter;
- (void)setTypewriterTimer:(id)arg0;
- (void)pauseTypewriter;
- (void)setTypewriterCursor:(unsigned long long)arg0;
- (unsigned long long)typewriterCursor;
- (id)typewriterReadNextChar;
- (void)openSearchResultPageWithQuery:(id)arg0;
- (id)searchPostfix;
- (BOOL)isFoldable;
- (id)currentParagraphTag;
- (id)calcLineContainer;
- (id)paragraphCurrentStyle;
- (void)setPreParagraphTag:(id)arg0;
- (void)setCurrentParagraphTag:(id)arg0;
- (void)setParagraphCurrentStyle:(id)arg0;
- (void)setAppendLoading:(BOOL)arg0;
- (id)preParagraphTag;
- (id)itemPrefix;
- (id)recomPrefix;
- (BOOL)appendLoading;
- (id)loadingPostfix;
- (void)setTagStack:(id)arg0;
- (id)plainTextFont;
- (id)plainTextColor;
- (void)reprocessTextWithString:(id)arg0;
- (void)resetTypewriter;
- (void)setItemPrefix:(id)arg0;
- (void)setSearchPostfix:(id)arg0;
- (void)setRecomPrefix:(id)arg0;
- (void)setLoadingPostfix:(id)arg0;
- (void)setCalcLineContainer:(id)arg0;
- (void)setPreferredMaxLayoutWidth:(double)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)location;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setLocation:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)defaultParagraphStyle;
- (void)setupUI;
- (BOOL)isPrinting;
- (id)paragraphs;
- (void)appendText:(id)arg0;
- (void)setParagraphs:(id)arg0;
- (id)tagStack;
- (id /* block */)retryBlock;
- (void)setRetryBlock:(id /* block */)arg0;

@end
