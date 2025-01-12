//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEStickerSugRecordModel;

@interface AWEStickerSugModel : MTLModel <MTLJSONSerializing> {
    NSString *_content;
    NSArray *_highlightPositions;
    AWEStickerSugRecordModel *_wordRecord;
}

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *highlightPositions;
@property (retain, nonatomic) AWEStickerSugRecordModel *wordRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordRecordJSONTransformer;
+ (id)highlightPositionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)wordRecord;
- (void)setWordRecord:(id)arg0;
- (id)highlightPositions;
- (void)setHighlightPositions:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;

@end
