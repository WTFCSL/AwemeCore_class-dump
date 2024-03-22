//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESGCPSchemaRegister : NSObject <IESGCPSchemaInterface> {
    NSArray *_parserClassArray;
}

@property (retain, nonatomic) NSArray *parserClassArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openSchema:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (id)supportedSchemaList;
- (id)parserClassArray;
- (id)schemaWithParserClass:(Class)arg0;
- (void)setParserClassArray:(id)arg0;
- (void).cxx_destruct;

@end
