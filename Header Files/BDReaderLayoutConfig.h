//
//     Generated by private class-dump
//

@class NSArray, UIFont;

@interface BDReaderLayoutConfig : NSObject {
    BOOL _autoFirstLineHeadIndent;
    BOOL _autoAdjustScrollTopInset;
    BOOL _layoutInMainThread;
    BOOL _titleUnselectionBind;
    BOOL _needInsertTitle;
    BOOL _combineParser;
    BOOL _streamLayout;
    BOOL _mergeQuotation;
    double _textFontSize;
    double _titleFontSize;
    UIFont *_textFont;
    UIFont *_titleFont;
    double _paragraphSpace;
    double _characterSpace;
    double _lineSpace;
    double _marginBetweenTitleAndTop;
    double _marginBetweenContentAndTitle;
    long long _paragraphTextAlignment;
    long long _paragraphTitleAlignment;
    unsigned long long _layoutEngine;
    unsigned long long _layoutCacheCount;
    NSArray *_skipBlankTags;
    double _tttextSpaceOffset;
    struct CGSize { double width; double height; } _contentSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _pageInset;
}

@property (nonatomic) double textFontSize;
@property (nonatomic) double titleFontSize;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } pageInset;
@property (nonatomic) double paragraphSpace;
@property (nonatomic) double characterSpace;
@property (nonatomic) double lineSpace;
@property (nonatomic) BOOL autoFirstLineHeadIndent;
@property (nonatomic) double marginBetweenTitleAndTop;
@property (nonatomic) double marginBetweenContentAndTitle;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL autoAdjustScrollTopInset;
@property (nonatomic) long long paragraphTextAlignment;
@property (nonatomic) long long paragraphTitleAlignment;
@property (nonatomic) unsigned long long layoutEngine;
@property (nonatomic) unsigned long long layoutCacheCount;
@property (nonatomic) BOOL layoutInMainThread;
@property (nonatomic) BOOL titleUnselectionBind;
@property (nonatomic) BOOL needInsertTitle;
@property (copy, nonatomic) NSArray *skipBlankTags;
@property (nonatomic) BOOL combineParser;
@property (nonatomic) BOOL streamLayout;
@property (nonatomic) double tttextSpaceOffset;
@property (nonatomic) BOOL mergeQuotation;

- (void)setMarginBetweenContentAndTitle:(double)arg0;
- (double)textFontSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pageInset;
- (void)setPageInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)paragraphSpace;
- (void)setParagraphSpace:(double)arg0;
- (double)characterSpace;
- (void)setCharacterSpace:(double)arg0;
- (double)lineSpace;
- (void)setLineSpace:(double)arg0;
- (BOOL)autoFirstLineHeadIndent;
- (void)setAutoFirstLineHeadIndent:(BOOL)arg0;
- (double)marginBetweenTitleAndTop;
- (void)setMarginBetweenTitleAndTop:(double)arg0;
- (double)marginBetweenContentAndTitle;
- (BOOL)autoAdjustScrollTopInset;
- (void)setAutoAdjustScrollTopInset:(BOOL)arg0;
- (long long)paragraphTextAlignment;
- (void)setParagraphTextAlignment:(long long)arg0;
- (long long)paragraphTitleAlignment;
- (void)setParagraphTitleAlignment:(long long)arg0;
- (unsigned long long)layoutCacheCount;
- (void)setLayoutCacheCount:(unsigned long long)arg0;
- (BOOL)layoutInMainThread;
- (void)setLayoutInMainThread:(BOOL)arg0;
- (BOOL)titleUnselectionBind;
- (void)setTitleUnselectionBind:(BOOL)arg0;
- (BOOL)needInsertTitle;
- (void)setNeedInsertTitle:(BOOL)arg0;
- (id)skipBlankTags;
- (void)setSkipBlankTags:(id)arg0;
- (BOOL)combineParser;
- (void)setCombineParser:(BOOL)arg0;
- (BOOL)streamLayout;
- (void)setStreamLayout:(BOOL)arg0;
- (double)tttextSpaceOffset;
- (void)setTttextSpaceOffset:(double)arg0;
- (BOOL)mergeQuotation;
- (void)setMergeQuotation:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)init;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (id)titleFont;
- (void)setTitleFont:(id)arg0;
- (id)textFont;
- (void)setTextFont:(id)arg0;
- (double)titleFontSize;
- (void)setTextFontSize:(double)arg0;
- (void)setTitleFontSize:(double)arg0;
- (unsigned long long)layoutEngine;
- (void)setLayoutEngine:(unsigned long long)arg0;

@end