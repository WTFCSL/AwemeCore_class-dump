//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDiamondBaseElementParser : NSObject <AWEDiamondElementParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__parseElement:(id)arg0 withDictionary:(id)arg1;
- (void)parseElement:(id)arg0 withData:(id)arg1;
- (void)parseElement:(id)arg0 withStyle:(id)arg1;
- (void)parseElement:(id)arg0 withLayout:(id)arg1;
- (void)__parseElement:(id)arg0 withEvents:(id)arg1;
- (void)__parseElement:(id)arg0 withTemplateEvent:(id)arg1;
- (void)parseElement:(id)arg0 withDictionary:(id)arg1;
- (void)parseElement:(id)arg0 withTemplateData:(id)arg1;

@end