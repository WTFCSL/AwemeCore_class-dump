//
//     Generated by private class-dump
//

@class NSString;

@interface SVGKParserSVG : NSObject <SVGKParserExtension>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedNamespaces;
- (id)supportedTags;
- (id)handleStartElement:(id)arg0 document:(id)arg1 namePrefix:(id)arg2 namespaceURI:(id)arg3 attributes:(id)arg4 parseResult:(id)arg5 parentNode:(id)arg6;
- (void)handleEndElement:(id)arg0 document:(id)arg1 parseResult:(id)arg2;
- (id)init;

@end
