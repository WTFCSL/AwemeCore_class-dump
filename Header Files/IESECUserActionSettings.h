//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECUserActionSettings : MTLModel <MTLJSONSerializing> {
    NSArray *_actionList;
}

@property (copy, nonatomic) NSArray *actionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)actionList;
- (void)setActionList:(id)arg0;

@end
