//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESPolicyCleanCommandModel : MTLModel <MTLJSONSerializing> {
    NSString *_resourceType;
    NSString *_panel;
    NSString *_strategy;
    NSString *_timeThreshold;
    NSArray *_deleteKeys;
    NSArray *_allowKeys;
}

@property (copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSString *panel;
@property (copy, nonatomic) NSString *strategy;
@property (copy, nonatomic) NSString *timeThreshold;
@property (copy, nonatomic) NSArray *deleteKeys;
@property (copy, nonatomic) NSArray *allowKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)timeThreshold;
- (void)setTimeThreshold:(id)arg0;
- (id)deleteKeys;
- (void)setDeleteKeys:(id)arg0;
- (id)allowKeys;
- (void)setAllowKeys:(id)arg0;
- (id)strategy;
- (id)resourceType;
- (void).cxx_destruct;
- (void)setResourceType:(id)arg0;
- (void)setStrategy:(id)arg0;
- (id)panel;
- (void)setPanel:(id)arg0;

@end