//
//     Generated by private class-dump
//

@protocol BDRHTMLParserDelegate <NSObject>

@optional

- (void)parser:(id)arg0 foundCharacters:(id)arg1;
- (void)parser:(id)arg0 parseErrorOccurred:(id)arg1;
- (void)parser:(id)arg0 foundCDATA:(id)arg1;
- (void)parserDidEndDocument:(id)arg0;
- (void)parserDidStartDocument:(id)arg0;
- (void)parser:(id)arg0 foundProcessingInstructionWithTarget:(id)arg1 data:(id)arg2;
- (void)parser:(id)arg0 foundComment:(id)arg1;
- (void)parser:(id)arg0 didStartElement:(id)arg1 attributes:(id)arg2;
- (void)parser:(id)arg0 didEndElement:(id)arg1;

@end
