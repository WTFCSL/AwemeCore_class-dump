//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface DitoGeneralContainerTagItem : NSObject {
    BOOL _selected;
    BOOL _didTrackTabShow;
    NSString *_displayText;
    long long _count;
    long long _optionType;
    NSString *_tabId;
    id /* block */ _didClickTag;
    NSString *_selectedImageURL;
    NSString *_unselectedImageURL;
    NSString *_requestString;
    NSDictionary *_data;
}

@property (copy, nonatomic) NSString *requestString;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL didTrackTabShow;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) long long count;
@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ didClickTag;
@property (copy, nonatomic) NSString *selectedImageURL;
@property (copy, nonatomic) NSString *unselectedImageURL;

- (id)tabId;
- (void)setTabId:(id)arg0;
- (void)setOptionType:(long long)arg0;
- (id)selectedImageURL;
- (void)setSelectedImageURL:(id)arg0;
- (id)unselectedImageURL;
- (void)setUnselectedImageURL:(id)arg0;
- (void)setDidTrackTabShow:(BOOL)arg0;
- (id)requestString;
- (id /* block */)didClickTag;
- (void)setDidClickTag:(id /* block */)arg0;
- (void)setRequestString:(id)arg0;
- (BOOL)didTrackTabShow;
- (BOOL)selected;
- (void)setCount:(long long)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)displayText;
- (long long)count;
- (void)setSelected:(BOOL)arg0;
- (id)initWithData:(id)arg0;
- (void)setDisplayText:(id)arg0;
- (long long)optionType;

@end
