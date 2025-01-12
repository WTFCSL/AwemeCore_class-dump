//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEPOICityDetailTagItem : NSObject {
    BOOL _selected;
    BOOL _didTrackTabShow;
    NSString *_displayText;
    long long _optionType;
    NSString *_tabId;
    id /* block */ _didClickTag;
    NSString *_requestString;
    NSDictionary *_data;
    struct CGPoint { double x; double y; } _pageOffset;
}

@property (copy, nonatomic) NSString *requestString;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL didTrackTabShow;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) BOOL selected;
@property (nonatomic) struct CGPoint { double x; double y; } pageOffset;
@property (copy, nonatomic) id /* block */ didClickTag;

- (id)tabId;
- (void)setTabId:(id)arg0;
- (void)setOptionType:(long long)arg0;
- (void)setDidTrackTabShow:(BOOL)arg0;
- (id)requestString;
- (id /* block */)didClickTag;
- (void)setDidClickTag:(id /* block */)arg0;
- (void)setRequestString:(id)arg0;
- (BOOL)didTrackTabShow;
- (BOOL)selected;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)displayText;
- (void)setSelected:(BOOL)arg0;
- (id)initWithData:(id)arg0;
- (void)setDisplayText:(id)arg0;
- (struct CGPoint { double x0; double x1; })pageOffset;
- (void)setPageOffset:(struct CGPoint { double x0; double x1; })arg0;
- (long long)optionType;

@end
