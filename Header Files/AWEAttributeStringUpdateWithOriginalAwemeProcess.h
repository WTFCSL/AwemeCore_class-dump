//
//     Generated by private class-dump
//

@interface AWEAttributeStringUpdateWithOriginalAwemeProcess : AWEAttributeStringUpdateBaseProcess

- (id)attributeStringUpdateProcess;
- (id)markBeforeModify:(id)arg0 withAttributeStringMode:(unsigned long long)arg1;
- (id)handleDescriptionAttributeString:(id)arg0 withAttributeName:(id)arg1;
- (BOOL)shouldAppendOriginalAwemeTag;
- (BOOL)shouldAppendFromCommentTitle;
- (void)insertOriginalAwemeIfNeededWithAttributedString:(id)arg0;
- (void)insertFromCommentIfNeededWithAttributedString:(id)arg0;
- (void)deleteImageCommentPerString:(id)arg0;
- (id)titleAttributteWithString:(id)arg0;
- (id)originalAwemeTagAttachment;
- (void)originalAwemeTagClicked;

@end
