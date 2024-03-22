//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSString;

@interface IESLatchAPITemplate : NSObject <IESLatchConfigTemplate> {
    NSArray *children;
    NSMutableDictionary *_apis;
}

@property (retain, nonatomic) NSMutableDictionary *apis;
@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)apiNodeForName:(id)arg0;
- (id)buildParamsOfNode:(id)arg0 withSchema:(id)arg1 variables:(id)arg2 globalProps:(id)arg3 percentEscapes:(BOOL)arg4;
- (id)paramsOfNode:(id)arg0 withSchema:(id)arg1 variables:(id)arg2 globalProps:(id)arg3 percentEscapes:(BOOL)arg4;
- (id)paramsOfValue:(id)arg0 dataType:(unsigned long long)arg1;
- (void)addAPINode:(id)arg0;
- (unsigned long long)countOfNodes;
- (id)apis;
- (void)setApis:(id)arg0;
- (id)process:(id)arg0;
- (void)setChildren:(id)arg0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)children;

@end