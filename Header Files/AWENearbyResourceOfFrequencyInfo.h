//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWENearbyResourceOfFrequencyInfo : MTLModel <MTLJSONSerializing> {
    NSArray *_actions;
    NSString *_objectType;
    NSString *_objectIndex;
    NSString *_objectSvrData;
}

@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *objectType;
@property (copy, nonatomic) NSString *objectIndex;
@property (copy, nonatomic) NSString *objectSvrData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (id)objectIndex;
- (id)objectSvrData;
- (void)setObjectIndex:(id)arg0;
- (void)setObjectSvrData:(id)arg0;
- (void).cxx_destruct;
- (id)actions;
- (void)setActions:(id)arg0;
- (id)objectType;
- (void)setObjectType:(id)arg0;

@end
