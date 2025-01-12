//
//     Generated by private class-dump
//

@class Node, NSString, NSMutableDictionary, SVGKSource, SVGKParseResult, NSMutableArray, NSMutableString;

@interface SVGKParser : NSObject {
    NSMutableString *_storedChars;
    NSMutableArray *_stackOfParserExtensions;
    Node *_parentOfCurrentNode;
    BOOL _hasCancelBeenRequested;
    SVGKSource *source;
    NSMutableArray *externalStylesheets;
    SVGKParseResult *currentParseRun;
    NSString *defaultXMLNamespaceForThisParseRun;
    NSMutableArray *parserExtensions;
    NSMutableDictionary *parserKnownNamespaces;
}

@property (retain, nonatomic) SVGKSource *source;
@property (retain, nonatomic) NSMutableArray *externalStylesheets;
@property (retain, nonatomic) SVGKParseResult *currentParseRun;
@property (retain, nonatomic) NSString *defaultXMLNamespaceForThisParseRun;
@property (nonatomic) BOOL hasCancelBeenRequested;
@property (retain, nonatomic) NSMutableArray *parserExtensions;
@property (retain, nonatomic) NSMutableDictionary *parserKnownNamespaces;

+ (id)NSDictionaryFromCSSAttributes:(id)arg0;
+ (id)newParserWithDefaultSVGKParserExtensions:(id)arg0;
+ (void)cancelParser:(id)arg0;
+ (id)parseSourceUsingDefaultSVGKParser:(id)arg0;

- (void)setHasCancelBeenRequested:(BOOL)arg0;
- (void)addDefaultSVGParserExtensions;
- (id)parseSynchronously;
- (void)setParserExtensions:(id)arg0;
- (void)setExternalStylesheets:(id)arg0;
- (void)addParserExtension:(id)arg0;
- (id)parserExtensions;
- (id)parserKnownNamespaces;
- (void)setParserKnownNamespaces:(id)arg0;
- (id)currentParseRun;
- (void)setCurrentParseRun:(id)arg0;
- (BOOL)hasCancelBeenRequested;
- (id)loadCSSFrom:(id)arg0;
- (id)stringFromSource:(id)arg0;
- (id)externalStylesheets;
- (void)addExternalStylesheetsToRootElement;
- (void)handleProcessingInstruction:(id)arg0 withData:(id)arg1;
- (void)handleStartElement:(id)arg0 namePrefix:(id)arg1 namespaceURI:(id)arg2 attributeObjects:(id)arg3;
- (void)handleEndElement:(id)arg0;
- (void)handleFoundCharacters:(const char *)arg0 length:(int)arg1;
- (id)defaultXMLNamespaceForThisParseRun;
- (void)setDefaultXMLNamespaceForThisParseRun:(id)arg0;
- (id)initWithSource:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setSource:(id)arg0;

@end
