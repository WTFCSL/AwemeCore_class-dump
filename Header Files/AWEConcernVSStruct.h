//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConcernVSStruct : MTLModel <MTLJSONSerializing> {
    long long _vsDistributeType;
    NSString *_insertTaskId;
}

@property (nonatomic) long long vsDistributeType;
@property (copy, nonatomic) NSString *insertTaskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)insertTaskId;
- (void)setInsertTaskId:(id)arg0;
- (long long)vsDistributeType;
- (void)setVsDistributeType:(long long)arg0;
- (void).cxx_destruct;

@end
